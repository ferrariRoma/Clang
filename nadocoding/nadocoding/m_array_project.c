//
//  m_array_project.c
//  nadocoding
//
//  Created by 안동규 on 2021/07/09.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 10마리의 서로 다른 동물(각 카드 2장씩)
// 사용자로부터 2개의 입력값을 받아서 -> 같은 동물 찾으면 카드 뒤집기
// 모든 동물 쌍을 찾으면 게임 종료
// 총 실패 횟수 알려주기!



// 선언
int arrayAnimal[4][5];  // 2차원 배열을 통해서 카드 지도를 만듦.(전체 카드 총 20장을 표시해주는 것이다.)
int checkAnimal[4][5];  // 뒤집혔는지 여부확인!
char *strAnimal[10];  // 포인터 배열을 만들어서 그 안에다가 동물의 이름을 저장해둘거다.

void intiAnimalArray();
void intiAnimalname();
void shuffleAnimal();
int getEmptyPosition();
int conv_pos_x(int x);
int conv_pos_y(int y);
void printAmimals();
void printQuestion();
int foundAllAnimals();

int main_array_project(void)
{
    srand((unsigned int)time(NULL));
    // srand는 unsigned int인데 time은 long이라서 명시적 자료형 변환을 해야함.

    intiAnimalArray();
    intiAnimalname();

    shuffleAnimal();  // 어떻게 동물들을 배치를 할지 정하는 것임
    // 앞의 전개를 보았을 때 만들어 놓은 strAnimal 포인터 배열을
    // 카드지도(arrayAnimal)에 지정해주겠지?
    // 이런 걸 염두해두고 이어서 강의를 듣자.
    // 일단 21년 7월 9일 아침 코딩은 여기서 끝! 오후에 이어서 합시다~~

    // 늘 그렇듯이 여기까지가 밑작업이다.
    int failCount = 0;  // 실패횟수

    while (1) {
        int select1 = 0;  // 사용자가 선택한 처음 수
        int select2 = 0;  // 사용자가 선택한 두번째 수
        // 카드 두 장을 뒤집어야 하니까

        printAmimals();  // 동물위치 출력
        printQuestion();  // 문제 출력(가장 위에 선언을 한 카드 지도!)
        printf("뒤집을 카드를 2개 고르세요. : ");
        scanf("%d %d", &select1, &select2);
        // 위에 본 것처럼 유저는 12,14,19 등의 숫자로 입력을 하는데
        // 컴퓨터는 arrayAnimal[x][y]로 인식을 해야 한다.
        // 그것 때문에 shuffleAnimal에서 xy를 나타낼 수 있도록
        // 작업을 해둔 것이다. 저런 방법 말고 구조체라는 것을 이용할 수도
        // 있다고는 하지만 그것은 뒤에 배운다고 하니 일단은 저렇게 세팅을
        // 하도록 하자!!
        // 해보니까 4*5크기기 때문에 y축은 최대값이 4이고 x축은 최대값이 5인데
        // 그 이상의 값이 들어가니까 애들이 미쳐서 날뛴다..
        // 오버플로우라는 것이 이런 건가 싶었다니까?
        // 연습하면서 만들때는 이런 부분도 수정해보자!

        if(select1 == select2)  // 같은 카드를 선택 시 무효(즉 같은 숫자를 두 번 입력하면 컽!)
        {
            continue;
        }

        // 좌표에 해당하는 카드를 뒤집어 보고 같은지 안같은지 확인하는 작업을 시작해보자
        // select1,2에 게이머가 입력한 값을 converting해주어야 한다.
        // 그 함수는 밑에 conv_pos_x,y로 정의를 해두었으니 그것을 써보도록 하자.
        // firstSelect를 통해서 함수 정의란에 변수를 써보도록 하자.
        int firstSelect_x = conv_pos_x(select1);
        int firstSelect_y = conv_pos_y(select1);

        int secondSelect_x = conv_pos_x(select2);
        int secondSelect_y = conv_pos_y(select2);

        // 이미 선택된 카드, 이미 뒤집혀진 카드는 다시 못 뒤집는다.
        if ((checkAnimal[firstSelect_x][firstSelect_y] == 0  // 카드가 뒤집히지 않았는지(이미 선택되지는 않았는지)
            && checkAnimal[secondSelect_x][secondSelect_y] == 0)
            &&
            (arrayAnimal[firstSelect_x][firstSelect_y]
            == arrayAnimal[secondSelect_x][secondSelect_y])) // 같은 동물인 경우
        {
            printf("\n\n정답입니다! : %s 발견\n\n",
                   strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
            checkAnimal[firstSelect_x][firstSelect_y] = 1;
            checkAnimal[secondSelect_x][secondSelect_y] = 1;
        }
        else  // 다른 동물인 경우
        {
            printf("땡!! 틀렸거나 이미 뒤집힌 카드 입니다!\n");
            printf("첫번째 카드는 %d : %s\n", select1, strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
            printf("두번째 카드는 %d : %s\n", select2, strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);

            failCount++;
        }

        // 모든 동물을 찾았을 때 종료하는 스퀀스 추가. 1 : 참, 0 : 거짓인 걸 이용!
        if (foundAllAnimals() == 1)
        {
            printf("\n\n축하합니다. 모든 동물을 찾으셨습니다!\n");
            printf("지금까지 총 %d 번 실패하셨습니다.\n", failCount);
            break;
        }

    }


    return 0;
}



// 정의
void intiAnimalArray()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            arrayAnimal[i][j] = -1;
        }
    }
}

void intiAnimalname()
{
    strAnimal[0] = "원숭이";
    strAnimal[1] = "하마";
    strAnimal[2] = "강아지";
    strAnimal[3] = "고양이";
    strAnimal[4] = "돼지";
    strAnimal[5] = "코끼리";
    strAnimal[6] = "기린";
    strAnimal[7] = "낙타";
    strAnimal[8] = "타조";
    strAnimal[9] = "호랑이";
}

void shuffleAnimal()
{
    // ㅁㅁㅁㅁㅁ
    // ㅁㅁㅁㅁㅁ
    // ㅁㅁㅁㅁㅁ
    // ㅁㅁㅁㅁㅁ
    // 이런 형태로 만들건데, 10마리 동물이 한 쌍씩 표시를 해주어야 한다.
    for(int i=0; i<10; i++)  // 위의 20개의 칸에 동물 10마리를
    {
        for(int j=0; j<2; j++)  // 두 번씩 넣을 것이다.
        {
            int pos = getEmptyPosition();  // 비어있는 위치값을 반환해줘!
            int x = conv_pos_x(pos);  // 반환한 값을 x,y로 나타내주자.
            int y = conv_pos_y(pos);

            arrayAnimal[x][y] = i;
            // x,y에 strAnimal에서 설정한 몇 번째 동물을 넣어둘 것인지 지정
            // 이렇게 배열에 동물들을 넣어둔 것을
            // 밑에 printAnimal에서 사용을 한다.
        }
    }
}

// 좌표에서 빈 공간 찾기
int getEmptyPosition()
{
    while(1)
    {
        // ㅁㅁㅁㅁㅁ 0  1  2  3  4
        // ㅁㅁㅁㅁㅁ 5  6  7  8  9
        // ㅁㅁㅁㅁㅁ10 11 12 13 14
        // ㅁㅁㅁㅁㅁ15 16 17 18 19
        int randPos = rand() % 20;  // 0 ~ 19 사이의 숫자 반환
        // 랜덤으로 위치를 골라보자!
        // 예를 들어서 19가 나왔다? 그럼 (3,4)로 표현을 해줘야함.
        int x = conv_pos_x(randPos);
        int y = conv_pos_y(randPos);

        if (arrayAnimal[x][y] == -1)  // 위에 설정한 최초값이라고 한다면 비어있다는 뜻임!
        {
            return randPos;
            // 비어있지 않다면 while(1)이기 때문에 무한히 반복해줄 것임.
            // getEmptyPosition함수의 반환값으로 randPos를 해주겠다!
            // 그 값이 곧 int pos가 되고, 그 값은 곧 x,y값으로 들어간다.
        }
    }
    return 0;
}

int conv_pos_x(int x)
{
    // 이 친구들의 역할은 위에서 randPos로 나온 값을 x,y값으로 바꿔주는 역할이다.
    // 어떻게 하는데?
    // ㅁㅁㅁㅁㅁ 0  1  2  3  4 -5로 나누면 몫이-> 0 0 0 0 0
    // ㅁㅁㅁㅁㅁ 5  6  7  8  9 -5로 나누면 몫이-> 1 1 1 1 1
    // ㅁㅁㅁㅁㅁ10 11 12 13 14 -5로 나누면 몫이-> 2 2 2 2 2
    // ㅁㅁㅁㅁㅁ15 16 17 18 19 -5로 나누면 몫이-> 3 3 3 3 3
    // 이걸 이용하면 됨!
    return x / 5;  // 열혈 c프로그래밍에서 읽어서 알겠지만 int형이기 때문에
    // 소수값에 손실이 발생하게 된다.
}

int conv_pos_y(int y)
{
    return y % 5;
}

void printAmimals()  // 정답을 확인시켜준다.
{
    // ㅁㅁㅁㅁㅁ  0  1  2  3  4
    // ㅁㅁㅁㅁㅁ  5  6  7  8  9
    // ㅁㅁㅁㅁㅁ 10 11 12 13 14
    // ㅁㅁㅁㅁㅁ 15 16 17 18 19
    // 이걸 보여주는 것은 정답을 확인하기 위해서 보여준다고 생각하면 된다.
    // 카드 뒤집기 게임에서 맨 처음에 뒤집어서 전체적인 것을 보여주게 하고
    // 게임이 시작되는 느낌이다.
    printf("\n====이건 비밀인데, 몰래 보여줍니다!ㅎ===\n\n");
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%15s", strAnimal[arrayAnimal[i][j]]);
            // shuffleAnimal에서 설정했던 부분인데,
            // arrayAnimal의 xy좌표에 랜덤하게 지정해둔 배열번호를 이용해서
            // 동물의 이름을 출력해주는 것이다.
            // 윈도우는 한글이 2바이트인데 맥은 3바이트임
            // 호랑이 강아지 이런 것들이 9바이트니까
            // 그래서 9칸을 미리 확보해두고 들어간다.
            // -> 실행 과정에서 일정하게 출력되는게 아니라 각 항목끼리 붙어서 출력되고 그래서
            //
        }
        printf("\n");
    }
    printf("\n=========================\n\n");
}

void printQuestion()  // 문제 출력(카드 지도)
{
    printf("\n\n(문제)\n");
    int seq = 0;  // 솔직히 수업을 들을때는 seq의 역할에 대해서 이해를 잘 못하겠다.
    // 복습을 하면서도 이해하기!
    // 일단 이해를 한 내용은, seq를 이용해서 chekAnimal이 나타낸 0과 1을 나타내게 해준다.
    // 이를 이용해서 0이 아닌 값, 즉 1의 위치에는 동물 이름이 나타나게 하고
    // 0의 값을 가지는 위치에는 0을 출력해주어서
    // 카드의 뒷면처럼 보일 수 있게 해준다.
    // 라고 이해하였다. 이렇게 설명을 한 것은  아닌데 내가 그렇게 이해를 하였다.
    // 연장전 말미에 프로그램을 돌릴 즈음 되어서 seq++을 안하고 그냥 seq 쓴 것은 실수라고 하였음.
    // 카드 뒷면을 보여준다고 쳐도 몇 번인지는 나타내어주어야 한다고!
    // 고로 카드 뒷면의 느낌은 맞는 것으로..

                    // seq               // checkAnimal
    // ㅁㅁㅁㅁㅁ   0  1  2  3  4           0  0  0  0  0
    // ㅁㅁㅁㅁㅁ   5  6  7  8  9           0  0  0  0  0
    // ㅁㅁㅁㅁㅁ  10 11 12 13 14           0  0  0  1  0
    // ㅁㅁㅁㅁㅁ  15 16 17 18 19           0  1  0  0  0



    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            // 카드를 뒤집어서 정답을 맞혔으면 '동물 이름'
            // 아직 뒤집지 못했으면 (정답을 못맞혔으면) 뒷면 -> 위치를 나타내는 숫자를
            // 보여줄 수 있도록 하자.
            if(checkAnimal[i][j] != 0)
            {
                printf("%12s", strAnimal[arrayAnimal[i][j]]);
                // 바로 위에서 했던 것처럼 동물이름을 보여주는 과정
            }
            else
            {
                printf("%9d", seq);  // 그냥 seq로 해두면 0으로 도배되기 때문에 안됨.
            }
            seq++;
            // seq++을 여기에 두는 이유는 동물이름이 보여질 때는 else를 건너띄기 때문에
            // seq가 ++이 되지 않음.
            // 그래서 밑에 둠.
        }
        printf("\n");  // 5개를 보여주고 줄 바꿈!
    }
}

int foundAllAnimals()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(checkAnimal[i][j]==0)  // 0인게 남아있으면 아직 덜 찾은 거니까!
            {
                return 0;
            }
        }
    }
    return 1;
    // 모든 카드가 다 0이 아니면 for문을 탈출할 거니까
    // for문 밖에다가 return 1을 작성!
}

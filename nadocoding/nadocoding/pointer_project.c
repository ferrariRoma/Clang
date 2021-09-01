//
//  pointer_project.cpp
//  nadocoding
//
//  Created by 안동규 on 2021/06/14.
//
// 물고기가 6마리 있어요.
// 이들은 어항에 살고 있는데, 사막이에요.
// 사막이 너무 더워서, 너무 건조해서 물이 아주 빨리 증발을 해요.
// 물이 다 증발하기 전에 부지런하게 어항에 물을 줘서 물고기를 살려주세요.
// 물고기는 시간이 지날수록 점점 커져서, 나중에는...

// 선언
int level;
int arrayfish[6];  // 6개의 수조
int *cursor; // arrayfish를 가르키면서 포인터 기본 공부를 할 때 미션맨의 역할을 함
// 포인터와 배열의 관계를 이용해서 문제를 해결해나가는 거 같음.

void initdata(void);
void printffishes(void);
void decreasewater(long elapsedtime);
int checkfishalive(void);

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_pointerproject(void)
{
//    // clock 실험
//    double prevtime=clock();
//    int i=0;
//    while (i<10) {
//        double curttime=clock();
//        printf("%f\n", (curttime-prevtime)/10);
//        getchar();
//    }
//    // 뭐지.. 왜 clocks_per_sec보다 10으로 나누는게 훨씬 값이 현실적으로 나오지..
    
    
    // 이번 프로젝트에서는 시간정보를 활용해야 한다.
    // 시간은 보통 long자료형을 사용한다.

    double starttime=0; // 게임 시작 시간.
    double totalelapsedtime=0; // 총 경과 시간.
    double prevelapsedtime=0; // 직전 경과 시간(최근에 물을 준 시간 간격)
    // 시간에 따른 경과를 따지는 게임이라서 이런 시간 변수를 꼼꼼히 만든거 같다.

    int num; // 몇 번 어항에 물을 줄 것인지. 사용자 입력
    initdata();

    cursor = arrayfish; // cursor[0] == arrayfish[0]
    // arrayfish라는 배열이름 자체가 배열의 첫 번째 주소를 가르킨다는 것을 이용

    // 게임 시작!
    starttime = clock();
    // 현재 시간은 clock()이라는 함수를 이용해서 표현
    // clock()은 millisecond (1000분의 1초) 단위로 반환
    // 이것을 쓰기위해서는 time.h가 include되어 있어야 된다.
    // 내가 측정을 원하는 곳에 clock()을 호출하고
    // 시간 측정을 종료하고 싶은 곳에서 clock()을 한 번 더 호출하면 된다.
    // 이후 두번째 clock() - 첫번째 clock()을 해주면 해당 구간에서의 clock값이 나온다.
    // 마지막으로 그 값에 1000으로 나누어 주면 우리가 일상에서 쓰는 일반 초로 변환이 되는데,
    // CLOCK_PER_SEC이 곧 1000이다.
    // 즉, 여기서는 시간 측정을 시작 한 것이다!!


    while (1)
    {
        printffishes();
        printf("몇 번 어항에 물을 주시겠어요? ");
        scanf("%d", &num);
        // while(조건)에 조건을 (1)이라고 하면 무한으로 진행이 된다.
        // 엔터를 한 번 칠때마다 움직일 수 있게. getchar()을 추가! 임시로 사용자 입력 대기

        //입력값 체크(수조가 6개인데 그 이외의 숫자가 입력되면 안되기 때문)
        if (num<1 || num>6)
        {
            printf("입력값이 잘못되었습니다.\n");
            continue;  // 맨 처음으로!(break는 반복문 등 큰 틀을 탈출!)
        }

        // 총 경과시간
        // 지금까지 얼마만큼의 시간이 지났느냐
        totalelapsedtime = (clock()-starttime)/10;
        // clock()은 밀리세컨드 단위이기 때문에
        // 그래서 1000(CLOCKS_PER_SEC)로 나누어 준다.
        // 자세한 설명은 첫번째 clock에 가면 잘 알 수 있다.
        printf("총 경과시간은 : %f 초\n", totalelapsedtime);
        // clock()은 long값이기 때문에 %ld를 이용해서 값을 받는다.

        // 직전 물 준 시간(마지막으로 물 준 시간) 이후로 흐른 시간
        // 흐른 시간에 대비해서 물 높이를 낮추어 주어야 해서!
        prevelapsedtime = totalelapsedtime - prevelapsedtime;
        printf("최근 경과 시간: %f초\n", prevelapsedtime);

        // 어항의 물을 감소(증발)
        decreasewater(prevelapsedtime);

        // 사용자가 입력한 어항에 물을 줍니다.
        // 1. 어항의 물이 0이면? 물을 주지 않는다. 이미 고기가 죽었기 때문
        if(cursor[num-1] <= 0) // -1: 배열은 0-5까지인데 num은 1-6까지기 때문임
        {
            printf("%d번 물고기는 이미 죽었습니다. 물을 주지 않습니다.\n", num);
        }
        // 2. 어항의 물이 0이 아닌 경우? 물을 준다! 100을 넘지 않는지 체크도 해야함.
        else if (cursor[num-1]+1 <= 100)
        {
            // 물을 준다.
            printf("%d 번 어항에 물을 줍니다.\n\n", num);
            cursor[num-1] += 1;
        }

        // 레벨업을 할 건지 확인!(레벨업은 20초마다 한 번씩 수행)
        if (totalelapsedtime / 20 > level)
        {
            //레벨업
            level++;
            printf("*** 축 레벨업! 기존 %d 레벨에서 %d 레벨로 업그레이드 ***\n\n", level-1, level);

            //최종레벨은 5에 도달했을 경우
            if (level == 5)
            {
                printf("\n\n축하합니다. 최고 레벨을 달성하였습니다.\n");
                exit(0);  // 모든 프로그램을 중단하는 과정임.
                // Xcode에서는 exit는 stdlib.h를 include해야함.
            }
        }

        // 모든 물고기가 죽었는지 확인해야함. 그러면 게임오버니까
        if (checkfishalive() == 0)
        {
            // 물고기가 모두 죽음
            printf("모든 물고기가 죽었습니다.ㅜㅜ\n");
            exit(0);
        }
        else
        {
            // 최소 한 마리 이상의 물고기는 살아 있음
            printf("물고기가 아직 살아 있어요!\n");
        }

        // 최초 물을 준 시간: 10초 -> 15초 (5초 경과 : prevelapsedtime) -> 25초 (10초 경과 : 이 값을 저장해둘 공간이 없음)
        // while문이 시작되면 totalelapsedtime의 값에는 다시 clock()이 들어갈 것이기 때문!
        // 그래서 decreasewater이후에 쓸모를 다한 prevelapsedtime에 10초를 저장해두는 것이다.
        prevelapsedtime = totalelapsedtime;
    }


    return 0;
}


// 정의
void initdata()
{
    level = 1; // 게임 레벨(1~5)
    for (int i=0; i<6; i++)
    {
        arrayfish[i]=100; // 어항의 물 높이(0~100)
    }
}

void printffishes()
{
    printf("%3d번 %3d번 %3d번 %3d번 %3d번 %3d번\n", 1,2,3,4,5,6);
    // %3d라고 하면 3칸을 할당받고 그곳에 값이 들어가게 된다.
    // 거기에 '번'은 2칸을 차지함으로
    // 최종적으로 '%3d번 '은 빈 칸까지 포함해서 총 6칸을 차지하니까
    for (int i=0; i<6; i++)
    {
        printf(" %4d ", arrayfish[i]);
        // 여기는 4칸 + 앞뒤 공백을 추가해서 넓이를 맞춰준 것이다.
        // 즉, 전체적인 모양이 위에 몇 번 어항이라는 푯말이 들어가고
        // 그 밑에 어항의 물 높이들이 표시되는 것이다.
    }
    printf("\n\n");
}

void decreasewater(long elapsedtime)
{
    for (int i = 0; i < 6; i++)
    {
        arrayfish[i] -= (level * (int)elapsedtime);
        // 3: 난이도 조절을 위한 값
        if (arrayfish[i]<0)
        {
            arrayfish[i] = 0;  // 0 밑으로 떨어지는 것을 막기 위해서 설정.
        }
    }
}

int checkfishalive()
{					
    for(int i=0; i<6; i++)
    {
        if (arrayfish[i] > 0)
        {
            return 1; // 1은 참을 의미한다고 앞에서 배웠음.
        }
    }
    
    // 아쉬운 점은 죽으면 레벨 업을 안시켰으면 좋겠는데, 마지막 입력까지 시간을 측정하다 보니까
    // 게임이 오버가 됐는데도 마지막 입력 후 시간 측정이 종료되어 레벨링이 또 되는 부분을 발견!
    // 추후에 이것도 수정을 해보도록 합시다!
    return 0;
}

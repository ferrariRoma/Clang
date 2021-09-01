////
////  m_array_project_practice.cpp
////  nadocoding
////
////  Created by 안동규 on 2021/07/13.
////
//
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//// 선언 안에 필요한 요소들
//char *strAnimal[10];  // 10마리의 동물을 넣어 줄 칸을 만듦
//int arrayAnimal[4][5];  // 20장의 카드를 놓아둘 2차원 배열을 만듦
//int checkAnimal[4][5];
//// arrayAnimal이랑 같은 2차원 배열설정이지만 뒤집혔는지 여부를 확인하기 위해서 따로 만들어 준다.
//
//
//// 선언
//void intiAnimalArray();
//void intiAnimalName();
//void shuffleAnimal();
//int getEmptyPosition();
//int conv_pos_x(int x);
//int conv_pos_y(int y);
//void printAnimals();
//void printQuestion();
//int foundAllAnimals();
//
////int main_m_array_project_practice(void)
//{
//    srand((unsigned int) time(NULL));
//    // 랜덤값 초기화
//    
//    // 프로젝트에 필요한 배열 및 기초함수 설정
//    intiAnimalArray();  // 2차원 배열 설정
//    intiAnimalName();  // 동물 이름 보여주기!
//    
//    shuffleAnimal();  // 동물을 배치하기 시작!
//    
//    // 본격적인 문제 시작
//    int failCount =0;
//    // 문제의 끝에 실패횟수를 알려줄 것이기 때문에 실패변수 설정
//    
//    while(1){
//        int select1 =0;
//        int select2 =0;
//        // 사용자가 입력하는 2가지 답 변수 설정
//        // 여기서 입력한 숫자를 매개로 하여 그 숫자에 해당하는 번째의 카드를 뒤집을 것이다.
//        printAnimals();
//        // 문제의 본격적인 시작에 앞서 전체적으로 동물의 위치를 플레이어에게 확인시켜준다.
//        printQuestion();
//        // 이후 카드를 뒤집어서
//        // 0  1  2  3  4
//        // 5  6  7  8  9
//        // 10 11 12 13 14
//        // 15 16 17 18 19
//        // 이렇게 숫자만 보이게 해준다.
//        
//        // 이제 정답을 입력받자!
//        printf("2장의 카드번호를 입력해주세요! : ");
//        scanf("%d %d", &select1, &select2);
//            
//    
//        // 정답확인 과정!
//        // 맞는지 확인해 볼까요?
//        
//        int firstSelect_x = conv_pos_x(select1);
//        int firstSelect_y = conv_pos_y(select1);
//        
//        int secondSelect_x = conv_pos_x(select2);
//        int secondSelect_y = conv_pos_y(select2);
//        
//        if(select1==select2) {
//            // 경우의 수 1번 : 같은 카드를 뽑아 들었을때 = 무효처리!(continue)
//            printf("\n오답입니다:( 카드의 번호가 중복되었습니다.\n");
//            printf("선택한 카드는 %s \n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
//            failCount++;
//            continue;  // 같은 값을 입력할때는 처음으로 돌아가게 하자.
//        }
//        
//        // 이 시퀀스가 순서에 따라서 작동이 틀림.
//        // 이런게 자료구조인가...
//        
//        if ((checkAnimal[firstSelect_x][firstSelect_y]==0
//             && checkAnimal[secondSelect_x][secondSelect_y]==0)
//            // 이미 선택된 카드(0)가 아니면서
//            &&
//            (arrayAnimal[firstSelect_x][firstSelect_y]
//            ==arrayAnimal[secondSelect_x][secondSelect_y]))
//    {
//        // 두 개의 카드가 같은 카드일때 정답처리!
//        printf("\n정답입니다! %s 발견!!\n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
//        
//        // 정답이면 뭐다? checkAnimal을 1로 바꾸어주어야 한다.
//        checkAnimal[firstSelect_x][firstSelect_y] = 1;
//        checkAnimal[secondSelect_x][secondSelect_y] = 1;
//    }
//        else if (select1 || select2 > 19)
//            // 이때까지 (select1 && select2) > 19 || (select1 && select2) < 0
//            // 이렇게 표현을 했는데 이게 잘못된 것이었나봄..
//        {
//            printf("\n오답입니다:( 입력하신 번호는 카드번호의 범위를 벗어났습니다.\n");
//            failCount++;
//            continue;
//            // 범위 안의 수를 입력해도 카드번호의 범위를 벗어났다고 뜨네.. 왜 그러지..
//        }
//        else if ((checkAnimal[firstSelect_x][firstSelect_y] == 1)
//                 ||
//                 (checkAnimal[secondSelect_x][secondSelect_y] == 1))
//        {
//            printf("\n오답입니다:( 이미 뒤집어진 카드입니다.\n");
//            failCount++;
//            continue;
//        }
//        else
//        {
//            printf("\n서로 다른 카드이거나 그 외 이유로 오답입니다:( 왜그러지?ㅜ\n");
//            printf("첫번째 카드는 %s \n", strAnimal[arrayAnimal[firstSelect_x][firstSelect_y]]);
//            printf("두번째 카드는 %s \n", strAnimal[arrayAnimal[secondSelect_x][secondSelect_y]]);
//            failCount++;
//        }
////        // 경우의 수 2번(오답) : 초과된 값을 입력했을 때
////        if ((select1 && select2) < 0 || (select1 && select2) > 19) {
////            printf("\n오답입니다:( 초과된 값이 입력되었습니다.\n");
////            failCount++;
////            continue;
////        }
//        // 처음에 이렇게 했었는ㅋ데 만족스러운 결과가 아님!
//        // 같은 수가 아닌데 같은 수 입력했다고 뜨고 그럼..ㅜㅜ
//        // else if를 사용해서 조금 더 정돈되게 만들어보면 어떨까 하는 생각이 들어서
//        // 해보려고 함!
//        // 이것도 잘 안되네...
//        // 범위 내의 수만 입력되게하려면 어떻게 해야할까...
//        
//        // 경우의 수 2번째 : 정답 = 이미 선택된 카드가 아니면서 같은 동물일 경우
//        // 이때는 입력된 select값을 좌표값으로 변환시켜줄 수 있도록 한다.
//        
//        
//        // 만들어 놓은, 뒤집혀져있는지 확인하는 checkAnimal이 있다.
//        // 0이면 안뒤집혀진거, 그 외면 뒤집어진거!
//        
//        
//        // 이제 모든 정답을 맞췄을때 종료하는 시퀀스를 추가해줍시다.
//        if (foundAllAnimals == 1) {
//            printf("\n\n모든 동물을 찾으셨습니다. 축하합니다!\n\n");
//            printf("총 실패는 %d번 하셨습니다.\n", failCount);
//            break;
//        }
//    }
//    
//    return 0;
//}
//
//
//// 정의
//void intiAnimalArray()
//{
//    for(int i=0; i<4; i++)
//    {
//        for(int j=0; j<5; j++)
//        {
//            arrayAnimal[i][j] = -1;
//            // arrayAnimal이라는 배열을 -1로 초기화
//        }
//    }
//}
//
//void intiAnimalName()
//{
//    strAnimal[0] = "사자";
//    strAnimal[1] = "하마";
//    strAnimal[2] = "기린";
//    strAnimal[3] = "호랑이";
//    strAnimal[4] = "코끼리";
//    strAnimal[5] = "코뿔소";
//    strAnimal[6] = "캥거루";
//    strAnimal[7] = "낙타";
//    strAnimal[8] = "사슴";
//    strAnimal[9] = "노루";
//}
//
//void shuffleAnimal()
//{
//    for(int i=0; i<10; i++)
//    {
//        for(int j=0; j<2; j++)
//        {
//            int pos = getEmptyPosition();  // 비어있는 곳의 위치값을 반환
//            int x = conv_pos_x(pos);
//            // 개념은 getEmptyPosition에서 반환된 pos값을
//            int y = conv_pos_y(pos);
//            // xy값에 맞춰서 변환해줄 것이다.
//            
//            arrayAnimal[x][y] = i;
//            // 위에서 반환된 xy값을 통해서 2차원 배열에 배치되어 있는
//            // strAnimal의 배열 숫자를 반환해 줄 것이다.
//        }
//    }
//}
//
//int getEmptyPosition()
//{
//    while(1)
//    {
//        int randPos = rand() % 20;
//        int x = conv_pos_x(randPos);
//        int y = conv_pos_y(randPos);
//        
//        if(arrayAnimal[x][y] == -1)
//        {
//            return randPos;
//        }
//    }
//    return 0;
//}
//
//int conv_pos_x(int x)
//{
//    // ㅁㅁㅁㅁㅁ 0  1  2  3  4  -5로 나누면 몫이->  0 0 0 0 0
//    // ㅁㅁㅁㅁㅁ 5  6  7  8  9  -5로 나누면 몫이->  1 1 1 1 1
//    // ㅁㅁㅁㅁㅁ10 11 12 13 14  -5로 나누면 몫이->  2 2 2 2 2
//    // ㅁㅁㅁㅁㅁ15 16 17 18 19  -5로 나누면 몫이->  3 3 3 3 3
//    // 나누었을 때 x값은 몫이, y값은 나머지가 줄 별로 일정하다는 것을 이용해서
//    // 랜덤값을 이용해서 얻은 randPos를 xy좌표에 넣고 이를 통해서
//    // 2차원 배열로 접근한다.
//    return x / 5;
//}
//
//int conv_pos_y(int y)
//{
//    // x에서 기술한대로 y값은 나머지가 일정하니 그것을 이용~
//    return y % 5;
//}
//
//void printAnimals()
//{
//    printf("\n\n========비밀인데 몰래 한 번 보여줄게요!========\n\n");
//    for (int i=0; i<4; i++) {
//        for (int j=0; j<5; j++) {
//            printf("%15s", strAnimal[arrayAnimal[i][j]]);
//        }
//        printf("\n");
//    }
//    printf("\n\n========비밀인데 몰래 한 번 보여줄게요!========\n\n");
//    // 이렇게, 이런 부분에 \n을 해줘야지 우리가 생각하는
//    // ㅁㅁㅁㅁㅁ 
//    // ㅁㅁㅁㅁㅁ
//    // ㅁㅁㅁㅁㅁ
//    // ㅁㅁㅁㅁㅁ
//    // 이런 모양이 나온다.
//}
//
//void printQuestion()
//{
//    printf("\n\n(문제 : 카드의 짝을 맞춰주세요!)\n\n");
//    int seq = 0;
//   
//    for(int i=0; i<4; i++){
//        for (int j=0; j<5; j++) {
//            // 여기서 고려를 해주어야 될 부분이
//            // 이미 정답을 맞춘 곳은 카드의 번호 말고
//            // 동물의 이름을 출력해주어야 한다.
//            // 1은 참, 0은 거짓이라는 것을 이용!
//            // 이렇게 설정을 해줌으로써 위에 checkAnimal[i][j]을
//            // 0이 아닌 다른 값으로 바꿔야 함.
//            // 그게 아니면, 즉 값이 1이면 카드의 번호를 출력해주자!
//            if(checkAnimal[i][j] != 0){
//               printf("%12s", strAnimal[arrayAnimal[i][j]]);
//            }
//            else {
//                printf("%9d", seq);
//            }
//            seq++;
//        }
//        printf("\n");
//        // 여기 역시, 이 부분에 \n을 해주어야지
//        // 우리가 생각하는 4*5 사이즈로 출력이 된다.
//    }
//}
//
//int foundAllAnimals()
//{
//    for(int i=0; i<4; i++)
//    {
//        for(int j=0; j=5; j++)
//        {
//            if(checkAnimal[i][j]==0)
//            {
//                return 0;
//            }
//        }
//    }
//    return 1;
//    // 이거는 모두 0이 아닐때 1이 return될 수 있도록 설정을 해둔 것이다.
//}

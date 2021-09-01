// // 배열 프로젝트
// // 발모제를 찾아라!

// #include <stdio.h>
// #include <time.h>
// #include <stdlib.h>

// int main_array1(void)
// {
//     srand((unsigned int) time(NULL));  // 랜덤값을 초기화해줌~
    
//     // 제목
//     printf("====발모제를 찾아라!====\n\n");

//     //기본 변수 셋팅
//     int treatment = rand() % 6;  // 정답이 될 발모제(랜덤값)
//     int answer;  // 사용자의 정답
//     int currentbottle=0;  // 지금 보여준 병들
//     int prevbottle=0;  // 방금 전에 보여준 병들

//     // 총 5번의 기회를 부여
//     for(int i=0;i<5;i++)
//     {
//         // 병 6개 중에 랜덤으로 3,4개의 병을 뽑을 거임.
//         // 단 다양한 갯수를 보여주어야 정답률이 올라가기 때문에
//         // 이전에 4개면 이번엔 3개, 이전에 3개면, 4개를 보여줄 수 있도록 한다.
//         int bottle[6]={0,0,0,0,0,0};
//         do
//         {
//             currentbottle = rand() % 2+3;
//         } while (currentbottle==prevbottle);
//         prevbottle=currentbottle;
//         // 결과를 저장해서 중복된 값이 나오지 않게 해줌.


//         // 랜덤으로 뽑은 병 중에서 답이 있으면 머리카락이 나고 있다고 알려줘야함.
//         int isincluded = 0;  // 정답이 포함되면 알려줄 스위치!

//         for(int j=0;j<currentbottle;j++)  // 위에 몇 병을 보여줄 건지 정했던 것을 이용하여
//         // 해당 갯수만큼의 병을 뽑아봅시다.
//         {
//             int randbottle = rand() % 6;  // 랜덤으로 병 하나를 뽑을거임~
//             if(bottle[randbottle]==0)  // 뽑은 병은 1로!
//             {
//                 bottle[randbottle] = 1;
//                 if(randbottle == treatment)  // 그게 정답이라면 정답 스위치 on!
//                 {
//                     isincluded = 1;
//                 }
//             }
//             else  // 중복된 것은 카운트에서 빼주자
//             {
//                 j--;
//             }
//         }
//         // 밑작업이 끝남!

//         // 사용자들에게 문제를 제시해주자!
//         printf("%d번째 시도입니다!\n", i+1);  // 현재는 첫번쨰 for문 안에서 이루어지고 있어서 i를 씀.

//         for(int k=0; k<6; k++)
//         {
//             if(bottle[k]==1)
//             {
//                 printf("%d번째 병입니다!\n", k+1);  // +1을 해주는 이유는 0번째 배열은 1번째 병이기 때문이다.
//             }
//         }

//         printf("머리에 발라볼게요!\n\n");

//         if(isincluded==1)
//         {
//             printf("효과가 있어요!\n");
//         }
//         else
//         {
//             printf("안타깝게도 효과가 없어요:(\n");
//         }
//         printf("다음 시도를 위해서 아무 키나 입력해주세요!\n");
//         getchar();  
//     }

//     printf("정답은 몇 번?\n");
//     scanf("%d", &answer);

//     if (answer==treatment+1)  // +1을 해주는 이유는 위와 같음!
//     {
//         printf("정답입니다!!!\n");
//     }
//     else
//     {
//         printf("오답입니다! 정답은 %d입니다.", treatment+1);
//     }

    
//     return 0;
// }
////
////  array_project.cpp
////  nadocoding
////
////  Created by 안동규 on 2021/06/02.
////
//
//#include <time.h>
//#include <stdlib.h>
//#include <stdio.h>
//
//int main(void)
//{
//    srand((unsigned int) time(NULL));
//
//    printf("\n\n ===아빠는 대머리 게임===\n\n");
//    int answer; // 사용자 입력값
//    int treatment = rand() % 4; // 발모제 선택 0-3
//
//    int cntshowbottle = 0; // 이번 게임에 보여줄 병 갯수
//    int prevcntshowbottle = 0; // 앞 게임에 보여준 병 갯수
//    // 서로 보여주는 병 갯수를 다르게 하여 정답률을 향상
//    // (처음에 2개 -> 다음에는 3개...)
//
//    // 총 3번의 기회를 줄거다. (3번의 발모제 투여 시도)
//    for (int i=0; i<3; i++)
//    {
//        int bottle[4] = {0,0,0,0};  // 4개의 병. 참고로 중괄호 안에 있는 것을 '초기화 리스트'라고 한다.
//        do {
//            cntshowbottle = rand() % 2+2; // 보여줄 병 갯수 (2-3)
//        } while (cntshowbottle == prevcntshowbottle);
//        prevcntshowbottle = cntshowbottle;
//        // 이렇게 해주면서 첫번째 시도에서 나온 갯수가 두번째에도 반복하지 않게 해준다.
//
//        // int cntshowbottle 부터 지금까지는 앞에 3개의 병을 보여줬으면
//        // 뒤에는 2개의 병을 보여주고,
//        // 앞에 3개의 병을 보여줬으면 뒤에는 2개의 병을 보여주기 위한 작업이다.
//        // do while문에서 이해가 잘 안됐던 부분이 이때까지는 부등호가 들어간
//        // i<=10 이런거만 봤는데 저렇게 변수 2개가 달라질때 까지라고 하니까 이해가 안됐음.
//        // 보면 i<=10은 11,12,13이 나오면 탈출하는 거니까
//        // 저것도 ==이 깨질때까지 반복문을 실행하겠다는 것을 기술한 것이었음.
//        // 다르게 말하면 cntshowbottle == prevcntshowbottle 동안에만 반복문 계속실행!
//
//
//        int isincluded = 0; // 보여줄 병 중에 발모제가 포함되었는지 여부
//        printf("> %d 번째 시도 : ", i+1);
//
//        // 보여줄 병 종류를 선택
//        // 위에서 병 갯수를 정했지만 몇 번 병을 보여줄지는 안정했으니
//        // 여기서 지정해주자!
//        for (int j=0; j < cntshowbottle; j++)
//        {
//            int randbottle = rand() % 4;
//
//            // 아직 선택되지 않은 병이면, 선택 처리
//            if (bottle[randbottle] == 0)
//            {
//                bottle[randbottle] = 1;
//
//                // 만약 선택처리된 것이 발모제이면 발모제라는 것을 알려줘야하니,,
//                if (randbottle == treatment)
//                {
//                    isincluded = 1;  // 1이면 발모제 포함, 0이면 불포함
//                }
//            }
//
//            // 이미 선택된 병이면, 중복이므로 다시 선택
//            else
//            {
//                j--;
//            }
//        }
//        // 여기까지가 밑작업
//
//        // 사용자에게 문제 표시
//        for (int k=0; k<4; k++)
//        {
//            if(bottle[k]==1)
//            {
//                printf("%d번째 물약입니다.\n", k+1);
//            }
//        }
//        printf("물약을 머리에 바릅니다.\n\n");
//
//        if(isincluded == 1)
//        {
//            printf("성공! 머리가 났어요!\n\n");
//        }
//        else
//        {
//            printf("머리가 나지 않았어요 ㅜㅜ\n\n");
//        }
//
//        printf("\n\n...계속 하려면 아무키나 누르세요...\n\n");
//        getchar();  // 사용자가 키를 입력할 때까지 대기하는 용도
//    }
//
//    printf("발모제는 몇 번일까요?\n");
//    scanf("%d\n", &answer);
//
//    if (answer == treatment+1)
//    {
//        printf("\n 정답입니다!\n");
//    }
//    else
//    {
//        printf("\n 오답입니다!! 정답은 %d 입니다\n", treatment+1);
//    }
//    return 0;
//}

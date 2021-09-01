//
//  array project review.cpp
//  nadocoding
//
//  Created by 안동규 on 2021/06/05.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main_arrayproject(void)
{
    srand((unsigned int) time(NULL));
       
    printf("\n\n===발모제를 찾아라!!===\n\n");  // 타이틀
    // 밑작업 시작. 가장 먼저 정답과 사용자 입력값을 설정!
    int answer;   // 사용자 입력값
    int treatment = rand() % 4;  // 병 4개 중 랜덤으로 정답 하나 설정
    
    int cntshowbottle = 0;  // 지금 보여줄 값
    int prevcntshowbottle = 0;  // 이전에 보여준 값
    
    // 3번의 기회부여
    for (int i=0; i<3; i++)
    {
        int bottle[4] = {0,0,0,0};  // 배열을 이용해서 병을 만들어 준다.
        // 반복문과 랜덤을 이용해서 보여줄 병을 2~3개 뽑는다.
        do {
            cntshowbottle = rand() % 2+2;
        } while (cntshowbottle == prevcntshowbottle);
        prevcntshowbottle = cntshowbottle;
        
        // 위에서는 몇 개를 보여줄지 정했으니까 여기서부터는 몇 번째 병을 보여줄지 정해보자.
        int isinclude = 0;  // 랜덤으로 보여준 병에서 정답이 포함되었는지 여부를 알려줄 스위치!
        
        for (int j=0; j<cntshowbottle; j++)
        {
            int randbottle = rand() % 4;
            // 랜덤으로 병하나 뽑을건데 J라는 변수를 가진 반복문을 이용해서 위에서 설정한 것처럼 2~3개를 뽑을거임
            if (bottle[randbottle] == 0)  // 뽑은 값은 초기화값을 1로 수정해준다.
            {
                bottle[randbottle] = 1;
                if (randbottle == treatment)  // 근데 만약 랜덤으로 뽑은 병이 정답이면 스위치를 1로 수정!
                {
                    isinclude = 1;
                }
            }
            else
            {
                j--;  // 뽑은 값은 1로 수정되는데, 그게 또 뽑히면 무효처리를 위해 j--를 해준다.
            }
        }
        // 밑작업 끝!!
        
        
        
        // 이제 사용자들에게 문제를 표시해주자.
        printf(">>%d번째 시도!\n", i+1);  // notice to user about trying time
      
        for (int k=0; k<4; k++)
        {
            if (bottle[k] == 1)  // 뽑힌 병을 알려주자
            {
                printf("%d번째 병입니다!\n", k+1);
            }
        }
        
        printf("\n머리에 발라볼게요!\n\n");
        
        if (isinclude==1)
        {
            printf("\n효과가 있어요!!\n\n");
        }
        else
        {
            printf("실패입니다!\n\n");
        }
        
        printf("다음 시도를 하려면 아무키나 눌러주세요~\n\n");
        getchar();
    }
    
    
    
    
    
    printf("발모제는 몇 번일까요? : \n");
    scanf("%d\n", &answer);
    
    if (answer == treatment+1)
    {
        printf("정답입니다!!\n");
    }
    else
    {
        printf("\n 오답입니다!! 정답은 %d 입니다\n", treatment+1);
    }
    
    // 왜 정답을 입력할 때 답을 정답이든 오답이든 한 번 입력하고 엔터를 치고나서,
    // 그 다음에 숫자를 입력하는 것이 입력이 되는거지?
    // scanf의 오류인가?
    
    
    
    return 0;
}

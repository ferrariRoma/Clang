#include <stdio.h>

// 코딩도장 루프문 *출력하는 부분 실습!
// 하는 김에 역피라미드도 해보긩~

int main_making_stair_with_star()
{
    // 1. 계단식으로 *출력하기
    /* printf("*을 계단 모양으로 출력해보겠습니다.\n\n");

    int i;
    printf("몇 층 계단을 출력해볼까요?");
    scanf("%d", &i);
    for(int j=0; j<i; j++)
    {
        for(int k=0; k<j+1; k++)
        {
            printf("*");
        }

        printf("\n");
    } */
    // 완성!
        
    

    // 2. 대각선으로 *출력하기
    // 1
    //  1
    //   1
    //    1
    //   1
    //  1
    // 1
    /* printf("이번에는 대각선으로 *을 출력해볼게요!\n");
    
    int i = 0;
    printf("몇 층까지 갔다가 올까요?");
    scanf("%d",&i);

    for(int j=0; j<i; j++)
    {
        for(int k=0; k<j; k++)
        {
            printf(" ");
        }
        
        printf("*\n");
    }


    for(int m=i-1; m>0; m--)
    {
        for(int l=m; l>1; l--)
        {
            printf(" ");
        }

        printf("*\n");
    } */

    // 완성!!!!
    


    // 3. 역피라미드 모양으로 *출력하기
    // 11111
    //  111
    //   1

    /* 3층을 쌓는다면,
    층수 1 2 3
    갯수 5 3 1
    차이  2 2
    빈칸 0 1 2
    차이 1 1 1

    4층을 쌓는다면,
    층수 1 2 3 4
    갯수 7 5 3 1
    차이  2 2 2
    빈칸 0 1 2 3
    차이 1 1 1 1
    (flo*2)-1 -2*j */

    int flo;
    printf("이번에는 역피라미드를 출력해보겠어요!\n");
    printf("몇 층으로 출력을 해볼까요?");
    scanf("%d", &flo);

    for(int j=0; j<flo; j++)
    {
        for(int k=0; k<j; k++)
        {
            printf(" ");
        }

        for(int i=(flo*2)-1 -2*j; i>0; i--)
        {
            printf("*");
        }

        printf("\n");

    }
    // 완성!!!!!

    return 0;
}

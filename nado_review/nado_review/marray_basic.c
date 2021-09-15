//
//  marray.cpp
//  nado_review
//
//  Created by 안동규 on 2021/09/07.
//

#include <stdio.h>

int main(void)
{
    // 다차원 배열 복습
    
    int arr1[5]={0};
    // 일차원 배열 선언 모습
    // ㅁㅁㅁㅁㅁ
    
    int marr1[2][5]={
        {1,2,3,4,5},
        {6,7,8,9,0}
    };
    // 이차원 배열은 이런식으로 초기화 해주면 됨. 모양은
    // [0,0][0,1][0,2][0,3][0,4]
    // [1,0][1,1][1,2][1,3][1,4]
    // ㅁㅁㅁㅁㅁ
    // ㅁㅁㅁㅁㅁ
    // 이런 모양이고, marr1[0][4] 로 표기해줌.
    
    int marr2[3][3][3]={
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        },
        {
            {1,2,3},
            {4,5,6},
            {7,8,9}
        }
    };
    // 삼차원 배열은 이런식으로 초기화 해주면 됨. 모양은
    //[0] [0,0][0,1][0,2]
    //    [1,0][1,1][1,2]
    //    [2,0][2,1][2,2]
    
    //[1] [0,0][0,1][0,2]
    //    [1,0][1,1][1,2]
    //    [2,0][2,1][2,2]
    
    //[2] [0,0][0,1][0,2]
    //    [1,0][1,1][1,2]
    //    [2,0][2,1][2,2]
    // ㅁㅁㅁ
    // ㅁㅁㅁ
    // ㅁㅁㅁ
    
    // ㅁㅁㅁ
    // ㅁㅁㅁ
    // ㅁㅁㅁ
    
    // ㅁㅁㅁ
    // ㅁㅁㅁ
    // ㅁㅁㅁ
    // 이런 모양이고, marry[1][2][0]로 표기해줌.
    // 첫번째 블록의, 셋째줄의 첫번째 노드, 즉 [2,0]을 의미
    
    // 다차원 배열을 사용하려면 반복문을 중복해주면 된다.
    // 만들어 놓은 3차원 배열을 사용해보도록 하자!
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("%d ",marr2[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }
    
    return 0;
}
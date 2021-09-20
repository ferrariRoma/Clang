//
//  programming406.cpp
//  열혈C
//
//  Created by 안동규 on 2021/09/18.
//  열혈C프로그래밍의 '도전! 프로그래밍3' 배열 회전문제

#include <stdio.h>

int arr[4][4];
int check[4][4];

void setStart();
void rotate(int n);


int main_arrRotate()
{
    int answer;
    setStart();
    
    printf("\n\n몇 번 반복하시겠습니까?");
    scanf("%d", &answer);
    
    rotate(answer);
    
    return 0;
}

void setStart()
{
    int num1=1;
    
    while(num1<17){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                arr[i][j]=num1;
                num1++;
            }
        }
    }
    
    printf("\n\n출력해봅시다.\n\n");
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            printf("%4d ", arr[i][j]);
        }
        printf("\n");
    }
}

void rotate(int n)
{
    int num2=0;
    while(num2<n){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                check[i][j]=arr[3-j][i];
                // 이렇게 하면 시계방향이고
                // arr[j][3-i]로 적으면 반시계방향임
            }
        }
        
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                arr[i][j]=check[i][j];
            }
        }

        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                printf("%4d ", arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
        
        num2++;
    }
}

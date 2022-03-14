//
//  calc.c
//  struct-class
//
//  Created by 안동규 on 2022/03/14.
//

#include <stdio.h>

/*
 <필요함수>
 1. 중위 계산법을 받으면 후위 계산법으로 계산
 2. 사칙연산에 따른 우선순위 선정
 3. 변환된 계산법을 읽으면서 숫자는 스택에 넣고,
    사칙연산이 나오면 스택에서 top노드 2개를 빼서 계산하기
    3.0. 괄호는 그것 먼저 계산해야 됨.
    3.1. 가득찼는데 넣으면 오버플로우
    3.2. 텅 비었는데 빼면 언더플로우
 **/

int main(void)
{
    // <1차 목표> 후위표기법으로 변환하기! 각 항은 띄워주자
    // <2차 목표> 괄호 기능은 넣기 "(1+2)/3-2"
    
    char src[30] = "29+2-1";
    char dst[30] = {0,};  // 후위 계산법으로 변환
    int s = 0;
    int d = 0;
    
    // 연산자가 아니면 dst에 PUSH!
    while(src[s] != NULL){
        if(src[s]=='+' || src[s]=='*' || src[s]=='/' || src[s]=='-'){
            // 항과 항 사이에는 띄워주기
            dst[d] = ' ';
            d++;
            // 연산자 다음에 있는 계산할 항을 먼저 넣어주고
            s++;
            dst[d] = src[s];
            d++;
            // 다시 연산자 위치로 돌아가서 연산자를 dst에 넣어주기
            s--;
            dst[d] = src[s];
            d++;
            s++;
        }
        // 연산자면 계산할 항 뒤에 넣어주기!
        else if(src[s]!='+' || src[s]!='*' || src[s]!='/' || src[s]!='-'){
            dst[d] = src[s];
            d++;
        }
        s++;
    }
    printf("\n\n%d\n", d);
    for(int i=0; i<d; i++){
        printf("%c ", dst[i]);
    }
    printf("\n");
    printf("\npostfix: %s\n", dst);

    return 0;
}

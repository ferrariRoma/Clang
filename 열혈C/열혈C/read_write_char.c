//
//  arrayRotate.cpp
//  열혈C
//
//  Created by 안동규 on 2021/09/20.
//  열혈C프로그래밍 p420 vpf

#include <stdio.h>

int conChar(int ch);

int main_readWriteChar()
{
//    기본개념
//    int ch1, ch2;
//
//    ch1=getchar();
//    ch2=fgetc(stdin);
//
//    putchar(ch1);
//    fputc(ch2, stdout);
    
    // p423에 있는 연습문제
    // 내가 푼 방식
//    int ch1, ch2;
//    printf("\n소문자를 대문자로, 대문자를 소문자로 출력해줄게요!\n\n");
//        while(1)
//    {
//        printf("알파벳을 하나 입력해주세요! : ");
//        ch1=getchar();
//        getchar();
//
//        if(ch1>=65 && ch1<=90){
//            ch2=ch1+32;
//            putchar(ch1);
//            printf("\n");
//            putchar(ch2);
//            printf("\n");
//            break;
//        }
//        else if(ch1>=97 && ch1<=122){
//            ch2=ch1-32;
//            putchar(ch1);
//            printf("\n");
//            putchar(ch2);
//            printf("\n");
//            break;
//        }
//        else{
//            printf("\n알파벳을 입력해주세요!\n\n");
//            continue;
//        }
//    }
    
    // 답안지 풀이
    int ch1;
    puts("문자 입력 : ");
    ch1=getchar();
    ch1=conChar(ch1);
    
    if(ch1==-1){
        puts("\n범위를 벗어난 입력입니다.\n\n");
        return -1;
    }
    putchar(ch1);
    
    return 0;
}

int conChar(int ch)
{
    int def='a'-'A';
    if(ch>='A' && ch<='Z'){
        return ch+def;
    }
    else if(ch>='a' && ch<='z'){
        return ch-def;
    }
    else{
        return -1;
    }
}

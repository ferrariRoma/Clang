//
//  functionPointer.cpp
//  열혈C
//
//  Created by 안동규 on 2021/09/17.
//  p395 따라해보기~

#include <stdio.h>

int whoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
    // 함수의 매개변수의 선언으로 함수 포인터 변수가 올 수 있다.
    // 그리고 리턴값으로 반환형이 int이고 int형 매개변수가 2개인 함수이름(함수의 주소값)이 3번째 인자로 전달되어야 한다.
    return cmp(age1, age2);
}

int olderFirst(int age1, int age2)
{
    if(age1>age2)
        return age1;
    else if(age1<age2)
        return age2;
    else
        return 0;
}

int youngerFirst(int age1, int age2)
{
    if(age1<age2)
        return age1;
    else if(age1>age2)
        return age2;
    else
        return 0;
}

void showAllString(int argc, char *argv[])
{
    // char형 더블 포인터와 같다. **argv
    // 즉, 포인터 변수로 이루어진 1차원 배열의 이름을 받아들일 수 있는 친구임.
    for(int i=0;i<argc;i++){
        printf("%s \n", argv[i]);
    }
}

int main_functionPointer()
{
//    p395 연습문제
//    int age1=20;
//    int age2=30;
//    int first;
//
//    printf("입장순서 1\n");
//    first=whoIsFirst(age1, age2, olderFirst);
//    printf("%d세와 %d세 중 %d세가 먼저 입장!\n\n", age1, age2, first);
//    printf("입장순서 2\n");
//    first=whoIsFirst(age1,age2, youngerFirst);
//    printf("%d세와 %d세 중 %d세가 먼저 입장!\n\n", age1, age2, first);
    
//    p399
//int main(int argc, char *argv[])
//{
//    int i=0;
//    printf("전달된 문자열의 수 : %d", argc);
//    for(i=0;i<argc;i++)
//    {
//        printf("%d번째 문자열 : %s", i+1, argv[i]);
//    }
//    char *str[3]={
//        "C programming",
//        "C++ programming",
//        "JAVA programming"
//    };
//    showAllString(3, str);
    

    
    return 0;
}

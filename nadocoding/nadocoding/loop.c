//
//  loop.cpp
//  nadocoding
//
//  Created by 안동규 on 2021/04/11.
//

#include <stdio.h>

int main_loop(void)
{
//    printf("Hello World\n");
//    ++ 뿔뿔 이라는 연산자가 있다.
//    int a = 10;
//    printf("a는 %d\n", a);
//    a++;
//    printf("a는 %d\n", a);
//    int b = 20;
//    printf("b는 %d\n", ++b);
//    printf("b는 %d\n", b++);
//    printf("b는 %d\n", b);
    
//    ++B는 뿔뿔 동작을 먼저 행하고 문장을 끝내라는 뜻! 뿔뿔이라는 것은 B = B + 1을 뜻하는 말이다.
//    B++은 문장을 다 수행하고 나서 그 다음 줄로 넘어갈 때 B + 1을 해주라는 말이다. 중요한 개념이기 때문에 잘 이해해두자
    
//    int i = 1;
//    printf("Hello World %d\n", i++);
//    printf("Hello World %d\n", i++);
//    printf("Hello World %d\n", i++);
//    printf("Hello World %d\n", i++);
//    printf("Hello World %d\n", i++);
//    printf("Hello World %d\n", i++);
//    printf("Hello World %d\n", i++);
//    printf("Hello World %d\n", i++);
//    printf("Hello World %d\n", i++);
//    printf("Hello World %d\n", i++);
    
//    이걸 어떻게 쉽게 하느냐? 반복문이 그 답이다. 반복문의 종류는 for, while, do while
//    for(선언; 조건; 증감) { }
//    for (int i = 1; i <= 10; i++)
//    {
//        printf("Hello World %d\n", i);
//    }
    //while문은 어떻게 쓰는가? while (조건) { }  while문에서는 for처럼 선언을 while 위에서 변수 정의를 해주면 된다. 그럼 증감은 어디서 하는데? printf 문장 다음에 넣어도 되고 printf의 마지막에 넣어도 된다. 즉 조건만 while문 안에 넣어주고 변수정의(선언)과 증감은 문장 밖에 기술
//    int i = 1;
//    while (i <= 10)
//    {
//        printf("Hello World %d\n", i++);
//        //i++; 문장의 끝에 쓰거나 이처럼 문장 밑에 써주면 됨.
//
//    }
    
    //이번에는 do while을 해보겠당! 이거는 do { } while (조건);  이렇게 기술해줌
//    int i = 1;
//    do {
//        printf("hello wolrd %d\n", i++);
//    } while(i <= 10);
    
    //이중 반복문. for문을 겹친다고 생각하면 쉽다.
//    for (int i = 1; i <= 3; i++)
//    {
//        printf("첫 번째 반복문 : %d\n", i);
//
//        for (int j = 1; j <= 5; j++)
//        {
//            printf("  두 번째 반복문 : %d\n", j);
//        }
//    }
    //구구단. 이중반복문을 이용해서 구구단 프로그램을 만들어보자.
//    for (int i = 2; i <= 9; i++)
//    {
//        printf("\n\n%d단 계산\n", i);
//
//        for(int j = 1; j <= 9; j++)
//        {
//            printf(" %d * %d = %d\n", i, j, i * j);
//        }
//    }
    
    //이제 피라미드를 쌓아 볼건데
//    *
//    **
//    ***
//    ****
//    *****
//    이렇게 별을 쌓으려면 어떻게 해야 할까?
//    for (int i = 0; i < 5; i++)
//    {
//        for (int j = 0; j <= i; j++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
    
    //그럼 이거 어떻게 해볼래?
    //        *
    //       **
    //      ***
    //     ****
    //    *****
    //이건 앞에 빈칸이 있음.빈칸은 s라고 표현을 한다면
    //    ssss*
    //    sss**
    //    ss***
    //    s****
    //    *****
    //이렇게 될 것이다.
    
//    for (int i = 0; i < 5; i++)
//    {
//        for(int j = i; j < 5 -1; j++) //[질문] i를 인수로 받으려면 조건도 i와 같게 설정을 해주어야 하는 것인가?
//        {
//            printf("S");
//
//        }
//        for (int k = 0; k <= i; k++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//    for (int i = 0; i < 5; i++)
//    {
//        for(int j = i; j < 5 -1; j++) //[질문] i를 인수로 받으려면 조건도 i와 같게 설정을 해주어야 하는 것인가?
//        {
//            printf(" "); //여기서 우리는 S가 아니라 실제로 빈칸을 집어넣어서 저 모양을 만들고 싶은거니까 빈칸으로 해주면 위에 저 모양대로 출력이 된다.
//
//        }
//        for (int k = 0; k <= i; k++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
    
    //피라미드를 쌓아라 - 프로젝트
//    일단 피라미드를 쌓아보자
//        *
//       ***
//      *****
//     *******
//    *********
    //2씩 커지도록 만들어봅시다!
    
    
    
//    int floor;
//    printf("몇 층으로 쌓을거에요?");
//    scanf("%d", &floor);
//    for (int i = 0; i < floor; i++)
//    {
//        for (int j = i; j < floor-1; j++)
//        {
//            printf(" ");
//        }
//        for (int k=0; k < i+(i+1); k++)  //나도코딩님은 i*2+1이라는 수식을 사용하였는데 이처럼 수식이 어떻든 맞으면 장땡임
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
    
    
    //복습!
    int floor;
    printf("몇 층으로 만들까요?");
    scanf("%d", &floor);
    for(int i = 0; i < floor; i++)
    {
        for(int j = i; j < floor - 1; j++)
        {
            printf(" ");
        }
        for(int k = 0; k < i*2+1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    

    return 0;
}

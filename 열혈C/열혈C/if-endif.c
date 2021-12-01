//
//  if-endif.c
//  열혈C
//
//  Created by 안동규 on 2021/12/01.
//

#include <stdio.h>
#define ADD 1
#define MIN 0
#define ELIF 9
#define STRING_JOB(A,B) #A "의 직업은 " #B " 입니다."
//#define STNUM(Y, S, P) YSP
//#define STNUM(Y, S, P) Y S P
#define STNUM(Y, S, P) ((Y)*100000+(S)*1000+(P))
#define CON(UPP,LOW) UPP ## 00 ## LOW
#define PLUS(A,B,C) ((A)+(B)+(C))
#define MULTI(A,B,C) ((A)*(B)*(C))
#define PI 3.14
#define AREA(R) ((R)*(R)*(PI))
#define MOREBIG(A,B) ((A)>(B) ? (A) : (B))

int main_if_endif(void)
{
    // 576p question 26-1-3
    int num1, num2;
    printf("숫자 2개 입력하세요: ");
    scanf("%d %d",&num1,&num2);
    printf("더 큰 수는 %d 입니다\n", MOREBIG(num1, num2));
    
    // 576p question 26-1-2
//    double round;
//    printf("원주율은?: ");
//    scanf("%lf", &round);
//    printf("원주율: %g \n",AREA(round));
    
    // 576p question 26-1-1
//    printf("26-1-1: %d\n",PLUS(2, 4, 1));
//    printf("26-1-1: %d\n",MULTI(2, 4, 1));
    // 매개변수랑 전체에 괄호를 빼먹음;;
    
    // 576p example
//    int num = CON(23, 05);
//    printf("%d\n",num);
    
    // 574p example
//    printf("학번: %d\n", STNUM(10, 65, 175));
//    printf("학번: %d\n", STNUM(10, 65, 075));
    
    // 573p example
//    printf("%s\n",STRING_JOB(when, programmer));
    
    // 568p example
//    int num1, num2;
//    printf("두 개의 정수 입력: ");
//    scanf("%d %d",&num1,&num2);
//
//    // if
//#if ADD
//    printf("%d + %d = %d\n", num1,num2,num1+num2);
//#endif
//
//    // ifdef
//#ifdef MIN
//    printf("%d - %d = %d\n", num1,num2,num1-num2);
//#endif
//
//    // ifndef
//#ifndef MUL
//    printf("%d * %d = %d\n", num1,num2,num1*num2);
//#endif
//
//    // else
//#if DIV
//    printf("%d / %d = %d\n", num1,num2,num1/num2);
//#else
//    printf("그런거 없다.\n");
//#endif
//
//    // elif
//#if ELIF==2
//    printf("엘리프는 2입니다.\n");
//#elif ELIF==4
//    printf("엘리프는 4입니다.\n");
//#elif ELIF==9
//    printf("엘리프는 9입니다.\n");
//#else
//    printf("엘리프가 뭔데 씹덕아\n");
//#endif  // fclose, free처럼 #if 뒤에는 무조건 #endif
    
    // 567p example
//    int num1, num2;
//    printf("두 개의 정수 입력: ");
//    scanf("%d %d",&num1,&num2);
//
//#if ADD
//    printf("%d + %d = %d\n", num1,num2,num1+num2);
//#endif
//
//#if MIN
//    printf("%d - %d = %d\n", num1,num2,num1-num2);
//#endif
    
    return 0;
}

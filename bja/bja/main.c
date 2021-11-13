//
//  main.c
//  bja
//
//  Created by 안동규 on 2021/11/13.
//  백준 문제들

#include <stdio.h>

int main() {
    // 2588번
//    int a, b;
//    scanf("%d %d",&a, &b);
//    printf("%d\n",a*(b-100*(b/100)-10*((b-(b/100)*100)/10)));
//    printf("%d\n", a*((b-(b/100)*100)/10));
//    printf("%d\n", a*(b/100));
//    printf("%d\n", a*b);
    
    
    // 1330번
//    int a,b;
//    scanf("%d %d", &a, &b);
//    if(a>b)
//        printf(">\n");
//    else if(a<b)
//        printf("<\n");
//    else
//        printf("==\n");
    
    // 9498
//    int a;
//    scanf("%d",&a);
//
//    if(a>=90)
//        printf("A\n");
//    else if(a>=80)
//        printf("B\n");
//    else if(a>=70)
//        printf("C\n");
//    else if(a>=60)
//        printf("D\n");
//    else
//        printf("F\n");
    
    // 2753
//    int year;
//    scanf("%d", &year);
//    if(((year%4)==0 && (year%100)!=0) || ((year%4)==0 && (year%400)==0))
//        printf("1\n");
//    else
//        printf("0\n");
    
    // 14681
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    
    if(x>0 && y>0)
        printf("1\n");
    else if(x<0 && y>0)
        printf("2\n");
    else if(x<0 && y<0)
        printf("3\n");
    else
        printf("4\n");
    
    return 0;
}

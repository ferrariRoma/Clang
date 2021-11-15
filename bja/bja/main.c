//
//  main.c
//  bja
//
//  Created by 안동규 on 2021/11/13.
//  백준 문제들

#include <stdio.h>
#include <stdlib.h>

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
//    int x, y;
//    scanf("%d", &x);
//    scanf("%d", &y);
//
//    if(x>0 && y>0)
//        printf("1\n");
//    else if(x<0 && y>0)
//        printf("2\n");
//    else if(x<0 && y<0)
//        printf("3\n");
//    else
//        printf("4\n");
    
    // 2884
//    int hours, mins, temp;
//    scanf("%d %d", &hours, &mins);
//    temp = (hours*60+mins)-45;
//    if(temp<0){
//        hours = 23;
//        mins = 60-abs(temp%60);
//        printf("%d %d",hours,mins);
//    } else {
//        hours = temp/60;
//        mins = temp%60;
//        printf("%d %d",hours,mins);
//    }
    
    // 2739
//    int n;
//    scanf("%d",&n);
//    for(int i=1;i<10;i++)
//        printf("%d * %d = %d\n", n, i, n*i);
    
    // 10950
//    int i,a,b;
//    scanf("%d", &i);
//    for(int j=0;j<i;j++){
//        scanf("%d %d", &a, &b);
//        printf("%d\n",a+b);
//    }
    
    // 8393
    int i, sum=0;
    scanf("%d", &i);
    for(int j=0;j<=i;j++)
        sum +=j;
    printf("%d",sum);
    return 0;
}

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
//    int i, sum=0;
//    scanf("%d", &i);
//    for(int j=0;j<=i;j++)
//        sum +=j;
//    printf("%d",sum);
    
    // 15552
//    int i;
//    int num1, num2;
//    scanf("%d", &i);
//    for(int j=0;j<i;j++){
//        scanf("%d %d", &num1, &num2);
//        printf("%d\n", num1+num2);
//    }
    
    // 2741
//    int i;
//    scanf("%d", &i);
//    for(int j=1;j<=i;j++)
//        printf("%d\n",j);
    
    // 2742
//    int i;
//    scanf("%d", &i);
//    for(int j=i;j>0;j--)
//        printf("%d\n",j);
    
    // 11021
//    int i, count=0, num1, num2;
//    scanf("%d", &i);
//    for(int j=0;j<i;j++){
//        scanf("%d %d", &num1, &num2);
//        printf("Case #%d: %d\n",j+1,num1+num2);
//    }
    
    // 11022
//    int i, count=0, num1, num2;
//    scanf("%d", &i);
//    for(int j=0;j<i;j++){
//        scanf("%d %d", &num1, &num2);
//        printf("Case #%d: %d+%d = %d\n",j+1,num1, num2, num1+num2);
//    }
    
    // 2438
//    int length, height=0;
//    scanf("%d", &height);
//    for(int i=1;i<=height;i++){
//        for(length=0; length<i;length++)
//            printf("*");
//        printf("\n");
//    }
    
    // 2439
//    int height, i;
//    scanf("%d", &height);
//    for(i=height;i>0;i--){
//        for(int mkspace=i;mkspace>1;mkspace--){
//            printf(" ");
//        }
//        for(int star=0;star<height-(i-1);star++){
//            printf("*");
//        }
//        printf("\n");
//    }
    
    // 10871
//    int answer1=0, answer2=0 ,answer3=0;
//    printf("몇개를 입력받을까요?: ");
//    scanf("%d",&answer1);
//    getchar();
//    printf("몇 보다 크면 좋을까요?: ");
//    scanf("%d",&answer2);
//    for(;answer1>0;answer1--){
//        printf("수열 입력: ");
//        scanf("%d",&answer3);
//        getchar();
//        if(answer3<answer2){
//            printf("%d\n",answer3);
//        }
//    }
//    printf("\n");
    
    // 10952
//    int a,b,sum;
//    while(1){
//        scanf("%d",&a);
//        scanf("%d",&b);
//        if(a==0 && b==0){
//            break;
//        }
//        sum=a+b;
//        printf("%d",sum);
//        printf("\n");
//    }
//    공부가 if문의 위치를 잘못 잡아서 오답이 됐음
  
    // 10951
//    int a, b;
//    while(scanf("%d %d", &a, &b)!=EOF){
//        printf("%d\n",a+b);
//    }
//    기준이 모호해서 해답을 찾아봄.
    
    // 1110
//    int intNum, result=0, change, time=0;
//    scanf("%d",&intNum);
//    change = intNum;
//    while(1){
//        time++;
//        result = (change%10)*10 + (change/10 + change%10)%10;
//        change = result;
//        if(intNum==result)
//            break;
//    }
//    printf("%d",time);
    
    // 10818
//    int i,maxNum = 0,minNum = 0;
//    printf("배열 크기: ");
//    scanf("%d",&i);
//    int arr[i];
//    printf("배열 내용: ");
//    for(int j=0;j<i;j++){
//        scanf("%d",&arr[j]);
//    }
//    getchar();
//    printf("최소 최대: ");
//    for(int j=0;j<i;j++){
//        if(arr[j+1]>arr[j])
//            maxNum = arr[j+1];
//    }
//    for(int j=0;j<i;j++){
//        if(arr[j+1]<arr[j])
//            minNum = arr[j+1];
//    }
//    printf("%d %d\n", minNum, maxNum);
    
    // => 자꾸 틀려서 보니까 왜 풀이에서는 배열을 안쓰는거지? 괜히 삽질한듯. 배열을 안쓰고 풀어보아야겠다.
    
//    int time,num,max=-1000001,min=1000001;
//    scanf("%d", &time);
//        for(int i=0;i<time;i++){
//            scanf("%d",&num);
//            if(max<num) max=num;
//            if(min>num) min=num;
//        }
//    printf("%d %d\n", min, max);
    
    // => 최저,최댓값의 초기화가 센스있음. 뭘 적어도 저 숫자들 보다는 작고 크기 때문이지.
    // 최대, 최솟값을 저렇게 설정하고 배열을 사용하면 정답일까? 맞군! 아래도 정답이다.
    
//    int time, num, max=-1000001, min=1000001;
//        scanf("%d ", &time);
//        int arr[time];
//        for(int i=0; i<time; i++){
//            scanf("%d ", &arr[i]);
//            if(max<arr[i]) max = arr[i];
//            if(min>arr[i]) min = arr[i];
//        }
//    printf("%d %d", min, max);
    
    // 2562
//    int num=0,max=0,arr[8];
//    for(int i=0;i<9;i++){
//        scanf("%d",&arr[i]);
//        if(arr[i]>max){
//            max=arr[i];
//            num=i;
//        }
//    }
//    printf("%d\n%d\n",max,num+1);
    
    // 2577번
//    int a,b,c;
//    int result[10]={0,};
//    scanf("%d %d %d",&a,&b,&c);
//    int number=a*b*c;
//
//    int count=0;
//    while(0<number/10){
//        printf("%d - first: %d \n",number,number);
//        count=number%10;
//        result[count]++;
//        number/=10;
//        printf("%d - second: %d \n",number,number);
//    }
//
//    for(int i=0;i<10;i++){
//        printf("%d \n",result[i]);
//    }
    
    // 컨셉 방향은 잘 잡았는데, 구현하는 부분에서 실수가 있었음.
    // 특히나 while을 오랜만에 쓰다 보니까 조건문 작성에 대해서 헷갈렸음.
    // 추가적으로 result[count]++이랑 number/=10처럼 간결하게 표기하는 부분도 잘 익혀두자.
    
    // 실수 하나 더 발견! while(0<number/10)이라고 적으면 10으로 2번 나눈 결과를 평가하는 거임.
    // 그러니까 number은 10으로 나누고 나서 (number/=10) 조건문에서 number/10으로 또 나누면 또 10으로 나누게 된다.
    // 이 모든 결과가 number에 반영이 되기 때문에 그렇다.
    
    // 3052번
//    int arr[10] = {0,};
//    int result[42] = {0,};
//    for(int i=0;i<10;i++){
//        scanf("%d ", &arr[i]);
//    }
//    int temp=0;
//    for(int i=0;i<10;i++){
//        temp = arr[i]%42;
//        result[temp]++;
//    }
//
//    int count=0;
//    for(int i=0;i<42;i++){
//        if(result[i]!=0)
//            count++;
//    }
//    printf("%d \n",count);
    
    // 42로 나누면 나머지가 0~41이 될 수 있다는 걸 간과했군..ㅜ
    
    // 3052 복습
    
//    int arr[10] = {0,};
//    int answer[42] = {0,};
//    // 42로 나누니까 경우의 수는 42가지 배열에 다 들어감
//
//    for(int i=0; i<10; i++){
//        printf("%d번째 숫자를 입력하세요: ", i);
//        scanf("%d", &arr[i]);
//    }
//
//    int result;
//    for(int i=0; i<10; i++){
//        printf("%d를 42로 나눕니다.\n", arr[i]);
//        result = arr[i]%42;
//        answer[result]++;
//    }
//
//    int count = 0;
//    for(int i=0; i<42; i++){
//        if(answer[i] != 0){
//            count++;
//        }
//    }
//
//    printf("\n\n결과는 %d 입니다.\n", count);
    
    // 1546번
    
    int subject;
    scanf("%d ", &subject);
    for(int i=0; i<subject; i++){
        
    }
    
    return 0;
}

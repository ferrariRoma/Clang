//
//  function.cpp
//  열혈C
//
//  Created by 안동규 on 2021/09/04.
//  열혈 C프로그래밍에서 p215에 나오는 내용부터...

#include <stdio.h>

//문제1 함수
//int cmpmax(int num1, int num2, int num3)
//{
//    if(num1>num2)
//    {
//        if(num1>num3){
//            return num1;
//        }
//        else{
//            return num3;
//        }
//    }
//    else
//    {
//        if(num2>num3){
//            return num2;
//        }
//        else{
//            return num3;
//        }
//    }
//}
//
//int cmpmin(int num1, int num2, int num3)
//{
//    if(num1<num2)
//    {
//        if(num1<num3){
//            return num1;
//        }
//        else{
//            return num3;
//        }
//    }
//    else
//    {
//        if(num2<num3){
//            return num2;
//        }
//        else{
//            return num3;
//        }
//    }
//}

// 문제1 : 삼항 연산자를 사용하는 방법
int cmpmax(int num1, int num2, int num3)
{
    if(num1>num2)
        return num1>num3 ? num1 : num3;
    else
        return num2>num3 ? num2 : num3;
}

int cmpmin(int num1, int num2, int num3)
{
    if(num1<num2)
        return num1<num3 ? num1 : num3;
    else
        return num2<num3 ? num2 : num3;
}


// 문제2
int FahToCel(int Cel)
{
    int Fah=0;
    return Fah=1.8*Cel+32;
}

// 문제3
void fibo(int answer)
{
    int num1=0;
    int num2=1;
    int num3=0;
    if(answer==1){
        printf("%d", num1);
    }
    else{
        for(int i=0;i<answer;i++){
            printf("%d ", num3);
            num1=num2; // 1 0 1
            num2=num3; // 0 1 1
            num3=num1+num2; // 0 1 1 2
        }
    }
}


int main_function(void)
{
    // return은 두 가지 의미를 갖는다.
    // 하나는 함수를 빠져나간다는 것이고 다른 하나는 말 그대로 값을 반환해주는 것이다.
    // 최근 헤드노드 초기화 함수를 만들때 return을 신경 안써서 원하는 값이 나오지 않은 적이 있는데,
    // 이처럼 함수의 진행에서 종료가 되야할 지점에는 return을 써주어야 한다는 것을 잊지말자.
    // 이런 의미에서 보면 한 함수에 return이 2번 들어갈 수도 있는 것이다.
    
    // p221 함수연습문제
    
    // 문제1
    int num1, num2, num3;
//    printf("\n세 개의 숫자를 입력하면 가장 큰 수와 가장 작은 수를 알려줄게요.\n");
//    printf("숫자 3개를 입력해주세요\n");
//    scanf("%d %d %d", &num1, &num2, &num3);
//    printf("\n가장 큰 숫자는 %d이고, 가장 작은 숫자는 %d입니다!\n"
//           ,cmpmax(num1, num2, num3),cmpmin(num1, num2, num3));
    // 내가 생각하는 개선점은, 함수가 if문을 쭉 써서 너무 복잡해보이는데...
    // 답안지에서도 이 이야기를 알려주고 있는데, 개선된 방법으로 밑에 다시 풀어보자.
    
    // 문제1에서 함수에 ifelse문을 많이 써서 복잡함을 느꼈는데
    // 풀이에서도 그런 부분에 대해서 문제를 제기하였음.
    // 해결책으로는 삼 항 연산자(p187)가 있다.
    // 이와 관련해서 코딩도장에서는 삼 항 연산자에 대한 문제점도 함께 제시해주었는데,
    // if문에 비해서 짧게 표현할 수 있다는 장점도 있지만, 축약된 형식이기 때문에 가독성을 떨어뜨리기도 함!
    // 특히, 한 줄에 조건식과 결괏값이 모두 모여있어서 디버거로 줄 단위 디버깅을 할 때 상당히 불편함.
    // 따라서 가독성을 해치지 않으면서 코드가 간결해지는 경우에만 삼항 연산자를 사용해야함.
    
    // 문제2
//    printf("섭씨를 화시로 바꿔주는 함수를 만들어보았어요!\n현재 온도를 입력해주세요 : ");
    // 문제1에서 정의한 정수형변수를 가져다 씁시당~
//    scanf("%d", &num1);
//    printf("\n\n화씨 : %d\n", FahToCel(num1));

    // 문제3
    // 여기서 헤맸던 이유는 num1,num2로만 해결을 하려고 했던 것이다.
    // 항상 지나면 느끼는 부분인데, 2개의 수로 무언갈 하려면 꼭 변수는 3개가 필요하다고 생각해주자.
    // num1에 이전 숫자, num2에 현재 숫자, num3에 다음 숫자를 넣어야 하니까 말이다.
    printf("피보나치 수열을 몇 개 보여드릴까요? : ");
    scanf("%d", &num1);
    printf("\n\n피보나치 수열\n");
    fibo(num1);
    printf("\n");
    
    return 0;
}

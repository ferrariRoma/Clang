//
//  RecursiveFunc.cpp
//  열혈C
//
//  Created by 안동규 on 2021/09/07.
//  열혈C코딩 p238~

#include <stdio.h>

// 재귀함수를 만들때는 탈출조건이 중요하다. 없으면 무한호출 됨.
void Recursive(int num)
{
    if(num<=0){
        return;  // 조건식을 통해서 탈출 조건을 마련해주어야 한다.
    }
    printf("Recursive call! %d \n", num);
    Recursive(num-1);
}

// 재귀함수의 다른 사례
// 팩토리얼과 같이 반복되는 친구들은 재귀함수로 표현하기 딱 좋음!
// 그래서 0일때는 1이니 예외로 하나의 반환값을 정해두고,
// 보통의 경우를 위해
int Factorial(int n)
{
    if(n==0)
        return 1;
    else{
        return n*Factorial(n-1);
    }
}

// 포인터 배열을 함수의 인자로 쓸 수 있나?
// 쓸 수 있는데 그 인자를 같은 자료형의 포인터로 설정해주어야 한다.
// 포인터 배열 인자를 통해 반복문으로 출력을 해보자.
void showArrayElem(int *param, int len)
{
    for(int i=0;i<len;i++){
        printf("%d",param[i]);
    }
    printf("\n");
}

// main함수 밖에 정의된 함수를 통해서
// main함수 안에 정의된 배열의 값도 변경이 가능한가요?
void addArrayElem(int *param, int len, int add)
{
    for(int i=0;i<len;i++)
    {
        param[i]+=add;
        printf("%d",param[i]);
    }
}

int main(void)
{
//    Recursive(3);
//    printf("\n");
//    printf("%d", Factorial(5));
//    printf("\n");
    
    int arr1[3]={1,2,3};
    int arr2[5]={4,5,6,7,8};
//    showArrayElem(arr1, sizeof(arr1)/sizeof(int));
//    showArrayElem(arr2, sizeof(arr2)/sizeof(int));
    
//    addArrayElem(arr1, sizeof(arr1)/sizeof(int), 2);
    
    return 0;
}

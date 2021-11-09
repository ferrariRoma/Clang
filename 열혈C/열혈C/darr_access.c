//
//  DarrAccess.cpp
//  열혈C
//
//  Created by 안동규 on 2021/09/16.
//  열혈 C프로그래밍 p387 연습문제

#include <stdio.h>

int main_DarrAccess(void)
{
    // 문제1 : ???를 대신할 수 있는 포인터 변수는?
    //    int *arr1[5];
    //    int *arr2[3][5];
    //    ???=arr1;
    //    ???=arr2;
    //    정답(오답임/문제 파악자체를 잘못함. 어떤 포인터 형이 들어갈 수 있는지를 질문함.)
    //    arr1[0]=arr1;
    //    arr2[0]=arr2;
    //    풀이
    //    첫번째는 싱글 포인터 배열임. 그래서 더블 포인터로 주소를 받을 수 있음.
    //    int **ptr1=arr1;
    //    두번째는 싱글 포인터 이차원 배열임. 싱글포인터이기 때문에
    //    그걸 고려하면서 이차원 배열이기 때문에 이차원 배열의 주소를 받을 수 있는 포인터를 만들어주자.
    //    int arr2[3][5] 일때는 int (*ptr2)[5]로 받아줄 수 있는데, 싱글 포인터인 점을 감안하면,
    //    int *(*ptr2)[5]=arr2;
    
    // 문제2 : 아래의 코드를 참조하여 ???을 대신할 수 있는 매개변수 선언을 추가해보자.
    //    void SimpleFuncOne(???,???){}
    //    void SimpleFuncTwo(???,???){}
    //    int main()
    //    {
    //        int arr1[3];
    //        int arr2[4];
    //        int arr3[3][4];
    //        int arr4[2][4];
    //
    //        SimpleFuncOne(arr1,arr2);
    //        SimpleFuncTwo(arr3,arr4);
    //    }
    //    정답
    //    void SimpleFuncOne(int *ptr1, int *ptr2){} = (int ptr1[], int ptr2[]){}
    //    void SimpleFuncTwo(int ptr3[][4],int ptr4[][4]){} = (int (*ptr3)[4],int (*ptr4)[4]){}
    
    // 문제3 : 이 문제도 위 문제와 유사하다. 즉, ???을 대신할 수 있는 매개변수 선언을 추가하는 것이다.
    // void ComplexFuncOne(???,???){}
    // void ComplexFuncTwo(???,???){}
    // int main(void)
//    {
//        int *arr1[3];
//        int *arr2[3][5];
//        int **arr3[5];
//        int ***arr4[3][5];
//
//        ComplexFuncOne(arr1, arr2);
//        ComplexFuncTwo(arr3, arr4);
//    }
    // 정답(오답임)
    // void ComplexFuncOne(int ***ptr1, int (**ptr2)[5]){}
    // void ComplexFuncTwo(int ***arr3, int (****arr4)[5]){}
    // 풀이
    // 앞의 두 문제를 제대로 풀었다면 맞출 수 있음.
    // 하지만 1번 문제를 틀렸었다면 그에 대한 개념이 아직은 확실하지 않은 상태였기 때문에 틀림
    // void ComplexFuncOne(int **ptr1, int *(*ptr2)[5]){}
    // void ComplexFuncTwo(int ***ptr3, int ***(*ptr4)[5]){}
    
    // 문제4 : 다음 예제의 출력결과는 무엇인가? 이는 예제를 실행하지 않고 답을 해야 한다.
    // 정답
    //    3  2
    //    6  4
    //    5  2
    //    1  1
    
    // 문제5 : 아래의 코드를 보자. 이 예제에서는 인덱스[1][0][1]의 배열요소를 출력하고 있다.
    // 이때 사용된 arr[1][0][1]을 대신할 수 있는 문장을 5개 이상 제시해보자.
    // ((*(arr+1)+0)+1) = (*(arr[1]+0)+1) = (*(*arr[1])[0])[1] = ((*arr[1])[0]+1) =
    
    return 0;
    
}

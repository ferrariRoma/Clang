#include <stdio.h>

// 열혈 C프로그래밍 p284 연습문제

int main_pointer_practice()
{
    // 1번 문제
    // 1번 문제는 그림 그려서 이해하는 거라서 끝~

    // 2번 문제
    /* int num1 = 10, num2 = 20;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;
    printf("ptr1의 값은 %d 입니다.\n", *ptr1);
    printf("ptr2의 값은 %d 입니다.\n\n", *ptr2);

    *ptr1 += 10;
    *ptr2 -= 10;
    printf("ptr1의 값은 %d 입니다.\n", *ptr1);
    printf("ptr2의 값은 %d 입니다.\n\n", *ptr2);

    ptr1 = &num2;
    ptr2 = &num1;
    printf("ptr1의 값은 %d 입니다.\n", *ptr1);
    printf("ptr2의 값은 %d 입니다.\n", *ptr2); */

    // 297p 예제 따라하기
    /* int arr[3] = {11,22,33};
    int *ptr = arr;  // = &arr[0]; 와 같다.
    printf("%d %d %d \n", *ptr, *(ptr+1), *(ptr+2));
    // ptr + x 하면 포인터 형에 따라서 주소가 더해진다.
    // 이를 이용해서 배열의 칸을 이동
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr++;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); ptr--;
    printf("%d ", *ptr); printf("\n");

    printf("%d %d\n", *(++ptr), *(ptr+1)); */

    // 299p 문제 풀기

    // 1번 문제
    /* int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[0];

    for(int i=0; i<5; i++)
    {
        ptr[i] += 2;

        // 개선방법으로,
        // *(ptr++) += 2;
        // 이렇게 기술할 수도 있음!
        // 이는,
        // *ptr += 2;
        // ptr++;
        // 이를 한 번에 쓴 것이다.
        // 문제에 ptr에 저장된 값(주소값)을
        // 증가시키는 형태의 연산을 기반으로
        // 배열요소에 접근을 하라는 거 보니까
        // 내가 썼던 방법 보다는 풀이에서
        // 썼던 방식이 좀 더 정답과는 일치하는 듯
    }

    for(int i=0; i<5; i++)
    {
        printf("%d ", *(ptr+i));
    } */


    // 2번 문제
    /* int arr[5] = {1,2,3,4,5};
    int *ptr = arr;

    for(int i=0; i<5; i++)
    {
        *(ptr+i) += 2;
        // 이 방식은 1번 문제랑은 다르다.
        // 1번 문제는 ptr 자체를 ++ 혹은 -- 해주면서
        // 주소값에 직접적으로 포인터형 만큼의 값을
        // 더해주면서 +2를 해주는 반면
        // 이거는 +1, +2 등을 해주면서
        // ptr에는 직접적으로 주소 값을
        // 더해주지 않고 있음
    }

    for(int i=0;i<5;i++)
    {
        printf("%d ", ptr[i]);
    } */


    // 3번 문제
/*     int arr[5] = {1,2,3,4,5};
    int *ptr = &arr[4];
    int sum = *ptr;  // sum에 ptr[5]를 할당

    for(int i=1; i<5; i++)
    {
        sum += *(--ptr);  
        // sum이 ptr[4]이니까 먼
        // 저 감소(--)를 해주고 4부터 덧셈이 될 수 있도록 한다.
    }

    printf("%d \n", sum); */
    // 풀이에는 sum을 0으로 초기화해서, 하는 방법이 소개됨.
    // 이렇게 되면 int=0으로 초기화해서 덧셈을 해주면 
    // 0~4번 배열을 모두 더할 수 있다.

    // 4번 문제
    int bag = 0;
    int arr[6] = {1,2,3,4,5,6};
    int *ptr1, *ptr2;
    ptr1 = arr;
    ptr2 = &arr[5];
    
    // 내가 생각한 개념
    /* printf("%d %d \n", *ptr1, *ptr2);
    bag = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = bag;
    printf("%d %d %d \n", bag, *ptr1, *ptr2); */

    for(int i=0; i<3; i++)
    {
        bag = *(ptr1);
        *(ptr1) = *(ptr2);
        *(ptr2) = bag;
        ptr1++;
        ptr2--;
    }
    
    for(int i=0; i<6; i++)
    {
        printf("%d ", arr[i]);
        // 답안지에는 마지막 출력을 arr을 이용했는데,
        // 나는 처음에는 *(ptr++)로 출력하려고 했지만 오류가 남.
        // 왜 그럴까? 아마 ++를 하면 ...
        // 생각을 해보니까 ptr1과 ptr2가 각각 반반을 가져가서
        // 그 외의 값을 출력하는데에 오류가 생기는거 같음.
        // 그래서 안전하게 arr[i]를 사용하는 듯.
        // 일단 무명쿤에게 한 번 물어보자!
    }
    printf("\n");
    // 완료!!!
    
    return 0;
}
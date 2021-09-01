//
//  function.cpp
//  nadocoding2
//
//  Created by 안동규 on 2021/05/14.
//
//
#include <stdio.h>

// 선언. 여기서는 선언만 해주는 것이기 때문에 세미콜론으로 문장을 종료해주면 된다.
void p(int num);
// void function_without_return();
// int fuction_with_return();
// void function_without_params();
void function_with_params(int num1, int num2, int num3);
int apple(int total, int ate);  //전체 total에서 먹은 량을 제하는 함수를 만들어보겠습니다.
int add(int num1, int num2);
int sub(int num1, int num2);
int mul(int num1, int num2);
// int div(int num1, int num2);

int main_function(void)
{
    //function
    //계산기

//    int num = 2;
//    // printf("num는 %d 입니다.\n", num); //2
//    p(num);
//
//    //2+3은?
//    num = num + 3; //num +=3 과 완전히 동일하다.
//    // printf("num는 %d 입니다.\n", num); //5
//    p(num);
//
//    //5-1은?
//    num -= 1; //num = num - 1 과 완전히 동일하다.
//    // printf("num는 %d 입니다.\n", num); //4
//    p(num);
//
//    // 4 * 3
//    num *=3;
//    // printf("num는 %d 입니다.\n", num); //12
//    p(num);
//
//    // 12/6
//    num /=6;
//    // printf("num는 %d 입니다.\n", num); //2
//    p(num);
    
    // 그런데 지금보면 넘버는 00입니다라는 문장을 5번이나 썼음. for에서는 이런걸 한 번만 쓰고 해결했는데 이번에도 '함수'를 이용해서 한 번만 쓸 수 있게 정리할 수 있다.
    // 순서는 main함수 위에 선언, main함수 밑에 정의를 기술해준다. 그리고 p(num); 를 적어주면 됨.
    
    // 함수는 어떻게 생겼냐면, 반환형 = 함수이름(전달값)
    // 반환형은 이 함수에서 어떤 동작을 수행하고 나서 반환해주는 값을 말한다.
    // int 함수이름(num)
    // {
    //    return num + 4;
    // }
    // num는 정수기 때문에 정수의 자료형에 맞춰서 int를 반환형에 넣어주면 된다. 그래서 만약 실수라면 float,double을 써주면 된다.
    // 만약 void를 적으면 return값이 없어도 됨.
    // 전달값 부분도 우리가 어떤 형식으로 받을지 정의를 할 수 있다. int num라고 적을 수도 있고,
    // 심지어는 여러개를 받을 수도 있다. 이렇게, (int num, char c, int num2, float f)
    // 참고로 '반환형 함수이름(전달값)' 이 형식은 위에 선언을 하는 부분과 완전히 동일해야 한다.
    // 측 (int num, char c, int num2, float f) 이렇게 전달값을 설정을 한다고 예를 들면,
    // 반환형 함수이름(int num, char c, int num2, float f) 라고 위에서 선언이 되고
    // 똑같은 형식으로 밑에 정의되어 있어야 한다.

    // 함수 종류 먼저 알아볼까요?
    // 반환값이 없는 함수(예: void)
    // 반환값이 있는 함수
    
    // function_without_return();  // void함수기 때문에 반환값이 없어서 반환형 기술을 안해줌.
    // int ret = fuction_with_return();
    // p(ret);
    
    // 파라미터(전달값)가 없는 함수
    // function_without_params();
    
    // 파라미터(전달값)이 있는 함수
    // function_with_params(1, 2, 3);
    
    //파라미터(전달값)도 받고, 반환값이 있는 함수
    // int ret = apple(5, 2); //5개의 사과 중에서 2개를 먹었어요. 여기서는 반환값이라는 것을 정수 'ret'로 정의해놓은 상태이다.
    // 그래서 위에 보면 선언과 정의에는 int apple(~~)로 기술이 되어있는데 이것은 int라는 반환값, apple이라는 함수이름, 그리고 전달값만 기술해놓은 것.
    // printf("사과 5개 중, 2개를 먹으면 몇 개가 남아요? %d개가 남습니다.\n", ret);
    // 지금은 apple이라는 함수를 호출해 전달받은 값을 ret라는 변수에 반환을 받고 그 값을 printf에 사용을 하였음
    // printf("사과 %d개 중에 %d개를 먹으면 %d가 남아요.\n", 10, 4, apple(10, 4));
    
    //계산기 함수
//    int num = 2;
//    num = add(num, 3);
//    p(num);
//
//    num = sub(num, 1);
//    p(num);
//
//    num = mul(num, 3);
//    p(num);
//
//    num = div(num, 6);
//    p(num);

    
    
    return 0;
}





    //정의. 정의는 main함수 밑에서 정의를 해주면 된다.
void p(int num)  // p라는게 이름이고 오른쪽 소괄호에 있는게 전달을 할 전달값이다. 여기서는 밑에 정의를 해야함으로 선언과는 달리 세미콜론으로 마무리를 해서는 안된다.
{
    printf("num은 %d 입니다.\n", num);
}

// void function_without_return()
//{
//    printf("반환값이 없는 함수입니다.\n");
//}

// int fuction_with_return()
//{
//    printf("반환값이 있는 함수 입니다.\n");
//    return 10;
//}
//
//// void function_without_params()
//{
//    printf("전달값이 없는 함수입니다.\n");
//}

void function_with_params(int num1, int num2, int num3)
{
    printf("전달값이 있는 함수이며, 전달받은 값은 %d, %d, %d 입니다.\n"
           , num1, num2, num3);
}

int apple(int total, int ate)
{
    printf("전달값과 반환값이 있는 함수입니다.\n");
    return total - ate;
}

int add(int num1, int num2)
{
    return num1 + num2;
}

int sub(int num1, int num2)
{
    return num1 - num2;
}

int mul(int num1, int num2)
{
    return num1 * num2;
}

// int div(int num1, int num2)

//{
//    return num1/num2;
//}

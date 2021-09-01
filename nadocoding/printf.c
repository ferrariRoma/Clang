//
//main.c
//nadocoding
//
//Created by 안동규 on 2021/03/27.


#include <stdio.h>

int main_printfscanf(void)
{
    /* insert code here...
    printf("Hello, World!\n");*/

    // 정수형 변수에 대한 예제. %d는 정수값을 뜻하고, 뒤에 age는 출력할 값을 알려줌. 고로 정수인 age를 출력한다는 말
    /*int age = 12;
    printf("%d\n", age);*/

    // 실수형 변수에 대한 예제. float랑 double이 있는데 둘 차이점은 printf에서 %f인가 %lf인가의 차이다. 소수점을 설정하고 싶으면 %.1f 등 중간에 .숫자를 기술하면 그 자리만큼 소수점을 보여준다.
    /*float f=46.4;
    printf("%.2f\n", f);
    double d=36.5;
    printf("%lf\n", d);*/
    // double은 열혈 c프로그래밍 읽어보면 잘 나오지만, 입력 시에 %lf로 하고 출력때는 %f할 수 있음.
    // 상수(변수는 변하는데 상수는 변하지 않습니다!) 설정하려면 '변수정의' 앞에 const만 적으면 됨.
    /*const int 출생년도=2000;
    printf("태어난 년도는? : %d\n", 출생년도);*/

    // printf
    // 연산이 가능함
    int add = 3 + 7;
    printf("3 + 7 = %d\n", add);

    // 변수(add)를 사용하지 말고 숫자로 바로 출력해보겠음
    printf("%d + %d = %d\n", 3, 7, 3 + 7);

    // scanf는 키보드 입력을 받아서 저장. 값을 입력하세요라는 문장이 출력되면 입력을 하고 싶다? 그럼 scanf_s를 이용!

    /*int input;
    printf("값을 입력하세요 : ");
    scanf("%d", &input);
    printf("값은? %d\n", input);*/

    // 세 개의 정수를 한 번에 입력해서 출력할 수도 있다.

    /*int one, two, three;
    printf("세 개의 정수를 입력하세요 : ");
    scanf("%d %d %d", &one, &two, &three);
    printf("첫번째 값은 : %d\n", one);
    printf("두번째 값은 : %d\n", two);
    printf("세번째 값은 : %d\n", three);*/

    // 문자와 문자열이라는 것이 있다. 문자는 한 글자. 문자열은 한 개 이상의 문자를 말한다. 문자를 입력할 때는 %c를 쓴다.
    /*char c = 'A';
    printf("%c\n", c);*/

    // 문자열이라는 것은 한 글자 이상의 여러글자이기 때문에 배열을 보통 쓴다. str을 쓰는 이유는 char c 256개를 연속해서 주욱 나열한다는 뜻이다. 문자열을 입력할때는 %s를 쓴다. 문자열을 작성할 때는 scanf에서 &없이 그냥 str만 적어주면 된다. 다만 크기를 명시해주어야 한다. sizeof를 통해서 우리는 256개의 문자만 받겠다는 것을 알려주는 역할을 한다.
    // 추가적으로 나도코딩 강의에서 나오는 scanf_s는 MS의 자체함수이므로 맥북에서는 안씀. 근데 scanf_s에서는 사이즈를 적어주어야 하지만 그냥 scanf에서는 사이즈를 기술하지 않아도 된다.

    /*char str[256];
    scanf("%s", str);
    printf("%s\n", str);*/
  
    // 프로잭트
    // 경찰관이 범죄자의 정보를 입수(조서작성)
    char name[256];
    printf("이름이 뭐에요?");
    scanf("%s", name);

    int age;
    printf("몇살이에요?");
    scanf("%d", &age);

    float weight;
    printf("몸무게는 몇 kg이예요?");
    scanf("%f", &weight);

    double height;
    printf("키는 몇 cm에요?");
    scanf("%lf", &height);

    char what[256];
    printf("범죄명이 뭐에요?");
    scanf("%s", what);

    //조서 내용 출력

    printf("\n\n--- 범죄자 정보 ---\n\n");
    printf("이름 : %s\n", name);
    printf("나이 : %d\n", age);
    printf("몸무게 : %.2f\n", weight);
    printf("키 : %.2lf\n", height);
    printf("범죄명 : %s\n", what);



  return 0;
}

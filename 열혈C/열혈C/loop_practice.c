#include <stdio.h>

// 열혈 C프로그래밍 p155 예제문제

int main_loop_practice()
{
    // 2번 문제
    // int answer;
    // int i=0;
    // /* ㅋㅋㅋㅋㅋㅋㅋㅋㅋ처음 실행할때 answer 입력을 안받고 실행해서
    // 무한루프됨ㅋㅋㅋㅋㅋㅋㅋ */
    // printf("3의 배수를 몇 번 출력할까요?");
    // scanf("%d", &answer);

    // while(i<answer)
    // {
    //     i++;
    //     printf("%d ", 3*i);
    // }
    // printf("\n");
    // 여기서 다르게 기술을 할 수 있다.

    /* i++를
    while(i++<answer)로 해주면, 반복조건의 참거짓을
    확인하는 단계에서 이미 0으로 초기화된 i가 1이 되어 시작을
    하기 때문에 3*1부터 값을 출력할 수 있다. */


    // 3번 문제
    // int answer = 0;
    // int sum = 0;
    // // 초기화를 안해주니까 쓰레기 값이 자꾸 출력이 된다.
    // // 5번 문제의 풀이를 보면서 느낀 건데,
    // // 입력받는 값은 초기화를 해줄 필요가 없지만 나머지는
    // // 해주지 않으면 쓰레기 값이 출력된다.
    // // 방금도 최초 sum값을 초기화 해주지 않아 쓰레기 값이 들어간채로
    // // 연산이 이루어짐.

    // printf("정수를 입력하면 값을 계속 더해줄게요.!\n");

    // while(1)
    // {
    //     printf("값을 입력해주세요!");
    //     scanf("%d", &answer);
    //     sum += answer;
    //     if(answer==0)
    //         break;
    // }
    // printf("총 합은 %d 입니다.\n", sum);

    /* 이렇게 해줘도 되지만 여기서는 아직 if에 대한 것을
    배우지 않은 상태이다.
    고로 이때는 while(answer != 0) 으로
    반복조건을 설정해주어도 된다.
    대신 이렇게 할거면 answer을 초기화 할때 1로 해주어야
    최초 반복조건 확인 시에 오류가 나지 않는다. */
    
    // 5번 문제
    /* int num1;
    int answer;
    int i = 0;
    int sum = 0;
    printf("입력하신 숫자의 평균을 계산해드리겠습니다.\n");
    printf("몇 개의 숫자를 입력하실건가요?");
    scanf("%d", &num1);

    while(i<num1)
    {
        printf("평균을 낼 %d번째 숫자를 입력해주세요!", i+1);
        scanf("%d", &answer);
        sum += answer;
        i++;
    }

    printf("입력하신 %d개의 수의 평균은 %f입니다.\n", num1,(double)sum/num1); */
    // 처음에 '~수의 평균은 %d입니다.'라고 했었는데,
    // 문제에서 소수점 아래수도 구하라고 되어있음.
    // 이렇게 되면 %f를 해주어야 하는데,
    // 그러기 위해서는 뒤에 형변환을 해주어야 함.
    // 안해주면 오류가 난다.


    // p157 연습문제

    /* int num;
    int sum = 0;
    printf("5개의 정수를 받아서 합을 구해줄게요!\n");
    
    int i = 0;
    while(i<5)
    {

        printf("1이상의 정수를 입력해주세요!\n");
        scanf("%d", &num);
        sum += num;
        i++;
        while(num < 1)
        {
            printf("1이상의 정수를 입력해야 합니다. 다시 입력해주세요!\n");
            i--;
            break;
            // continue를 입력하면 2번째 while문에서 무한반복된다.
        }
    }

    printf("총 합은 %d입니다!\n", sum); */

    /* break를 안쓰고 하기 위해서는,
    두번째 while문에서 반복조건을
    num<1 이라고 해서 1 이상의 수를 입력하면 바로 탈출될 수 있게
    하는 방법이 있다. */


    // 2번 문제
    /* int i = 0;

    while(i<5)
    {
        int j = 0;
        while(j<i)
        {
            printf("◎");
            j++;
        }
        printf("*\n");
        i++;
    } */
    // 휴, 됐다.


    // do while 파트
    // p161 연습문제

    // 2번 문제
    /* int i = 0;
    int sum = 0;

    do {
        sum += i;
        i=i+2;
    } while(i<=100);
    printf("총 합은 %d 입니다.\n", sum); */
    // 완료

    // 3번 문제
    /* int i = 2;
    int j = 0;

    do {
        j=1;
        while(j<10)
        {
            printf("%d 곱하기 %d는 %d 입니다.\n", i, j, i*j);
            j++;
        }
        i++;
    } while(i<10); */

    /* 내가 한 방법은 do while안에 whilw문을 반복시킨 것인데,
    풀이를 보면 그냥 do while안에 do while을 반복시켜놓았다.
    아래에 나도 그런 방식으로 해보도록 하겠다. */

    /* int i = 2;
    int j = 0;

    do {
        j=1;

        do {
            printf("%d * %d = %d\n", i, j, i*j);
            j++;
        } while(j<10);
        printf("\n");
        i++;
    } while(i<10); */

    // 완료!
    
    // p189에 있는 if else 연습문제

    // 1번 문제

    /* int i = 1;
    int j = 7;
    int k = 9;

    if(i<100)
    {
        while(i<100)
        {

        }
    } */

    // 이 문제는 머리에 생각이 안나서 답안지를 참조함.

    /* int i = 0;
    for(;i<100;i++)
    {
        if(i%7==0 || i%9==0)
        {
            printf("7이나 9의 배수 %d\n", i);
        }
    } */

    // 완료

    // 2번 문제

    /* int num1;
    int num2;

    printf("서로 다른 두 정수를 입력 받아서 큰 수에서 작은 수의 차를 구해드릴게요!\n");
    printf("서로 다른 두 정수를 입력해주세요.");
    scanf("%d %d", &num1, &num2);

    if(num1>num2)
    {
        printf("두 수의 차는 %d 입니다.\n", num1-num2);
    }
    else
    {
        printf("두 수의 차는 %d 입니다.\n", num2-num1);
    }  */

    // 완성!
    // 이 문제는 조건 연산자로도 해결할 수 있다. p187을 참고하자!


    // 3번 문제
    /* int kor;
    int eng;
    int math;
    int avg;

    printf("국영수 점수를 각각 입력받아서 평균을 내고 등급을 매겨드릴게요!\n");
    printf("국영수 점수를 입력해주세요!");
    scanf("%d %d %d", &kor, &eng, &math);
    avg = (kor+eng+math)/3;

    if(avg>=90)
    {
        printf("A등급 입니다.\n");
    }
    else if(avg>=80)
    {
        printf("B등급 입니다.\n");
    }
    else if(avg>=70)
    {
        printf("C등급 입니다.\n");
    }
    else if(avg>=50)
    {
        printf("D등급 입니다.\n");
    }
    else
    {
        printf("F ㅅㄱ\n");
    } */
    // 완성!


    //
    

    return 0;
}

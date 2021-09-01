//
//  struct.cpp
//  nadocoding
//
//  Created by 안동규 on 2021/07/16.
//

#include <stdio.h>

struct GameInfo {
    char *name;
    int year;
    int price;
    char *company;
    
    struct GameInfo *friendGame;  // 연관업체 게임
    // 마찬가지로 struct를 쓰고 구조체명을 쓰고 변수이름을 쓴다.
};
// 구조체 마지막 중괄호 뒤에 ; 붙네! 알아두기!

typedef struct GameInformation {
    char *name;
    int year;
    int price;
    char *company;
    
    struct GameInfo *friendGame;
} GAME_INFO;

int main_struct(void)
{
    // [게임을 출시!]
    // 이름 : 나도 게임
    // 발매년도 : 2017년
    // 가격 : 50원
    // 제작사 : 나도회사
    
    // 이 정보를 입력하려면 아래와 같이 하면 됨
//    char *name = "나도게임";
//    int year = 2017;
//    int price = 50;
//    char *company = "나도회사";
    
    // 또 다른 게임이 출시되었다!
    // [또 다른 게임을 출시!]
    // 이름 : 너도 게임
    // 발매년도 : 2017년
    // 가격 : 100원
    // 제작사 : 너도회사
//    char *name2 = "나도게임";
//    int year2 = 2017;
//    int price2 = 50;
//    char *company2 = "나도회사";
    
    // 비슷한 정보를 하나로 관리가 되면 좋겠는데
    // 이렇게 따로 정의를 해놓으면 불편하다.
    // 이럴때 필요한 것이 구조체이다.
    // 구조체는 메인 함수 위에 struct 이름 으로 정의하고
    // 그 밑에는 구조체 멤버들을 각각 정의해주면 된다.
//     struct GameInfo {
//         char *name;
//         int year;
//         int price;
//         char *company;
//     };
    // 마지막에 중괄호 끝부분 ; 항상 붙임!
    
    // 구조체 사용
    // 이때까지 변수를 선언할 때는
    // 자료형 변수명 으로 썼었는데
    // 여기서는 struct GameInfo까지가 자료형이고
    // 그 뒤에가 변수명이다.
    // 그래서 값을 집어넣을때는
    // gameInfo1.company = "나도게임" 이렇게 하면 된다.
    struct GameInfo gameInfo1;
    // gameInfo1은 구조체 변수이름이다.
    // 즉 gameinfo라는 구조체의 gameinfo1이 되는 것이다.
    // 정확히는 struct는 사용자 지정 형식이라서 그 형식의
    // 이름이 GameInfo라는 것이다.
    // 구조체 변수를 통해서 각각의 멤버들에게 값을 지정해준다.
    gameInfo1.name = "나도게임";
    gameInfo1.year = 2017;
    gameInfo1.price = 50;
    gameInfo1.company = "나도회사";
    
    // 구조체 출력
    // 구조체에 입력한 값을 출력하기 위해서는 다음과 같이 하면 된다.
//     printf("==게임 출시 정보==\n\n");
//     printf(" 게임명 : %s\n", gameInfo1.name);
//     printf(" 발매년도 : %d\n", gameInfo1.year);
//     printf(" 가격 : %d\n", gameInfo1.price);
//     printf(" 제작사 : %s\n\n", gameInfo1.company);
    
    // 지금까지는 구조체를 선언하고 각각에 다가 하나씩 집어넣어 주었는데
    // 구조체를 배열처럼 초기화를 해보겠다.
    // 즉, 선언과 동시에 초기화를 해주는 것이다.
     struct GameInfo gameInfo2 = {"너도게임", 2017, 100, "너도회사"};
    // 출력은 동일하다.
//     printf("==또 다른 게임 출시 정보==\n\n");
//     printf(" 게임명 : %s\n", gameInfo2.name);
//     printf(" 발매년도 : %d\n", gameInfo2.year);
//     printf(" 가격 : %d\n", gameInfo2.price);
//     printf(" 제작사 : %s\n\n", gameInfo2.company);
    
    
    // 구조체는 생김새가 독특할 뿐이지 실제로는 일반변수랑 거의 흡사함
    // 구조체 배열을 만들고 싶으면
    // 중괄호의 전개에 주의하기
//    struct GameInfo gameArray[2] = {
//        {"나도게임", 2017, 50, "나도회사"},
//        {"너도게임", 2017, 100, "너도회사"}
//    };
//    printf("게임명 : %s\n", gameArray[0].name);
//    printf("출시년도 : %d\n", gameArray[0].year);
//    printf("가격 : %d\n", gameArray[0].price);
//    printf("회사명 : %s\n", gameArray[0].name);
//
//    printf("게임명 : %s\n", gameArray[1].name);
//    printf("출시년도 : %d\n", gameArray[1].year);
//    printf("가격 : %d\n", gameArray[1].price);
//    printf("회사명 : %s\n", gameArray[1].name);
    
    
    
    
    // 이까지 정리를 스스로 하자면
    // 구조체를 사용하기 위해서는 main함수 위에서
    // 정의를 해주고, 본문에서 써주어야 한다.
    // 정의할 때는 struct 구조체명
    // 그 밑에 구조체 멤버들을 정의해주면 된다.
    //struct GameInfo {
    //    char *name;
    //     int year;
    //     int price;
    //     char *company;
    // };
    // 정의할때 중괄호 끝나면 세미콜론 필수!
    // 구조체 변수라는 것도 있음
    // main함수 안에
    // struct GameInfo g1;
    // 라고 해주면 구조체 변수를 선언!
    // 이렇게 하면 뒤에서 g1.name처럼 쓸 수 있음

    // 일반적으로 쓰려면,
    // struct GameInfo gameInfo1;
    // gameInfo1.name = "나도게임";
    // gameInfo1.year = 2017;
    // gameInfo1.price = 50;
    // gameInfo1.company = "나도회사";
    // 이렇게 하면 되고,
    
    // 배열처럼, 정확히는 선언과 동시에 초기화를 해서 이용하고 싶으면,
    // struct GameInfo gameInfo2 = {"너도게임", 2017, 100, "너도회사"};
    // printf("==또 다른 게임 출시 정보==\n\n");
    // printf(" 게임명 : %s\n", gameInfo2.name);
    // printf(" 발매년도 : %d\n", gameInfo2.year);
    // printf(" 가격 : %d\n", gameInfo2.price);
    // printf(" 제작사 : %s\n\n", gameInfo2.company);
    // 이렇게 하면 된다.
    
    // 구조체 배열을 만들고 싶으면
    // struct GameInfo gmaeArray[2] = {
    //     {"나도게임", 2017, 50, "나도회사"},
    //     {"너도게임", 2017, 100, "너도회사"}
    // };
    // printf("게임명 : %s\n", gameArray[0].name);
    // 이렇게 하면 된다.
    
    
    
    // 막간 보충수업
    // (해당 내용은 열혈 C프로그래밍에도 굉장히 잘 설명되어 있으니 참고할 것)
    // C언어에서는 문자 자료형인 char은 있는데
    // 문자'열'을 저장하는 자료형은 없음
//    char s1 = "hello";
//    printf("%s\n",s1);
    // 이렇게 하면 오류가 뜬다.
    // 아하, 그래서 문자열을 입력하기 전에는
    // char s1[256] 처럼 배열을 지정해준것이구나!
    // 이런 방법 말고도 방법이 있는데 바로 '포인터'를 사용하는 것이다.
//    char c1 = 'a';  // 변수 안에 'a'가 저장
//    char *s1 = "hello";  // 메모리에 저장되어 있음(읽기 전용)
//    printf("%s\n", c1);
//    printf("%s\n", s1);
    // 문자열에서 포인터를 쓰는 부분은 일반적인 상황과는 달라보임
    // 문자열이 저장된 메모리 '주소'를 출력하고 싶으면 서식으로 %p를
    // 사용할 수 있다.
    // 일반적인 상황에서는 *p = 10이라고 하면
    // p는 주소만 나오고 *p(역참조)를 해야 거기 있는 값을 출력해줌.
    // 문자는 c1에 그대로 저장이 되지만,
    // 문자열 리터럴은 변수 s1에 저장되지 않고
    // 문자열이 있는 곳의 메모리 주소만 저장함.
    // 그래서 주소 자체를 불러와야해서
    // printf("%s\n",s1)이라고 써준다.
    // 문자열을 포인터로 사용할 때 기억을 해야 하는 것은
    // 큰따옴표로 묶어야 한다는 것과
    // 출력 시에 서식 지정자는 %s로 한다는 것임.
    // 중요한 점은 C언어의 마지막에
    // 항상 널 문자(NULL)가 붙는다는 것 입니다.
    // printf는 문자열을 계속 출력하다가 0에서 출력을 끝냄.
    
    
    
    
    // 구조체 포인터
    struct GameInfo *gamePtr;  // 즉, 구조체 변수에 포인터를 설정
    gamePtr = &gameInfo1;
    // 미션맨과 똑같음
    // gamePtr이라는 포인터를
    // 변수로 지정해둠.
    // 그리고 그 포인터에 gameinfo1의 주소를 저장.
    // *역참조 문자를 이용해서 각 멤버별 값을 출력해준다.
    
//    printf("\n\n--미션맨의 게임 출시 정보--\n");
//    printf(" 게임명 : %s\n", (*gamePtr).name);
//    printf(" 발매년도 : %d\n", (*gamePtr).year);
//    printf(" 가격 : %d\n", (*gamePtr).price);
//    printf(" 제작사 : %s\n\n", (*gamePtr).company);
    
    // int형 변수를 포인터로 가르켰을 때
    // 그곳에 있는 값을 가지고 오기 위해서 역참조 문자(*)를 이용
    // 여기서도 마찬가지인데
    // (*포인터명).멤버명 으로 해주면 된다.
    
    // 하지만 이런 방법도 조금은 번거로운데...
    // 다른 방식으로는 -> 이렇게 기술해주는 방법도 있다.
    printf("\n\n--미션맨의 게임 출시 정보--\n");
    printf(" 게임명 : %s\n", gamePtr->name);
    printf(" 발매년도 : %d\n", gamePtr->year);
    printf(" 가격 : %d\n", gamePtr->price);
    printf(" 제작사 : %s\n\n", gamePtr->company);
    // 결국 큰 틀에서는 같은 방법임.
    // 변수를 이용해서 각 멤버에 접근을 하는 것.
    // 그 방법이 포인터라서, 그리고 .과 ->를 이용하는 방법이라서
    // 조금 어렵게 느껴질 뿐이다.
    // ->는 포인터에서만 사용을 하는듯
    
    

    
    // 연관업체 게임소개!
    // 구조체 안에서 똑같은 구조체를 변수로 가질 수 있다.
    // 본래의 구조체 안에 그 구조체를 다시 한 번 선언을 한다.
    // main함수 위의 선언부를 보면
    // struct GameInfo *friendGame;
    // 라고 선언을 해두었음
    // 구조체 안에 동명의 구조체를 다시금 정의를 하고
    // 거기에 friendGame이라는 포인터를 구조체 변수로 설정해둠.
    // 이미 정의해둔 구조체 변수인 gameInfo1을 이용해서
    // 이전 포인터 수업에서 했던 것 처럼 gameInfo2의 주소를 받아보자.
    // 앞에서도 int *스파이 = 미션맨 이라고 포인터 변수를 정의해서
    // 왜 앞에서 사용한 걸 자꾸 가지고 오지..
    // 그냥 그러려니 하자...
    // 즉, 구조체 안의 구조체는
    // 이미 선언된 구조체 변수.구조체 안의 구조체의 포인터 변수->멤버명
    // 이런 식으로 구조체 멤버에게 접근한다.
    // 원래 구조체 변수로 선언된 포인터는
    // 포인터_변수->맴버명
    // 이런 식으로 구조체 멤버에게 접근을 한다.
    // 즉 .하나와 상위 구조체 변수명이 더 붙는 셈이다.
    // 이걸 왜 활용하는지는 머리로 이해할 수가 없다.
    // 그냥 포인터 변수 선언해서 쓰면 되는거 아닌가..?
    // 굳이 구조체 안의 구조체로 써야 하나? 이게 더 복잡해보이는데?
    // 장점이 있겠지? 자료구조 쪽으로 공부를 하면 알 수 있을거 같기도?
    gameInfo1.friendGame = &gameInfo2;
    printf("\n\n--연관 업체의 게임 출시 정보--\n");
    printf(" 게임명 : %s\n", gameInfo1.friendGame->name);
    printf(" 발매년도 : %d\n", gameInfo1.friendGame->year);
    printf(" 가격 : %d\n", gameInfo1.friendGame->price);
    printf(" 제작사 : %s\n\n", gameInfo1.friendGame->company);

    // typedef
    // 자료형에 이름을 지정
    int i = 1;  // 일반적인 자료형과 변수의 선언 방식
    typedef int 정수;
    typedef float 실수;
    // 이처럼 typedef를 이용해서
    // int를 정수라고 이름을 지정해줄 수 있다.
    정수 정수변수 = 3;
    // 오류가 안뜬다.
    // 이는 무엇을 말하나? 정수가 int를 대신한다는 것이다.
    // 즉, int 정수변수 = 3; 과 같다.
    실수 실수변수 = 3.23f;  // float f = 3.23f와 같다.
    printf("정수변수 : %d, 실수변수 : %f\n", 정수변수, 실수변수);
    
    
    // 막간 공부
    // float는, float num1 = 0.1f 처럼 숫자 뒤에 f를 붙임
    // double은 아무것도 붙이지 않지만, long double은 l을 붙음
    // double의 서식문자는, 출력 시에는 %f를 입력 시에는 %lf를 사용
    // long double의 서식문자는 %Lf이다.
    
    
    // 구조체에도 typedef를 그대로 적용시킬 수 있다.
    typedef struct GameInfo 게임정보;
    // 해석을 하면, struct GameInfo에 게임정보라는 이름을 설정해줘
    // 구조체는 각각의 정의를 매번 하는 수고로움을 줄여준다면,
    // typedef는 그 구조체명과 변수명을 적는 수고로움마저 줄여준다.
    게임정보 game1;
    game1.name = "한글 게임";
    game1.year = 2015;
    
    // 다른 방법으로는 선언부에서 선언을 하고 들어갈 수도 있다.
//    typedef struct GameInformation {
//        char *name;
//        int year;
//        int price;
//        char *company;
//
//        struct GameInfo *friendGame;
//    } GAME_INFO;
    // 선언부를 보면 구조체명 뒤에 세미콜론을 찍기 전에 대체이름을 적어주면,
    // 이런 식으로 typedef를 이용할 수 있다.
    // 구조체 GameInformation을 GAME_INFO로 치환해서 쓰겠다~
    // 라고 하는 것이다.
    // 참고로 구조체명을 따로 설정안해주어도 된다.
    GAME_INFO game2;
    game2.name = "한글 게임2";
    game2.year = 2014;
    
    
    // 한 가지 주의해야 할 점은
    // 원래대로도 이용은 가능하다는 점!
    // 물론 구조체 이름을 지운 상태에서는 이렇게 사용은 할 수 없다.
    struct GameInformation game3;
    game3.name = "한글 게임3";
    
    
    
    
    return 0;
}

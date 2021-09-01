//
//  codepractice.cpp
//  nadocoding
//
//  Created by 안동규 on 2021/07/08.
//

#include <stdio.h>

int main_practice_major_book(void)
{
    
    // 열혈 C프로그래밍 p118쪽 연습문제
    
    // 문제1
//    int x1, y1, x2, y2;
//    while (1) {
//        printf("\n입력한 좌표들이 만드는 직사각형의 넓이를 구해드립니다.\n\n");
//
//        printf("좌 상단의 좌표를 입력하세요!(입력 시 엔터로 값 구분할 것)\n");
//        scanf("%d %d\n", &x1, &y1);
//        printf("우 하단의 좌표를 입력하세요!(입력 시 엔터로 값 구분할 것)\n");
//        scanf("%d %d\n", &x2, &y2);
//        if (x1>=x2 || y1<=y2) {
//            printf("\n\n>>좌 상단의 x좌표 값이 우 하단의 값보다 크거나, 좌 상단 y좌표 값이 우 하단 값보다 작습니다.\n");
//            printf("좌 상단: %d, %d\n", x1, y1);
//            printf("우 하단: %d, %d\n", x2, y2);
//            printf("다시 입력하시려면 아무키나 눌러주세요\n");
//            getchar();
//            continue;
//        }
//        else{
//            printf("두 점이 이루는 직사각형의 넓이는 %d 입니다!\n", (x2-x1)*(y1-y2));
//            printf("좌 상단: %d, %d\n", x1, y1);
//            printf("우 하단: %d, %d\n", x2, y2);
//            break;
//        }
//    }
    // 문제1에서는 내가 생각한대로 입력이 잘 안됨. 이전부터 xcode를 사용했을때
    // 혹은 맥 환경에서의 문제 같은데 입력하면 엔터를 한 번 더 입력해야 한다거나 그런 문제들이 식별됨.
    // 이 문제에 대해서는 계속 관심을 가지고 해결하려고 해보자.
    
    
    // 문제2
//    char i;
//    printf("문자를 입력해주세요!");
//    scanf("%c\n", &i);
//    printf("문자 값: %c, 정수 값: %d\n", i, i);

    printf("%d 나누기 %d의 나머지는 %d이다.\n", 5, 4, 5%4);
    // 잉? 왜 안되지?
     
    
    
    return 0;
}

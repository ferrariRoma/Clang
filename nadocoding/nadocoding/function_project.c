//
//  function_project.cpp
//  nadocoding
//
//  Created by 안동규 on 2021/05/19.
//

#include <time.h>
#include <stdlib.h>
#include <stdio.h>

// 선언
int getrandomnumber(int level);
void showquestion(int level, int num1, int num2);
void success();
void fail();


int main_functionproject(void)
{
    // 문이 5개 있고, 점점 어려운 수식 퀴즈가 출제됩니다(랜덤)
    // 문제를 맞히면 통과, 틀리면 실패!

    srand((unsigned int) time(NULL));
    int count = 0;
    for (int i=1; i<=5; i++)
    {

        int num1 = getrandomnumber(i);
        int num2 = getrandomnumber(i);
        // printf("%d *. %d의 값은 얼마입니까?\n", num1, num2);
        showquestion(i, num1, num2);

        int answer = -1;
        scanf("%d", &answer);

        if (answer == -1)
        {
            printf("프로그램을 종료합니다.\n");
            // break;
            exit(0);  //exit를 쓰면 그냥 탈출이 아니라 프로그램을 종료시킨다.
        }

        else if (answer == num1 * num2)
        {
            success();
            count++;
        }

        else
        {
            fail();
        }
    }
    printf("\n\n당신은 5개의 비밀번호 중 %d 개를 맞혔습니다.\n\n", count);
    return 0;
}



// 정의
int getrandomnumber(int level)
{
    return rand() % (level * 7) + 1;
}

void showquestion(int level, int num1, int num2)
{
    printf("\n\n\n########### %d 번째 비밀번호 #######\n", level);
    printf("\n\t%d * %d 는?\n\n", num1, num2);
    printf("##################################\n");
    printf("비밀번호를 입력하세요\n (종료: -1)");
}

void success()
{
    printf("성공하셨습니다!\n");
}

void fail()
{
    printf("실패하셨습니다!\n");
}

// 열혈 445p 문제풀기

#include <stdio.h>
#include <string.h>

#define min 200

int convCharToInt(char c)
{
    static int num = '1' - 1; // 48
    return c - num;
}
void clearLineBuffer()
{
    while (getchar() != '\n')
        ;
}


int main()
{
    /* 
    1번.. 모르겠는데?
    <풀이>
    모든 숫자 n과 'n'의 차는 동일하다.
    이를 이용해서 '1'~'9'의 범위 안에 오는 수들은
    convCharToInt함수를 이용해 차를 빼줘서 1~9로 변환을 해주고 더해준다.
    */
    /* char str[50];
    printf("문자열을 입력해주세요 : ");
    fgets(str, sizeof(str), stdin);
    int len = strlen(str);
    int sum = 0;

    for (int i = 0; i < len; i++)
    {
        if ('1' <= str[i] && '9' >= str[i])
        {
            sum += convCharToInt(str[i]);
        }
    }
    printf("%d\n", sum); */

    // 2번
    /* char str1[20];
    char str2[20];
    char str3[40];
    printf("str1 문자열을 입력하세요 : ");
    fgets(str1, 20, stdin);
    str1[strlen(str1) - 1] = 0;

    printf("str2 문자열을 입력하세요 : ");
    fgets(str2, 20, stdin);
    str2[strlen(str2) - 1] = 0;

    strcpy(str3, str1);
    strcat(str3, str2);

    printf("%s", str3); */

    // 3번


    return 0;
}

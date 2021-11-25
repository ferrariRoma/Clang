#define big 10000
#include <stdio.h>

// 열혈 C프로그래밍에 있는 260p 예제

int main_arrayExample()
{
    // 문제 1번
    /* int arr[5];
    int max, min, sum, i;

    for(i=0; i<5; i++)
    {
        printf("입력 : ");
        scanf("%d", &arr[i]);
    }

    max=min=sum=arr[0];
    for(i=1; i<5; i++)
    {
        sum += arr[i];
        if(max < arr[i])
        max = arr[i];
        if(min > arr[i])
        min = arr[i];
    }

    printf("최댓값 : %d \n", max);
    printf("최솟값 : %d \n", min);
    printf("총합계 : %d \n", sum); */


   /*  // 문제 2번
    char arr[] = "twitch";
    printf("입력한 글은 %s\n", arr);

    for(int i=sizeof(arr)-1; i>=0; i--)
    {
        printf("%c", arr[i]);
    } */
    
    // p268 문제를 풀어봅시다.

    // 1번 문제
    /* char sth[big];
    printf("단어 하나를 입력해주세요!");
    scanf("%s", sth);
    printf("입력한 단어는 %s 입니다.\n", sth);

    int i=0;
    do{
        i++;
    }
     while(sth[i] != '\0');
    
    printf("단어의 길이는 %d 입니다.\n",i); */



    // 2번 문제
    /* char sth[big];
    int i = 0;

    printf("영단어를 입력해주세요!");
    scanf("%s", sth);

    do{
        i++;
    } while(sth[i] != '\0');

    printf("입력하신 단어는 %s 입니다.\n", sth);
    printf("알파벳이 총 %d개로 이루어진 단어 입니다.\n", i);
    printf("\n\n거꾸로 출력을 해보겠어요!\n");

    for(int j=i-1; j>=0; j--)
    {
        printf("%c", sth[j]);
    } */

    // 3번 문제
    /* char arr[big];
    int max = arr[0];

    printf("단어를 하나 입력해주시면 아스키 코드가 가장 큰 알파벳을 돌려드릴게요!");
    scanf("%s", arr);
    printf("입력하신 단어는 이와 같습니다. %s", arr);
    
    int i=0;
    do{
        i++;
    } while(arr[i]!='\0');
    printf("\n%d 자리 글자입니다.\n", i);


    for(int j=0; j<i; j++)
    {
        if(max < arr[j])
        {
            max = arr[j];
        }
    }


    printf("아스키 코드가 가장 큰 알파벳은 %d입니다.\n", max);
    printf("알파벳은 %c 입니다.\n", max); */




    // 코딩도장 array


    return 0;
}

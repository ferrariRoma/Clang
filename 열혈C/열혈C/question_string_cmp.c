////
////  test.c
////  열혈C
////
////  Created by 안동규 on 2021/10/10.
////

// 지난 내용 복습하는 차원에서 처음부터 만들어보면서 익히자!
#define max 20

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int name_cmp(char *name1, char *name2);
int checkout_space(char *space);
int age_cmp(char *age1, char *age2);

int main_string_cmp(void) {
    char str1[max];
    char str2[max];
    int i=0,j=0;
   
//    printf("test1 : ");
//    fgets(str1, max, stdin);
//    str1[strlen(str1)-1] = 0;
//    printf("test2 : ");
//    fgets(str2, max, stdin);
//    str2[strlen(str2)-1] = 0;
//
//    i = checkout_space(str1);
//    j = checkout_space(str2);
//    printf("\n\ni : %d, j : %d\n",i,j);
    printf("사람1의 이름과 나이를 입력해주세요!\n(이름과 나이 사이에는 띄워쓰기를 해주세요!) : ");
    fgets(str1, max, stdin);
    str1[strlen(str1)-1] = 0;
    printf("사람2의 이름과 나이를 입력해주세요!\n(이름과 나이 사이에는 띄워쓰기를 해주세요!) : ");
    fgets(str2, max, stdin);
    str2[strlen(str2)-1] = 0;

    i = name_cmp(str1, str2);
    if(i==0) {
        if(age_cmp(str1, str2)==0) {
            puts("\n\n이름과 나이가 같습니다!\n\n");
        } else {
            puts("\n\n이름이 같지만 나이는 다릅니다.\n\n");
        }
    } else {
        if(age_cmp(str1, str2)==0) {
            puts("\n\n이름은 다르지만 나이가 같습니다!\n\n");
        } else {
            puts("\n\n이름과 나이가 모두 다릅니다.\n\n");
        }
    }
    
    
    return 0;
}

int name_cmp(char *name1, char *name2)
{
    int i, j, k;
    i = checkout_space(name1);
    j = checkout_space(name2);
    if(i==j) {
        k = strncmp(name1, name2, i);
        if(k==0) {
            printf("이름이 같습니다!");
            return 0;
        } else {
            printf("이름이 달라요!");
            return 1;
        }
        
    } else {
        puts("이름부터가 달라요!");
        return 1;
    }
}

int checkout_space(char *space)
{
//    띄어쓰기가 있으면 그 수를 반환해주고 아니면 -1을 반환해!
    int i;
    for(i=0;i<strlen(space);i++){
        if(space[i]==' '){
            return i;
        }
    }
    return -1;
}

int age_cmp(char *age1, char *age2)
{
    int i, j;
    int ch1, ch2;
    i = checkout_space(age1);
    j = checkout_space(age2);
    ch1 = atoi(&age1[i+1]);
    ch2 = atoi(&age2[j+1]);
    if(ch1==ch2) {
        return 0;
    } else {
        return 1;
    }
}

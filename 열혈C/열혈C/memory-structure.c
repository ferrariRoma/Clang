//
//  memory-structure.c
//  열혈C
//
//  Created by 안동규 on 2021/11/29.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct word{
    struct word *prev;
    struct word *next;
    char *answer;
}Word;

int WhoIsFirst(int age1, int age2, int (*cmp)(int n1, int n2))
{
    return cmp(age1,age2);
}

int OlderFirst(int age1, int age2)
{
    if(age1>age2)
        return age1;
    else if(age1<age2)
        return age2;
    else
        return 0;
}

int YoungerFirst(int age1, int age2)
{
    if(age1<age2)
        return age1;
    else if(age1>age2)
        return age2;
    else
        return 0;
}

void SoSimpleFunc(void)
{
    printf("I'm so simple\n");
}

char *ReadUserName(void)
{
    char *name = (char*)malloc(sizeof(char)*30);
    printf("What's your name?: ");
    gets(name);
    return name;
}



int main_memory_structure(void)
{
    // 551p question 25-2-2 review
    int i=0,maxlen=5,temp;
    int *number = (int*)malloc(sizeof(int)*maxlen);
    while(1)
    {
        printf("%d번째 정수: ",i+1);
        scanf("%d",&number[i]);
        if(number[i]==-1)
            break;
        if(i+1==maxlen){
            maxlen+=3;
            number = (int*)realloc(number, sizeof(int)*maxlen);
        }
        i++;
    }
    temp=i;
    printf("\n");
    for(i=0;i<temp;i++){
        printf("%d ",number[i]);
    }
    printf("\n");
    free(number);
    // 답안지에는 없었던 temp를 추가해서 마지막 i 값을 저장
    // 출력 반복문에서 i<temp를 하면서 마지막 -1은 출력 안됨
    
    // 551p question 25-2-1 second_review
//    int maxlen, len;
//    printf("총 몇 자를 입력하시겠습니까?: ");
//    scanf("%d",&maxlen);
//    getchar();
//    char *words = (char*)malloc(sizeof(char)*(maxlen+1));
//    printf("문자열을 입력해주세요: ");
//    fgets(words, maxlen+1, stdin);
//    len = strlen(words);
//    words[len-1] = 0;  // \n제거
//    for(int i=len;i>0;i--)
//    {
//        if(words[i]==' '){
//            printf("%s ",&words[i+1]);
//            words[i] = 0;
//        }
//    }
//    printf("%s\n",&words[0]);
//    free(words);
    
    // 551p question 25-2-1 review
//    int maxlen, len, i;
//    printf("총 몇 자를 입력하시겠습니까?: ");
//    scanf("%d",&maxlen);
//    getchar();
//    char *words = (char*)malloc(sizeof(char)*(maxlen+1));  // null문자 자리도 확보
//    printf("문자열을 입력해주세요: ");
//    fgets(words, maxlen+1, stdin);
//    len = strlen(words);
//    words[len-1] = 0;  // \n 삭제
//    for(i=len;i>0;i--)
//    {
//        if(words[i]==' '){
//            printf("%s ", &words[i+1]);  // 빈 칸은 만나면 출력
//            words[i] = 0;
//        }
//    }
//    printf("%s\n",&words[0]);
//    free(words);
    
    // 551p question 25-2-2
//    int i=0, len=5;
//    int *answer = (int*)malloc(sizeof(int)*len);
//    if(answer==NULL){
//        puts("메모리 할당 실패!");
//    }
//    while(1)
//    {
//        printf("%d번째 숫자: ",i+1);
//        scanf("%d",&answer[i]);
//        if(answer[i]==-1)
//            break;
//        if(i==len-1){
//            len+=3;
//            answer = (int*)realloc(answer, sizeof(int)*len);
//            if(answer==NULL){
//                puts("메모리 할당 실패!");
//            }
//        }
//        i++;
//    }
//    printf("\n");
//    for(i=0;i<len;i++)
//        printf("%d ",answer[i]);
//    free(answer);
    
    // 551p question 25-2-1 copy
//    int maxlen, len, i;
//    char *word;
//    printf("문자열의 최대 길이 입력: ");
//    scanf("%d", &maxlen);
//    getchar();
//    word = (char*)malloc(sizeof(char)*(maxlen+1));
//    printf("문자열 입력: ");
//    fgets(word, maxlen+1, stdin);
//    word[strlen(word)-1]=0;  // \n제거
//    len = strlen(word);
//    for(i=len;i>0;i--)
//    {
//        if(word[i]==' '){
//            printf("%s ",&word[i+1]);
//            word[i] = 0;  // 빈 공간은 NULL문자로
//        }
//    }
//    printf("%s\n",&word[0]);  // 첫 단어 출력
//    free(word);
    
    // 551p question 25-2-1
//    int maxlen, len, i;
//    char *str;
//    printf("문자열의 최대 길이 입력: ");
//    scanf("%d", &maxlen);
//    getchar();
//    str = (char*)malloc(sizeof(char)*(maxlen+1));  // 메모리 할당
//    printf("문자열 입력: ");
//    fgets(str, maxlen+1, stdin);
//    str[strlen(str)-1]=0;  // \n문자의 삭제!
//    len = strlen(str);
//    for(i=len;i>0;i--){
//        if(str[i]==' '){
//            printf("%s ", &str[i+1]);
//            str[i]=0;
//        }
//    }
//    printf("%s\n",&str[0]);
//    free(str);
    
    // 548p example
//    char *name1;
//    char *name2;
//    name1 = ReadUserName();
//    printf("name1: %s \n",name1);
//    name2 = ReadUserName();
//    printf("name2: %s \n",name2);
//    free(name1);
//    free(name2);
    
    // 546p example
//    int *ptr1 = (int*)malloc(sizeof(int));
//    int *ptr2 = (int*)malloc(sizeof(int)*7);
//    int i;
//    *ptr1 = 20;
//    // (int *) 붙여주면서 형변환을 시켰기 때문에,
//    // 메모리에 대한 접근이 가능해짐.
//    for(i=0;i<7;i++)
//        ptr2[i]=i+1;
//    printf("%d \n", *ptr1);
//    for(i=0;i<7;i++)
//        printf("%d ", ptr2[i]);
//
//    free(ptr1);
//    free(ptr2);
    
    // 545p malloc..
    // malloc함수는 반환형이 void형 포인터,
    // 그래서 함수의 반환 값에 아무런 가공도 하지 않으면,
    // 할당된 메모리 공간에 접근이 불가능하다.
    
    // 397p example
//    int num = 20;
//    void *ptr;
//
//    ptr = &num;
//    printf("%p \n", ptr);
//    ptr = SoSimpleFunc;
//    printf("%p \n", ptr);
    //    // *ptr = 30; 이러면 오류남.
    //    // ptr++; 이래도 오류남
    // void는 아무거나 담을 수 있지만,
    // 어떤 수에 대한 연산도 하지 못한다.
    // 심지어 값의 변경이나 참조도 불가능 하다.
    
    // 395p example
//    int age1 = 20;
//    int age2 = 30;
//    int first;
//
//    printf("입장순서1 \n");
//    first = WhoIsFirst(age1, age2, OlderFirst);
//    printf("%d와 %d 중에서 %d세가 먼저 입장!\n\n",age1,age2,first);
//    first = WhoIsFirst(age1, age2, YoungerFirst);
//    printf("%d와 %d 중에서 %d세가 먼저 입장!\n\n",age1,age2,first);
    
    return 0;
}

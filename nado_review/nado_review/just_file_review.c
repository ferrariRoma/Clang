//
//  justreview.c
//  nado_review
//
//  Created by 안동규 on 2021/11/07.
//  파일프로젝트 핵심개념 복습하기

#include <stdio.h>
#include <string.h>

int main_just_file_review()
{
    char text[20];
    char writetext[20];
    printf("파일을 불러오는 중...\n\n");
    FILE *readfp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/diary.txt","r+t");
    FILE *writefp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/diary.txt","a+t");
    if(readfp == NULL || writefp == NULL){
        printf("\n\n파일을 읽어올 수 없습니다.\n\n");
        return 0;
    }
    
    while(fgets(text,sizeof(text),readfp)!=NULL){
        fputs(text, stdout);
    }
    
    printf("\n\n이어서 써보도록 할게요!\n\n");
    while(1)
    {
        scanf("%[^\n]",writetext);
        getchar();
        if(strcmp(writetext,"exit")==0){
            break;
        } else {
            fputs(writetext, writefp);
            fputs("\n",writefp);
        }
    }
    
   fclose(readfp);
   fclose(writefp);
    return 0;
}

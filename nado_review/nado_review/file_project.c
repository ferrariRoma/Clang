//
//  review_file.c
//  nado_review
//
//  Created by 안동규 on 2021/11/04.
//  file project review after finishing nomad challenge

#define max 1000

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int CheckPassword();

int main_file_project()
{
    FILE *wtfile = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/diary.txt","at");
    FILE *rtfile = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/diary.txt","rt");
    char inputChar[max];
    char outputChar[max];
    int i=0;
    int j=0;
    
    printf("\n비밀일기에 오신 것을 환영합니다!\n\n");
    while(i<5){
        printf("\n비밀번호를 입력해주세요!(%d/5) : ");
        if(CheckPassword()==0){
            printf("\n\n로그인 성공!\n\n");
            break;
        } else{
            if(i==5){
                printf("\n\n비밀번호가 5회 틀렸습니다. 프로그램을 종료합니다.\n\n");
                exit(0);
            }
            printf("\n\n비밀번호가 틀렸습니다. 다시 입력해주세요.\n\n");
        }
    }
    
    printf("\n\n파일을 불러오는 중...\n\n");
    if(rtfile==NULL || wtfile==NULL){
        printf("\n\n파일을 읽을 수 없습니다.\n\n");
        return -1;
    }
    
    printf("\n\n지난 일기 내용을 읽어옵니다.\n\n");
    while(fgets(inputChar, sizeof(inputChar), rtfile)!=NULL){
        fputs(inputChar, stdout);
    }
        
    printf("\n\n일기를 이어서 써보세요!\n종료할땐 exit를 입력해주세요\n\n");
    while(1){
        scanf("%[^\n]",outputChar);
        getchar();
        if(strcmp(outputChar,"exit")==0){
            break;
        }else{
            fputs(outputChar, wtfile);
            fputs("\n", wtfile);
        }
    }
        
    fclose(rtfile);
    fclose(wtfile);
    return 0;
}

int CheckPassword()
{
    char password[20];
    fgets(password,sizeof(password),stdin);
    password[strlen(password)-1]=0;
    int i = strcmp(password,"abcdic");
    return i;
}

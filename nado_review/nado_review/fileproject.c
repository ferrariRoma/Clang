// 나도 코딩 마지막 파일 프로젝트 복습의 복습의 복습

#define max 10000

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getPassword();
void getContent();

int main_wait()
{
    if(getPassword()==1){
        exit(0);
    }
    else{
        getContent();
    }
    return 0;
}

int getPassword()
{
    char answer[20];
    int i=0;
    // 생각해보면 한자한자씩 입력을 받는 것 자체가
    // 마스킹 처리를 해주기 위해서 한 것인데 getch의 부재로 그게 안되니까
    // 다른 방법을 통해서 입력을 받는 것이 더 낫다고 생각한다.
    while(i<5)
    {
        printf("비밀번호를 입력해주세요!(%d/5) : ", i);
        fgets(answer,sizeof(answer),stdin);
        answer[strlen(answer)-1]=0;
        // 마지막에 입력된 엔터를 널문자로 바꿈
        
        
        if(strcmp(answer,"leagueoflegend")==0){
            printf("인증이 완료되었습니다.\n");
            return 0;
        }
        else{
            printf("\n\n비밀번호가 틀렸습니다!\n");
            i++;
        }
    }
    printf("\n프로그램을 종료합니다.\n");
    return 1;
}

void getContent()
{
    char contents[max];
    char line[max];
    
    char address="/Users/andong-gyu/Documents/C language/nadocoding/nado_review/nado_review/review.txt";
    if(address!=NULL){
        // 그 주소에 해당 파일이 있으면 이 전 내용을 읽어오는게 먼저일 수 있도록
        FILE *file=fopen(&address,"rb");
        if(file==NULL){
            printf("\n\n파일을 찾을 수 없습니다!\n\n");
            return;
        }
        
        printf("\n\n파일을 정상적으로 열었습니다! 이전 내용을 가지고 올게요.\n\n");
        
        while(fgets(line, max, file)!=NULL){
            printf("%s", line);
        }
        
        printf("\n\n내용을 이어서 입력하세요!\n프로그램을 종료하기 위해서는 exit를 입력해주세요.\n\n");
        
        fclose(file);
    }
    
    // 아니라면 바로 새로운 폴더 and 앞에 쓴 내용을 보여주고서는 이어 쓸 수 있도록!
    FILE *getfile=fopen(&address,"a+b");
    if(getfile==NULL){
        printf("\n\n파일을 불러올 수 없습니다!\n\n");
        return;
    }
    
    printf("새로운 일기장을 만들었어요. 내용을 입력하세요!\n프로그램을 종료하기 위해서는 exit를 입력해주세요.\n\n");
    
    while(1)
    {
        scanf("%[^\n]",contents);
        getchar();
        // 한 줄 단위로 contents에 입력하라는 문구임
        if(strcmp(contents,"exit")==0){
            printf("\n\n프로그램을 종료하겠습니다.\n\n");
            break;
        }
        else{
            fputs(contents, getfile);
            // fputs를 해주어야지 입력버퍼에 있던 글들이 출력버퍼를 통해서
            // file로 간다. 이걸 안해주면 내용전달이 안됨.
            fputs("\n", getfile);
            // fputs의 특징 중 하나인데, 스스로 개행을 못한다.
            // 그래서 마지막에 항상 이렇게 개행을 따로 입력해주어야 한다.
        }
    }
    
    fclose(getfile);
}

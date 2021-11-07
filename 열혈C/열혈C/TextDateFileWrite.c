//
//  TextDateFileWrite.c
//  열혈C
//
//  Created by 안동규 on 2021/11/05.
//  열혈 C언어 515p 공부하기

#include <stdio.h>

int main()
{
    char readtxt[20];
    int ch;
    FILE *rtfp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/diary.txt","rt");
    FILE *wtfp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/copy.txt","wt");
    if(rtfp==NULL || wtfp==NULL){
        printf("\n\n파일을 읽을 수 없습니다.\n\n");
        return -1;
    }
    
    while((ch=fgetc(rtfp))!=EOF)
        fputc(ch, wtfp);
    
    if(feof(rtfp)!=0)
        puts("파일복사 완료!\n\n");
    else
        puts("파일복사 실패!\n\n");
    
    if(fclose(rtfp)!=0 || fclose(wtfp)!=0)
    {
        puts("스트림 제거시 실패\n\n");
        return 1;
    }
    return 0;
}

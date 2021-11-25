//
//  TextDateFileWrite.c
//  열혈C
//
//  Created by 안동규 on 2021/11/05.
//  열혈 C언어 515p 공부하기

#include <stdio.h>

int main_text_data_file_write()
{
    char readtxt[20];
    int ch;
    FILE *rtfp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/diary.txt","rt");
    FILE *wtfp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/copy.txt","wt");
    if(rtfp==NULL || wtfp==NULL){
        printf("\n\n파일을 읽을 수 없습니다.\n\n");
        return -1;
    }
    
    while((ch=fgetc(rtfp))!=EOF)  // end of file이 나올때까지 불러와서
        fputc(ch, wtfp);  // 새로운 파일에 붙여넣기
    
    if(feof(rtfp)!=0)  // 대신에 feof를 통해서 end of file이 오류로 인한 것인지 아닌지를 판단해준다! 정상 작동을 하면 0이 '아닌' 값을 반환해준다.
        puts("파일복사 완료!\n\n");
    else
        puts("파일복사 실패!\n\n");
    
    if(fclose(rtfp)!=0 || fclose(wtfp)!=0)  // 이건 다른 블로그에서 봤는데 fclose를 했을때 0이 반환되면 정상 종료, 아니면 스트림 제거 실패!
    {
        puts("스트림 제거시 실패\n\n");
        return 1;
    }
    return 0;
}


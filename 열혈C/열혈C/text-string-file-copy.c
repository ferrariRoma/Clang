//
//  text-string-file-copy.c
//  열혈C
//
//  Created by 안동규 on 2021/11/10.
//  520p 예제 실습(fread, fwrite)

#define max 10000

#include <stdio.h>

int main(void)
{
    FILE *src = fopen("/Users/andong-gyu/Music/Music/Media.localized/Unknown Artist/Unknown Album/TOKYO MACHINE & Guy Arthur - GET UP [NCS Release].mp3","rb");
    FILE *des = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/music.mp3","wb");
    char buf[max];
    int bf;
    
    if(src==NULL||des==NULL){
        puts("\n파일 열기 실패!\n\n");
        return -1;
    }
    
    while(1)
    {
        bf = fread((void*)buf,1,sizeof(buf),src);
        if(bf<sizeof(buf)){  // sizeof보다 작으면 에러거나 끝까지 읽었거나
            if(feof(src)!=0){  // 끝까서 읽어서 <인지 에러가 나서인지 확인하기
                fwrite((void*)buf, 1, bf, des);
                puts("복사 성공!\n\n");
                break;
            }
            else{
                puts("복사 실패!\n\n");
                break;
            }
        }
        fwrite((void*)buf, 1, bf, des);
    }
    
    if(fclose(src)!=0||fclose(des)!=0){
        puts("스트림 제거 실패!\n\n");
        return 1;
    }
    return 0;
}

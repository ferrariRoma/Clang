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
//        FILE *src = fopen("/Users/andong-gyu/Music/Music/Media.localized/Unknown Artist/Unknown Album/TOKYO MACHINE & Guy Arthur - GET UP [NCS Release].mp3","rb");
//        FILE *des = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/music.mp3","wb");
//        char buf[max];
//        int bf;
//
//        if(src==NULL||des==NULL){
//            puts("\n파일 열기 실패!\n\n");
//            return -1;
//        }
//
//        while(1)
//        {
//            bf = fread((void*)buf,1,sizeof(buf),src);
//            if(bf<sizeof(buf)){  // sizeof보다 작으면 에러거나 끝까지 읽었거나
//                if(feof(src)!=0){  // 끝까서 읽어서 <인지 에러가 나서인지 확인하기
//                    fwrite((void*)buf, 1, bf, des);
//                    puts("복사 성공!\n\n");
//                    break;
//                }
//                else{
//                    puts("복사 실패!\n\n");
//                    break;
//                }
//            }
//            fwrite((void*)buf, 1, bf, des);
//        }
//
//        if(fclose(src)!=0||fclose(des)!=0){
//            puts("스트림 제거 실패!\n\n");
//            return 1;
//        }
    
    // 522p 예제 풀기!
    // 문제1
//    FILE *writefile = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/mystory.txt", "wt");
//    if(writefile==NULL){
//        puts("파일 열기 실패!\n\n");
//        return -1;
//    }
//
//    char str[max];
//
//    fputs("#이름: ", writefile);
//    puts("\n이름을 입력하세요 : ");
//    fgets(str, sizeof(str), stdin);
//    fputs(str, writefile);
//    fputs("#주민번호: ", writefile);
//    puts("\n주민번호를 입력하세요 : ");
//    fgets(str, sizeof(str), stdin);
//    fputs(str, writefile);
//    fputs("#전화번호: ", writefile);
//    puts("\n전화번호를 입력하세요 : ");
//    fgets(str, sizeof(str), stdin);
//    fputs(str, writefile);
//
//    if(fclose(writefile)!=0){
//        puts("스트림 제거 실패!\n\n");
//        return -1;
//    }
    
    // 문제2
//    FILE *appendfile = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/mystory.txt","at");
//    if(appendfile==NULL){
//        puts("파일 열기 실패!\n\n");
//        return -1;
//    }
//    char temp[max];
//
//    fputs("#즐겨먹는 음식: ", appendfile);
//    puts("즐겨먹는 음식: ");
//    fgets(temp, sizeof(temp), stdin);
//    fputs(temp, appendfile);
//    fputs("#취미: ", appendfile);
//    puts("취미: ");
//    fgets(temp, sizeof(temp), stdin);
//    fputs(temp, appendfile);
//
//    if(fclose(appendfile)!=0){
//        puts("스트림 제거 실패!\n\n");
//        return -1;
//    }
    
    FILE *readfile = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/mystory.txt","rt");
    if(readfile==NULL){
        puts("파일 열기 실패!\n\n");
        return -1;
    }
    char temp[max];
    
    while(fgets(temp, sizeof(temp), readfile)!=NULL){
        fputs(temp, stdout);
    }
    
    if(fclose(readfile)!=0){
        puts("스트림 제거 실패!\n");
        return -1;
    }
    return 0;
}

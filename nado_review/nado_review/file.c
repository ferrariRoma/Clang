//
//  file.cpp
//  nado_review
//
//  Created by 안동규 on 2021/09/22.
//  '나도코딩'의 '파일 입출력에 관해서' 복습

#include <stdio.h>
#define max 10000

int main()
{
    char line[max];
    
//    FILE *file=fopen("/Users/andong-gyu/Documents/C language/nadocoding/nado_review/nado_review/test.txt","wb");
//    if(file==NULL){
//        printf("\n파일이 없습니다!\n\n");
//        return 1;
//    }
//    fputs("체스 살짝 재밌달까?\n",file);
//    fputs("하나씩 배우면 재미가 쏠쏠 할지도?\n",file);
//
//    fclose(file);
    
    FILE *file=fopen("/Users/andong-gyu/Documents/C language/nadocoding/nado_review/nado_review/test.txt", "rb");
    if(file==NULL){
        printf("\n파일을 읽어 올 수 없습니다\n\n");
        return 1;
    }
    while(fgets(line, max, file)!=NULL){
        printf("%s",line);
    }
    
    fclose(file);
    
    
    return 0;
}

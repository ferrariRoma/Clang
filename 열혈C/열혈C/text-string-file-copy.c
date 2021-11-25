//
//  text-string-file-copy.c
//  열혈C
//
//  Created by 안동규 on 2021/11/10.
//

#define max 10000

#include <stdio.h>

typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct rectangle {
    Point pot1;
    Point pot2;
} Rectangle;

typedef struct circle {
    Point cen;
    double rad;
} Circle;

void PrintRect(Rectangle *rect)
{
    printf("좌상단: %d, %d\n우상단: %d, %d\n우하단: %d, %d\n좌하단: %d, %d\n",
           rect->pot1.xpos, rect->pot1.ypos,
           rect->pot2.xpos, rect->pot1.ypos,
           rect->pot2.xpos, rect->pot2.ypos,
           rect->pot1.xpos, rect->pot2.ypos);
}

void PrintCircleInfo(Circle *cir)
{
    printf("xpos: %d\nypos: %d\nrad: %.2f\n",
           cir->cen.xpos,cir->cen.ypos,cir->rad);
}

void ChangePosPos(Point *pos1,Point *pos2)
{
    Point temp;
//    temp->xpos = pos1->xpos;
//    temp->ypos = pos1->ypos;
//    pos1->xpos = pos2->xpos;
//    pos1->ypos = pos2->ypos;
//    pos2->xpos = temp->xpos;
//    pos2->ypos = temp->ypos;
    // 482p에서의 배움을 사용하자!
    temp = *pos1;  // temp에 pos1의 주소복사
    *pos1 = *pos2;  // pos1주소에 pos2 주소복사
    * pos2 = temp;  // pos2에 pos1 주소복사
}

int main_text_string_file_copy(void)
{
    // review 488p practice
//    Rectangle first = {{2,4},{4,5}};
//    PrintRect(&first);
    
    // review 486p example
//    Circle circle1 = {{1,2},1.9};
//    Circle circle2 = {3,6,5.2};
//    PrintCircleInfo(&circle1);
//    PrintCircleInfo(&circle2);
    
    // review 482p example
//    Point pos1={1,2};  // 선언 및 초기화까지
//    Point pos2;  // 선언만
//    pos2 = pos1;  // pos1이 완전하게 pos2로 복사!
//    printf("pos1 xpos: %d\n", pos1.xpos);
//    printf("pos1 ypos: %d\n", pos1.ypos);
//    printf("pos2 xpos: %d\n", pos2.xpos);
//    printf("pos2 ypos: %d\n", pos2.ypos);
//    printf("pos1 size: %d\n", sizeof(pos1));
//    printf("pos2 size: %d\n", sizeof(pos2));
    // 결론: 구조체 변수간 대입연산의 결과는 멤버 대 멤버의 복사가 이뤄짐!
    
    // review 484p practice
//    Point pos1 = {2,4};
//    Point pos2 = {5,7};
//    ChangePosPos(&pos1,&pos2);
//    printf("pos1 x: %d, y: %d\n",pos1.xpos,pos1.ypos);
//    printf("pos2 x: %d, y: %d\n",pos2.xpos,pos2.ypos);
    
    // 520p 예제 실습(fread, fwrite)
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
    
//    FILE *readfile = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/mystory.txt","rt");
//    if(readfile==NULL){
//        puts("파일 열기 실패!\n\n");
//        return -1;
//    }
//    char temp[max];
//
//    while(fgets(temp, sizeof(temp), readfile)!=NULL){
//        fputs(temp, stdout);
//    }
//
//    if(fclose(readfile)!=0){
//        puts("스트림 제거 실패!\n");
//        return -1;
//    }
    return 0;
}

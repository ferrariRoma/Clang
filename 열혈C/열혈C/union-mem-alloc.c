//
//  union-mem-alloc.c
//  열혈C
//
//  Created by 안동규 on 2021/11/24.
//

#include <stdio.h>

#define max 10000

typedef struct sbox {
    int mem1;
    int mem2;
    double mem3;
} Sbox;

typedef union ubox {
    int mem1;
    int mem2;
    double mem3;
} Ubox;

typedef struct dbshort {
    unsigned short upper;
    unsigned short lower;
} DBShort;

typedef union rdbuf {
    int iBuf;
    char bBuf[4];
    DBShort sBuf;
} RDBuf;

typedef enum syllable {
    Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
} Syllable;

void SoundSyll(Syllable sy)
{
    switch(sy)
    {
        case Do:
            puts("도는 하얀 도라지"); return;
        case Re:
            puts("레는 둥근 레코드"); return;
        case Mi:
            puts("미는 파란 미나리"); return;
        case Fa:
            puts("파는 예쁜 파랑새"); return;
        case So:
            puts("솔은 작은 솔방울"); return;
        case La:
            puts("라는 라디오고요"); return;
        case Ti:
            puts("시는 졸졸 시냇물"); return;
    }
    puts("다 함께 부르세~ 도레미파 솔라시도 솔 도~ 짠~");
}

int main(void)
{
    // 520p example
//    FILE *src = fopen("/Users/andong-gyu/Music/Music/Media.localized/Unknown Artist/Unknown Album/TOKYO MACHINE & Guy Arthur - GET UP [NCS Release].mp3","rb");
//    FILE *cpy = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/testmusic.mp3","wb");
//    if(src==NULL ||cpy==NULL){
//        puts("파일 불러오기 실패!");
//        return -1;
//    }
//
//    char temp[max];
//    int ch;
//
//    while(1)
//    {
//        ch = fread((void*)temp,sizeof(char),sizeof(temp),src);
//        if(ch<sizeof(temp)){
//            if(feof(src)!=0){
//                fwrite((void*)temp, sizeof(char), ch, cpy);
//                puts("파일 복사성공!");
//                break;
//            } else{
//                puts("파일 복사실패!");
//                break;
//            }
//        }
//        fwrite((void*)temp,sizeof(char),ch,cpy);
//    }
    
    // 495p example
//    Syllable tone;
//    for(tone=Do; tone<=Ti; tone+=1){
//        SoundSyll(tone);
//    }
    
    // 492p example
//    RDBuf buf;
//    printf("정수 입력: ");
//    scanf("%d", &(buf.iBuf));
//    printf("상위 2바이트: %u\n", buf.sBuf.upper);
//    printf("하위 2바이트: %u\n", buf.sBuf.lower);
//    printf("상위 1바이트의 아스키 코드: %c\n",buf.bBuf[0]);
//    printf("하위 1바이트의 아스키 코드: %c\n",buf.bBuf[3]);
    
    // 490p example
//    Ubox ubx;
//    ubx.mem1 = 20;
//    printf("%d\n", ubx.mem2);
//
//    ubx.mem3 = 7.15;
//    printf("%d\n", ubx.mem1);
//    printf("%d\n", ubx.mem2);
//    printf("%g\n", ubx.mem3);
    
    // 489p example
//    Sbox sbx;
//    Ubox ubx;
//    printf("struct size: %d\n", sizeof(sbx));
//    printf("union size: %d\n", sizeof(ubx));
//    printf("%p %p %p\n", &sbx.mem1, &sbx.mem2, &sbx.mem3);
//    printf("%p %p %p\n", &ubx.mem1, &ubx.mem2, &ubx.mem3);
    // 같은 멤버 구성이라도 구조체의 size가 다르다.
    // union은 멤버들의 주소 값이 동일하다.
    // 공용체를 구성하는 멤버는 각각 할당되지 않고,
    // 크기가 가장 큰 멤버의 변수만 하나 할당되어 이를 공유하게 된다.
    return 0;
}

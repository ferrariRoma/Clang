//
//  file.cpp
//  nado_review
//
//  Created by 안동규 on 2021/09/22.
//  '나도코딩'의 '파일 입출력에 관해서' 복습

#include <stdio.h>
#define max 10000

int main_file()
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

    //    FILE *file=fopen("/Users/andong-gyu/Documents/C language/nadocoding/nado_review/nado_review/test.txt", "rb");
    //    if(file==NULL){
    //        printf("\n파일을 읽어 올 수 없습니다\n\n");
    //        return 1;
    //    }
    //    while(fgets(line, max, file)!=NULL){
    //        printf("%s",line);
    //    }
    //
    //    fclose(file);

    // 이제 fprintf와 fscanf를 배워보자.
    // fprintf가 입력 스트림, fscanf가 출력 스트림
    // 위에서 설명해둔 것 처럼 정형화된 서식문자에 대해서 쓰고 읽어 오기 위해서 주로 사용한다.
    // 예제로 로또 번호를 입력하고 출력하는 간단한 프로그램을 만들어보자.

    int num[6] = {0};
    int bonus = 0;
    char str1[max];
    char str2[max];

    FILE *file = fopen("/Users/andong-gyu/Documents/C language/nadocoding/nado_review/nado_review/lotto.txt", "wb");
    if (file == NULL)
    {
        printf("파일을 찾을 수 없습니다.\n");
        return 1;
    }
    else
    {
        fprintf(file, "%s %d %d %d %d %d %d\n", "추첨번호: ", 1, 2, 3, 4, 5, 6);
        fprintf(file, "%s %d", "보너스번호: ", 10);
        fclose(file);
    }

    FILE *fl = fopen("/Users/andong-gyu/Documents/C language/nadocoding/nado_review/nado_review/lotto.txt", "rb");
    if (fl == NULL)
    {
        printf("파일을 읽을 수 없습니다.\n");
        return 1;
    }
    else
    {
        fscanf(fl, "%s %d %d %d %d %d %d\n", str1, num, num + 1, num + 2, num + 3, num + 4, num + 5);
        printf("%s %d %d %d %d %d %d\n", str1, *num, *(num + 1), *(num + 2), *(num + 3), *(num + 4), *(num + 5));
        fscanf(fl, "%s %d", str2, &bonus);
        printf("%s %d\n", str2, bonus);

        fclose(fl);
    }

    return 0;
}

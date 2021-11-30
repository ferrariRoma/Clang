//
//  complex-file-write.c
//  열혈C
//
//  Created by 안동규 on 2021/11/25.
//

#include <stdio.h>

typedef struct fren {
    char name[10];
    char sex;
    int age;
} Friend;

long countbytes(FILE *fp)
{
    long size_file = 0;
    long cur_fp;
    cur_fp = ftell(fp);
    while(fgetc(fp)!=EOF){
        size_file++;
    }
    fseek(fp, cur_fp, SEEK_SET);
    return size_file*sizeof(long);
}

long answerfn(FILE *fp){
    long fpos;
    long fsize;
    fpos = ftell(fp);
    fseek(fp, 0, SEEK_END);
    fsize = ftell(fp);
    fseek(fp, fpos, SEEK_SET);
    return fsize*sizeof(long);
}

long reviewfn(FILE *fp)
{
    long fpos;
    long fsize;
    fpos = ftell(fp);
    fseek(fp, 0, SEEK_END);
    fsize = ftell(fp);
    fseek(fp,fpos,SEEK_SET);
    return fsize;
}

int main_complex_file_write(void)
{
    // review
//    FILE *readfp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt", "rt");
//    if(readfp==NULL){
//        puts("파일 열기 실패!");
//        return -1;
//    }
//    char content[10];
//    long answer;
//    fgets(content, sizeof(content), readfp);
//    fputs(content, stdout);
//    answer = reviewfn(readfp);
//    printf("\nanswer: %ld\n", answer);
    
    // 532p question answer
//    FILE *readfp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt", "rt");
//    if(readfp==NULL){
//        puts("파일 열기 실패!");
//        return -1;
//    }
//    char content[10];
//    fgets(content, sizeof(content), readfp);
//    fputs(content, stdout);
//    printf("파일 크기: %ld\n",answerfn(readfp));
//
//    fclose(readfp);
    // 결론: 값은 같지만 답안지의 로직이 훨씬 더 간결하고 명확하다. 다시 한 번 만들어 보면서 익히기!
    
    // 532p 24-2 question
//    FILE *readfp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt","rt");
//    if(readfp==NULL){
//        puts("파일 열기 실패!");
//        return -1;
//    }
//    long answer;
//    answer = countbytes(readfp);
//    printf("size: %ld\n", answer);
//    fclose(readfp);
    
    // yesterday review
    // first chapter - fseek
//    FILE *writefp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt", "wt");
//    if(writefp==NULL){
//        puts("파일 열기 실패!");
//        return -1;
//    }
//    fputs("123456789", writefp);
//    fclose(writefp);
//    writefp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt","rt");
//    if(writefp==NULL){
//        puts("파일 열기 실패!");
//        return -1;
//    }
//    fseek(writefp, 2, SEEK_SET);
//    putchar(fgetc(writefp));
//    fseek(writefp, 0, SEEK_CUR);
//    putchar(fgetc(writefp));
//    fseek(writefp, -2, SEEK_END);
//    putchar(fgetc(writefp));
//    fclose(writefp);
    
    // second chapter - ftell
//    FILE *writefp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt", "wt");
//    if(writefp==NULL){
//        puts("파일 열기 실패!");
//        return -1;
//    }
//    fputs("1234-", writefp);
//    fclose(writefp);
//    writefp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt","rt");
//    if(writefp==NULL){
//        puts("파일 열기 실패");
//        return -1;
//    }
//    long fpos;
//    for(int i=0;i<4;i++){
//        putchar(fgetc(writefp));
//        fpos = ftell(writefp);
//        fseek(writefp, -1, SEEK_END);
//        putchar(fgetc(writefp));
//        fseek(writefp, fpos, SEEK_SET);
//    }
//    fclose(writefp);
    
    // 531p example
//    long fpos;
//    int i;
//
//    FILE *writefp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt","wt");
//    fputs("1234-", writefp);
//    fclose(writefp);
//
//    writefp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt","rt");
//    for(int i=0; i<4; i++){
//        putchar(fgetc(writefp));
//        fpos = ftell(writefp);
//        fseek(writefp, -1, SEEK_END);
//        putchar(fgetc(writefp));
//        fseek(writefp, fpos, SEEK_SET);
//    }
//    fclose(writefp);
    
//    for(int i=0; i<4; i++){
//        putchar(fgetc(writefp));
//        fpos = ftell(writefp);
//        fseek(writefp, -1, SEEK_END);
//        putchar(fgetc(writefp));
//        fseek(writefp, fpos, SEEK_SET);
//    }
    
    // 529p example
//    FILE *writefp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt","wt");
//    if(writefp==NULL){
//        puts("파일 열기 실패!");
//        return -1;
//    }
//    fputs("123456789",  writefp);
//    fclose(writefp);
//    writefp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt","rt");
//    if(writefp==NULL){
//        puts("파일 열기 실패!");
//        return -1;
//    }
//
//    char temp[10];
//    fgets(temp, sizeof(temp), writefp);
//    puts(temp);
//    fseek(writefp, 2, SEEK_SET);
//    putchar(fgetc(writefp));
//    fseek(writefp, 2, SEEK_CUR);
//    putchar(fgetc(writefp));
//    fseek(writefp, -1, SEEK_END);
//    putchar(fgetc(writefp));
//    fseek(writefp, -2, SEEK_END);
//    putchar(fgetc(writefp));
//
//    fclose(writefp);
    
    // 526p example
//    FILE *fp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt","wb");
//    FILE *loadfp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/structFile.txt","rb");
//    if(fp==NULL || loadfp==NULL){
//        puts("파일 열기 실패!");
//        return -1;
//    }
//    Friend myfriend1;
//    Friend myfriend2;
//
//    printf("이름 성별 나이 순 입력: ");
//    scanf("%s %c %d", myfriend1.name, &(myfriend1.sex), &(myfriend1.age));
//    fwrite((void*)&myfriend1,sizeof(myfriend1),1,fp);
//    fclose(fp);
    
//    fread((void*)&myfriend2, sizeof(myfriend2), 1, loadfp);
//    printf("%s %c %d\n", myfriend2.name, myfriend2.sex, myfriend2.age);
//
//    fclose(loadfp);
        
    
    // 523p example
//    char name[10];
//    char sex;
//    int age;
//
//    FILE *fp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/friend.txt","wt");
//    if(fp==NULL){
//        puts("파일 불러오기 실패!");
//        return -1;
//    }
//    int i;
//    for(i=0; i<3; i++){
//        printf("이름 성별 나이 순 입력: ");
//        scanf("%s %c %d", name, &sex, &age);
//        getchar();
//        fprintf(fp, "%s %c %d\n", name, sex, age);
//    }
//    if(fclose(fp)!=0){
//        puts("스트림 제거 실패!\n");
//        return -1;
//    }
    
//    FILE *fp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/friend.txt","rt");
//    if(fp==NULL){
//        puts("파일 불러오기 실패!");
//        return -1;
//    }
//
//    int check_point;
//
//    while(1)
//    {
//        check_point=fscanf(fp,"%s %c %d",name,&sex,&age);
//        if(check_point==EOF){
//            if(feof(fp)!=0){
//                puts("파일 읽기 완료!");
//                break;
//            } else{
//                puts("파일 읽기 실패!");
//            }
//
//        }
//        printf("%s %c %d\n",name,sex,age);
//    }
//
//    if(fclose(fp)!=0){
//        puts("스트림 제거 실패!");
//        return -1;
//    }
    
    return 0;
}

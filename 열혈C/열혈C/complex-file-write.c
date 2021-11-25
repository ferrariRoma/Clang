//
//  complex-file-write.c
//  열혈C
//
//  Created by 안동규 on 2021/11/25.
//

#include <stdio.h>

int main(void)
{
    // 523p example
    char name[10];
    char sex;
    int age;
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
    
    FILE *fp = fopen("/Users/andong-gyu/Documents/develope/C language/nadocoding/nado_review/txtfile/friend.txt","rt");
    if(fp==NULL){
        puts("파일 불러오기 실패!");
        return -1;
    }
    int check_point;
    while(1)
    {
        check_point=fscanf(fp,"%s %c %d",name,&sex,&age);
        if(check_point==EOF){
            if(feof(fp)!=0){
                puts("파일 읽기 완료!");
                break;
            } else{
                puts("파일 읽기 실패!");
            }
            
        }
        printf("%s %c %d\n",name,sex,age);
    }
    
    if(fclose(fp)!=0){
        puts("스트림 제거 실패!");
        return -1;
    }
    return 0;
}

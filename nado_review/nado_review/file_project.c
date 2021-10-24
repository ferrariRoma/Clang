////
////  file_project.cpp
////  nado_review
////
////  Created by 안동규 on 2021/09/28.
////  나도코딩 파일 프로젝트 복습
//
//#include <stdio.h>
//#include <string.h>  // strcmp
//#include <stdlib.h>  // exit
//
//#define max 10000
//
//int question();
//int correct(char *ans);
//void writediary();
//
//
//int main()
//{
//    if(question()==1){
//        exit(0);
//    }
//    else{
//        writediary();
//        exit(0);
//    }
//
//    return 0;
//}
//
//
//
//int question()
//{
//    char answer[20];
//    char c=0;
//    int i=0;
//    int wrong=0;
//    
//    while(wrong!=5){
//        
//        printf("비밀번호를 입력해주세요(기회 %d/5) : ",wrong);
//        
//        fgets(answer, sizeof(answer), stdin);
//        
//        // 비밀번호 채점 과정은 다른 함수로
//        if(correct(answer)==0){
//            printf("\n\n인증되었습니다.\n\n");
//            return 0;
//        }
//        else{
//            printf("\n\n비밀번호가 틀렸습니다.\n\n");
//            wrong++;
//        }
//    }
//
//    printf("\n\n\n비밀번호를 5번 틀렸습니다. 프로그램을 종료합니다.\n\n");
//    return 1;
//}
//
//int correct(char *ans)
//{
//    if(strcmp(ans,"leagueoflegend\n")==0)
//        return 0;
//    return 1;
//}
//
//void writediary()
//{
//    char line[max];
//    char contents[max];
//    
//    FILE *file=fopen("/Users/andong-gyu/Documents/C language/nadocoding/nado_review/nado_review/diary.txt","a+b");
//    if(file==NULL){
//        printf("\n\n파일을 읽을 수 없습니다.\n\n");
//        return;
//    }
//    
//    while(fgets(line, sizeof(line), file)){
//        printf("%s",line);
//    }
//    
//    
//    printf("\n\n이어서 작성해주세요!\n프로그램을 종료하고 싶을때 exit를 입력해주세요!\n\n");
//    
//    while(1)
//    {
//        scanf("%[^\n]",contents);
//        getchar();  // 엔터까지 읽어들이기 때문에 그 엔터를 지워주는 역할
//        
//        if(strcmp(contents,"exit")==0){
//            printf("\n\n프로그램을 종료하겠습니다.\n\n");
//            return;
//        }
//        else{
//            fputs(contents, file);
//            fputs("\n",file);
//        }
//    }
//    fclose(file);
//}

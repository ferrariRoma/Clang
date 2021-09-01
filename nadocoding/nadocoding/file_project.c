//
//  file_project.cpp
//  nadocoding
//
//  Created by 안동규 on 2021/07/22.
//

// #define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <curses.h>
#include <string.h>
#include <unistd.h>  // ?


// 여기 프로젝트에서 getch라는 중요한 친구가 있는데 그 친구가
// xcode에서는 구현이 안되는거 같다. 대체함수나 또 다른 방법이 있는거 같은데
// 관련해서는 계속 찾아보아야 할 듯. 프로젝트 복습시에 해결해보도록 하자!



// 비밀번호를 입력 받아서
// 맞는 경우? 비밀 일기를 읽어와서 보여주고 계속 작성하도록 합니다.
// 틀린 경우, 경고메시지를 표시하고 종료합니다.




//#define MAX 10000
//
//int main_fileproject(void)
//{
//    // fputs와 fgets를 활용
//    char line[MAX];  // 파일에서 불러온 내용을 저장할 변수
//    char contents[MAX];  // 일기장에 입력할 내용
//    char password[20];  // 비밀번호 입력
//    char c;  // 비밀번호 입력 할 때 키값 확인용. 비밀번호 입력하면 *모양으로 나오는 효과구현(마스킹)
//
//    printf("비밀일기에 오신 것을 환영합니다.\n");
//    printf("비밀번호를 입력하세요! : ");
//
//    int i = 0;
//
//    while(1)
//    {
//        c = getch();
//        // getchar는 엔터를 입력받아야 동작을 함.
//        // getch는 키 입력 시 바로바로 동작을 함.
//        // 한자한자 입력시 바로바로 저장. getchar는 엔터를 처야 저장
//        // 간단하게 입력값이라고 생각하면 편할듯
//
//        if (c==13)  // 13은 엔터를 나타내는 아스키 코드이다.
//        {
//            password[i] = '\0';
//            break;  // c에 입력된 것이 엔터면 종료.
//        }
//        else  // 그게 아닌 경우, 즉 비밀번호를 계속 입력하고 있는 경우
//        {
//            printf("*");
//            password[i] = c;
//            // 이렇게 해두면 비밀번호를 입력할 때 *를 표시함과 동시에
//            // 그 값은 배열에 입력이 된다.
//        }
//
//        i++;  // 이렇게 해주어야 인덱스 번호가 하나씩 늘어난다.
//    }
//    // 비밀번호 처리는 완료
//
//
//    // 예를 들어서, 비밀번호 : 나도코딩 skehzheld
//    printf("/n...비밀번호 확인 중\n");
//    // 비밀번호의 비교는 if(password == "skehzheld")
//    // 이렇게 하는게 아니라 strcmp을 사용해준다.
//    // xcode에서는 string.h를 헤더파일로 지정해주어야 가능함
//    // string.h에는 strcmp랑 strlen, strcpy_s 등을 사용가능
//    if (strcmp(password, "skehzheld")==0)
//    {
//        printf("===비밀번호 입력완료===");
//        char *filename = "/Users/andong-gyu/Documents/coding practice 2";
//        // 포인터를 이용해 파일의 주소를 받음
//        FILE *file = fopen(filename, "a+b");
//        // a+b는 파일이 없으면 생성을 하고 파일이 있으면 append를 한다. 라는 뜻임.
//        if (file == NULL)
//        {
//            printf("파일 열기 실패!\n");
//            return 1;
//        }
//
//
//        // 이까지 온거면 파일이 정상적으로 열렸다는 것이다.
//        // 그럼 내용을 한 번 불러와보자!
//        while(fgets(line, MAX, file) != NULL)
//        {
//            printf("%s", line);
//        }
//
//        printf("\n\n내용을 계속 작성하세요! 종료하려면 EXIT를 입력하세요!\n");
//
//        while(1)
//        {
//            // 조금 새로운 개념을 간단하게 설명하겠음
//            // 밑의 문장은,
//            // 줄바꿈이 나오기 전까지의 모든 문장을 다 받아서
//            // contents에 저장해라. 즉, 한 문장씩 저장해라.
//            scanf("%[^\n]", contents);
//            getchar();
//            // 예전에 학습한 것. 현재 위 scanf는
//            // 줄바꿈이 나오기 전까지의 문장을 저장하는 것이기 때문에
//            // 입력이 저장되고 나면 \n가 남아있음. 그것을 getchar()으로
//            // 해소하려고 함.
//            // Flush처리! 라고 하는데 버퍼에 남아있는 \n를 처리!
//
//            // 그리고 EXIT를 입력하면 넘어가기로 종료하기로 했으니
//            if(strcmp(contents, "EXIT") == 0)
//            {
//                printf("비밀일기 입력을 종료합니다.\n");
//                break;
//            }
//            // 그게 아니면 계속 입력을 받아야 함.
//            else
//            {
//                fputs(contents, file);
//                fputs("\n",file);
//                // 앞에서 날려먹은 줄바꿈 여기서 추가!
//            }
//        }
//        fclose(file);
//    }
//
//    // 만약 비밀번호가 틀렸으면?
//    else
//    {
//        printf("비밀번호가 틀렸어요!\n");
//
//    }
//
//    // strcmp와 getch가 xcode에서 구현이 안되는 거 같음. 해결책이 필요해보임.
//
//    return 0;
//}


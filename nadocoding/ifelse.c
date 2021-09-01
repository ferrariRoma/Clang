//
//  condition.cpp
//  nadocoding
//
//  Created by 안동규 on 2021/05/01.
//

#include <stdio.h>

int main_condition(void)
{
    //버스를 탄다고 가정. 학생 / 일반인으로 구분 (일반인 : 20세)
    //if (조건) {출력} else {출력2}
    //맥북에서는 그냥 else치고 엔터치니까 문법이 쭉 완성이 된다. 갓갓북;
//    int age = 15;
//    if (age >= 20) {
//        printf("일반인 입니다.\n");
//    } else {
//        printf("학생 입니다.\n");
//    }
    
    
    //만약 초등학생(8~13) / 중학생(14~16) / 고등학생으로(17~19) 나누면?
    //여기선 if / else if / else 를 쓰면 된다. VBA문에서 다 배웠지?
//    int age;
//    printf("나이를 입력하세요!\n");
//    scanf("%d", &age);
//    if (age >=8 && age < 13 )  //&&는 and를 뜻한다.
//    {
//        printf("초등학생 입니다.\n");
//    }
//        else if (age >= 14 && age <= 16){
//            printf("중학생 입니다.\n");
//        }
//        else if (age >= 17 && age <= 19){
//            printf("고등학생 입니다.\n");
//        }
//        else{
//            printf("대상이 아닙니다.\n");
//        }
    
    
    //break / continue
    //1번부터 30번까지 있는 반에서 1번에서 5번까지 조별발표를 합니다.
//    for(int i = 1; i<=30; i++){
//        if(i >= 6){
//            printf("나머지 학생은 집에 가세요\n");
//            break;
//            //근데 이렇게 입력을 하고 조건에 맞더라도 for문을 탈출하지는 않는다. 그렇기 때문에 여기서 break를 써주면 if문의 조건을 충족할 시 for문을 탈출시켜주는 장치를 하게된다.
//        }
//        printf("%d번 학생은 조별발표 준비를 하세요!\n", i);
//    }
    
    //1번부터 30번까지 있는 반에서 7번 학생은 아파서 결석
    //7번을 제외하고 6번부터 10번까지 조별발표를 하세요!
//    for(int i=1; i<=30; i++){
//        if(i>=6 && i<=10){
//            if(i==7){
//                printf("%d번 학생은 결석입니다.\n", i);
//                continue;
//                //여기에 break를 써주면 7번학생은 결석입니다 이후에 for문을 탈출해버린다. 그래서 이럴때는 continue를 써주면 결석입니다. 를 수행한 이후에 바로 첫 문장으로 넘어가서 다음 숫자를 대입하여 명령을 계속 수행해나간다.
//            }
//            printf("%d번 학생은 조별발표를 하세요\n", i);
//        }
//    }
    
    
    //and랑 or && ||
//    int a=10;
//    int b=11;
//    int c=12;
//    int d=13;
//    if( a==b && c==d){
//        printf("a와 b는 같고, c와 d도 같습니다.\n");
//    }
//    else{
//        printf("값이 서로 다르네요!"\n);
//    }
    int a=10;
    int b=10;
    int c=12;
    int d=13;
    if( a==b || c==d){
        printf("a와 b 혹은, c와 d는 같습니다.\n");
    }
    else{
        printf("값이 서로 다르네요!\n");
    }
    
    
    //랜덤!이란 걸 배워봅시ㅏㄷ.
    return 0;
}

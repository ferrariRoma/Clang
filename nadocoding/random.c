//
//  main.c
//  nadocoding2
//
//  Created by 안동규 on 2021/05/07.




//랜덤을 배워볼게요~ 이걸 쓰려면 우리가 이때까지 써왔던 stdio.h 말고 time.h를 써줘야 합니다. 이걸로도 안되면 그 밑에 stdlib.h (스탠다드 라이브러리)를 써주셔야지 작동이 됩니다.
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
// #define WHEN 1


int main_random(void)
{
    rand(); //이걸 이용하면 랜덤수를 바로 뽑을 수 있음.
    srand((unsigned int) time(NULL));
    // 난수 초기화
    // int num = rand() % 어떤 수;
    // 여기서 어떤 수의 역할은 내가 뽑고 싶은 숫자의 범위를 정해준다. 만약 3을 적으면 컴퓨터에게 뽑고자 하는 선택지 3개를 주는 것이다. 추가적으로 여기서 3가지는 0부터 시작하기 때문에 0부터 2까지임. 만약 1부터 3까지 수를 뽑기 원하면 3 + 1이라고 기술을 해주면 된다. 랜덤수를 뽑기 위해서는 초기화를 해주어야 하는데 이걸 해주지 않으면 우리가 진짜 원하는 랜덤 값이 안나온다. 그래서 난수초기화를 해주어야 하는데 이걸 해주려면 코드 위쪽에 srand(time(null)); 라고 기술을 해주어야 한다.
    
    printf("난수 초기화 이전\n");
    for(int i=0; i<10; i++)
    {
        printf("%d", rand() % 10);
    }
    // 실행할때마다 똑같은 난수가 계속 나온다.
    
    
    
    srand((unsigned int) time(NULL));  //난수초기화 시키고요~
    // 보니까 맥북에서는 srand((unsigned int) time(NULL)); 를 입력하니까 작동이 안됨. 앞에 (unsigned int)를 위에 처럼 붙이거나 srand(time(0));라고 하면 작동이 됨. 전자는 null값이 정의가 되지 않았다고 선언해주는 것인 것으로 '추측'이 되며 후자는 난수를 0으로 매번 맞춰주는 것으로 '추정'됨. '무명'님 의견은 unsigned int랑 0이랑 null이랑 다 비슷하다고 하심. 실제로 null을 이진법화하면 0000000이라고... 맥북 c++언어가 완전한 c++언어가 아니라서 null값이 정의되어 있지 않은 거 같다고 하시면서 설정을 만지면 될 수 있다고도 하심.
    printf("난수 초기화 이후\n");
    for(int i=0; i<10; i++)
    {
        printf("%d", rand() % 10);
    }
    
    
    // 가위0 바위1 보2!
    srand((unsigned int) time(NULL));
    int i = rand() % 3;
    if(i == 0)
    {
        printf("가위\n");
    }
    else if (i == 1)
    {
        printf("바위\n");
    }
    else if ( i == 2)
    {
        printf("보\n");
    }
    else
    {
        printf("왜 안내고 그래요!ㅎㅎ\n");
    }
    
    
    
    // 이걸 조금 다른 방식으로 할 수 있는 방법이 있는데 그게 바로 switch이다.
    srand((unsigned int) time(NULL));
    int a = rand() % 3;
    switch (a) {      // 값이
        case 0:      // 첫번째 케이스면
            printf("가위\n");      //이 문장
            break;
        case 1:
            printf("바위\n");
            break;
        case 2:
            printf("보\n");
            break;  //switch case에서는 각 경우마다 break문을 적어주어야 하는데 그 이유는, 만약 바위가 나오면 그 값 밑에 있는 '보'와 '몰라요'까지 조건을 확인하지 않고 다 실행하게 되어 있음. 그래서 각 case마다 break를 넣어서 탈출시켜주어야 한다.
            
        default:      //else면 이 문장
            printf("몰라요\n");
            break;
    }
    //    복습
    //    srand((unsigned int) time(NULL));
    //    int i=rand() % 3;
    //    switch (i){
    //        case 1:
    //            printf("가위\n");
    //            break;
    //        case 2:
    //            printf("바위\n");
    //            break;
    //        case 3:
    //            printf("보\n");
    //            break;
    //
    //        default:
    //            printf("몰라용\n");
    //            break;
    //
    //    }
    
    
    
    // 앞에 조건문장에서 했던 것에 switch case를 적용시켜보자
    
    int age;
    printf("나이를 입력하세요!\n");
    scanf("%d", &age);
    switch(age)
    {
            // case는 한 가지 경우만 가능함!
        case 8:
            printf("초등학생 입니다.\n");
            break;
        case 9:
            printf("초등학생 입니다.\n");
            break;
        case 10:
            printf("초등학생 입니다.\n");
            break;
        case 11:
            printf("초등학생 입니다.\n");
            break;
        case 12:
            printf("초등학생 입니다.\n");
            break;
        case 13:
            printf("초등학생 입니다.\n");
            break;
        case 14:
            printf("중학생 입니다.\n");
            break;
        case 15:
            printf("중학생 입니다.\n");
            break;
        case 16:
            printf("중학생 입니다.\n");
            break;
        case 17:
            printf("고등학생 입니다.\n");
            break;
        case 18:
            printf("고등학생 입니다.\n");
            break;
        case 19:
            printf("고등학생 입니다.\n");
            break;
        case 20:
            printf("대상이 아닙니다.\n");
            break;
            
        default:
            printf("대상이 아닙니다.\n");
            break;
    }
    
    // 그런데 이렇게 똑같은 문장을 반복하면 귀찮고 복잡하게 보인다. 그럴 때는 break를 지워주면 된다. 그러면 이렇게 그룹을 짓는 효과를 낼 수 있음.
    // int age;
    printf("나이를 입력하세요!\n");
    scanf("%d", &age);
    switch(age)
    {
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
            printf("초등학생 입니다.\n");
            break;
        case 14:
        case 15:
        case 16:
            printf("중학생 입니다.\n");
            break;
        case 17:
        case 18:
        case 19:
        case 20:
            printf("대상이 아닙니다.\n");
            break;
            
        default:
            printf("대상이 아닙니다.\n");
            break;
    }
    
    // 이처럼 case어떤 경우를 만났을 때 문장의 끝에 break가 있으면 이후는 실행하지 않고 switch case문을 끝내는데 없으면 그 다음것도 수행한다. 그러다가 break를 만나면은 탈출!
    
    
    // up and down 프로젝트
    srand((unsigned int) time(NULL));
    int num = rand() % 100 + 1; //1부터 100 사이의 수를 뽑기 위해서
    printf("숫자: %d\n", num);
    int answer = 0;  //정답  해보니까 answer의 초기값을 설정해주어도 되고 안해줘도 된다. 즉, 그냥 int answer;로 끝내도 밑에 코드들은 잘 작동한다.
    int chance = 5; //기회
    // 이런 경우에는 chance > 0 을 대신해서 1을 적어줘도 됨.(1은 참, 0은 거짓) 이런 경우에는 무한루프에 빠지기도 하지만 그래도 while문 안에 있는 것을 모두 실행하긴 한다.
    while(chance > 0)
    {
        printf("남은 기회 %d 번\n", chance--);
        
        printf("숫자를 입력하세요(1~100사이): \n");
        scanf("%d", &answer);
        
        if (answer > num)
        {
            printf("Down ↓\n");
        }
        else if (answer < num)
        {
            printf("Up ↑\n");
        }
        else if (answer == num)
        {
            printf("정답입니다!\n\n");
            break;
        }
        else
        {
            printf("알 수 없는 오류가 발생하였습니다!\n\n");
        }
        
        if(chance == 0)
        {
            printf("모든 기회를 사용하셨습니다.\n");
            break;
        }
    }
    
    
    return 0;
}

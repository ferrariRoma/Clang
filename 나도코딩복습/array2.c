#include <stdio.h>
#include <time.h>  // time
#include <stdlib.h>  // srand, rand

/* 배열 복습해봅시다~
자, 이번에는 발모제를 찾을거에요.
정해진 갯수의 병이 있고,
그 중에서 랜덤한 갯수의 병을, 랜덤한 번호로 뽑아서
뿌려주고,
그 중에 답이 있으면 머리가 자라나고, 없으면 안나는 걸로~ */


int main_wait()
{
    // 랜덤값 초기화 먼저.
    srand((unsigned int)time(NULL));

    // 5개의 병을 만들자.
    int bottle[5] = {0,0,0,0,0};
    
    // 랜덤으로 병 하나를 정답으로 고르자.
    int treatment = rand() % 5
    // 사용자가 입력할 답
    int answer = 0;

    // 이'번'에 보여'줄' 병 갯수
    int currentBottle = 0;
    // 이'전'에 보여'준' 병 갯수
    int prevBottle = 0;
        


    printf("발모제를 찾아야 합니다!\n");

    // 기회는 5번 입니다.
    for(int i=0; i<5; i++)
    {
        printf("\n\n===%d번째 시도 입니다!===\n", i);
        
        // 2개 혹은 3개의 병을 보여줄 것이다.
        // 반복문을 사용하는 이유는
        // prevbottle과 다른 currentBottle를
        // 뽑기 위함이다!
        do{
            currentBottle = rand % 2+2;
        } while{
            currentBottle == prevBottle
        }
        
        // 0~1 -> 2~3

        



    }

    return 0;
}
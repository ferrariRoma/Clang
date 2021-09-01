//
//  struct_project.cpp
//  nadocoding
//
//  Created by 안동규 on 2021/07/19.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// 5마리의 고양이가 있다.
// 아무 키나 눌러서 랜덤으로 고양이를 뽑되,
// 5마리 모두 다 수집을 해서 열심히 키우면 된다.
// 중 복 발 생 가 능 !

// 고양이
// 이름, 나이, 성격, 키우기 난이도(레벨)

typedef struct {
    char *name;  // 이름
    int age;  // 나이
    char *character;  // 성격
    int level;  // 양육 난이도(1~5, 5가 어려움)
} CAT;

// 현재까지 보유한 고양이
// 0과 1로 구분해서 0이 없는 것, 1이 있는 것으로 할 듯
int collection[5] = {0,0,0,0,0};

// 전체 고양이 리스트
CAT cats[5];  // 구조체에 cats라는 배열형식의 구조체 변수 설정

// 선언
void initCats();  // 고양이 정보 초기화
void printCat(int selected);
int checkCollection();


int main_struct_project(void)
{
    srand((unsigned int)time(NULL));
    
    initCats();
    while(1)
    {
        printf("두근두근! 어느 고양이의 집사가 될까요?\n아무키를 눌러서 확인해주세요!");
        getchar();
        
        int selected = rand() % 5;
        printCat(selected);
        // 랜덤으로 뽑힌 숫자를 활용해서 initCats의 항목을
        // 출력해주는 것으로 보인다.
        // 정답! 뽑은 고양이의 정보를 출력하고
        // 뽑았다고 main에다가 알려주어야 한다.
        // 맨 위에 보면 이를 대비해서 collection이라는 친구를
        // 만들어 놓았음!
        collection[selected] = 1;
        
        // 이런 동작을 하다가 고양이 5마리를 다 모았다면
        // 게임을 끝내야 한다.
        int collectAll = checkCollection();
        if (collectAll == 1)
        {
            break;
        }
    }
    
    return 0;
}





// 정의
void initCats()
{
    // cats[0].멤버명, 이런 식으로 해서 멤버에 값을 부여할 듯
    cats[0].name = "깜냥이";
    cats[0].age = 5;
    cats[0].character = "온순함";
    cats[0].level = 1;
    
    cats[1].name = "귀요미";
    cats[1].age = 3;
    cats[1].character = "날카로움";
    cats[1].level = 2;
    
    cats[2].name = "수줍이";
    cats[2].age = 7;
    cats[2].character = "늘 잠만 잠";
    cats[2].level = 3;
    
    cats[3].name = "까꿍이";
    cats[3].age = 2;
    cats[3].character = "시끄러움";
    cats[3].level = 4;
    
    cats[4].name = "돼냥이";
    cats[4].age = 1;
    cats[4].character = "배고픔";
    cats[4].level = 5;
}

void printCat(int selected)
{
    printf("\n\n===당신은 이 고양이의 집사가 되었어요!===\n");
    printf(" 이름 : %s\n", cats[selected].name);
    printf(" 나이 : %d\n", cats[selected].age);
    printf(" 특성 : %s\n", cats[selected].character);
    printf(" 레벨 : ");
    // 강의 영상에서 보면 레벨은 ★로 표현이 됨.
    // 그렇게 되도록 설정을 해보자
    for(int i=0; i<cats[selected].level; i++)
    {
        printf("%s","★");
    }
    // 이렇게 해도 \n이 아니니까, 레벨 :, 이 다음에 이어서 별이 옴.
    printf("\n\n");
    // 여기서 줄바꿈을 해주면 됨
}

int checkCollection()
{
    // 현재 보유한 고양이 목록도 출력을 해주면서,
    // 다 모았는지 여부를 반환! 2가지 역할을 할 수 있게 만들어보자!
    int collectAll = 1;
    
    printf("\n\n===보유한 고양이 목록이에요!\n");
    for(int i=0; i<5; i++)
    {
        if((collection[i]) == 1)
        {
            printf("%10s\n",cats[i].name);
        }
        else
        {
            printf("%10s\n", "(빈 박스)");
            collectAll = 0;
            // 이렇게 해주면 collectAll은
            // 빈 박스가 하나라도 있으면 return될 값이 0이 된다.
        }
    }
    printf("\n======================\n");
    // 이까지는 보유한 고양이를 알려주는 것이고,
    // 다 모았는지 여부를 반환해주자.
    // 위에 collectAll 변수를 정의해두자.
    
    if(collectAll == 1)
    {
        printf("\n\n 축하합니다! 모든 고양이를 모았습니다!\n");
    }
    return collectAll;
}


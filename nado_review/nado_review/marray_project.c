#include <stdio.h>
#include <stdlib.h>  // srand위해서
#include <time.h>  // time위해서
#include <unistd.h>

int animal[4][5];
char *animalName[10];
int check[4][5];

void setarray();  // 기초배열 초기화
void setName();  // 포인터 배열에 동물이름 설정
void assign();  // 포인터 배열을 통해서 기초배열에 동물이름 할당
int randPos();  // 비어있는 위치를 할당
int convX(int num);
int convY(int num);
void preview();
void question();
int finish();


int main_marray_project(void)
{
    int failCount=0;  // int counting the number of fail.
    srand((unsigned int)time(NULL));  // 랜덤 초기화
    // time을 unsigned int형변환 진행
    
    setarray();
    setName();
    assign();
    
    // 문제출력
    printf("\n\n========================\n\n");
    while(1)
    {
        int select1=0;  // 사용자 정답1
        int select2=0;  // 사용자 정답2
        printf("\n\n========================\n\n");
        preview();
        sleep(5);  // 잠시 대기. <unistd.h> 불러주어야 한다.
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        question();
        printf("\n\n같은 카드 2장을 골라주세요!\n");
        scanf("%d %d", &select1, &select2);
        printf("입력 번호 확인 : %d, %d\n", select1, select2);
        fflush(stdin);  // 정답입력 끝
        
        // 정답채점 과정
        // 정답이기 위해서는,
        // 같은 카드를 입력해서는 안되고 이미 뽑은 카드도 안되며 두 개가 같아야 한다.
        if(select1!=select2 &&
           check[convX(select1)][convY(select1)]!=1 &&
           check[convX(select2)][convY(select2)]!=1 &&
           animalName[animal[convX(select1)][convY(select1)]] == animalName[animal[convX(select2)][convY(select2)]])
        {
            printf("\n\n정답입니다!\n\n");
            check[convX(select1)][convY(select1)]=1;
            check[convX(select2)][convY(select2)]=1;
        }
        else{
            if(select1==select2){
                printf("\n\n같은 수를 입력하셨습니다.\n다시 입력해주세요\n\n");
                continue;
            }
            else if(check[convX(select1)][convY(select1)]==1 ||
                    check[convX(select2)][convY(select2)]==1){
                printf("\n\n이미 뽑힌 카드입니다.\n\n");
                continue;
            }
            else{
                failCount++;
                printf("\n\n\n오답입니다!\n실패횟수 : %d\n\n", failCount);
            }
        }
        
        if(finish()==1){
            printf("\n\n\n정답을 모두 맞췄습니다!\n\n총 실패횟수는 %d번 입니다.\n\n", failCount);
            break;
        }
    }  
    return 0;
}

void setarray()
{
    for(int i=0;i<4;i++){
        for(int j=0; j<5; j++){
            animal[i][j]=-1;
        }
    }
}

void setName()
{
    animalName[0]="코끼리";
    animalName[1]="호랑이";
    animalName[2]="캥거루";
    animalName[3]="코뿔소";
    animalName[4]="고양이";
    animalName[5]="강아지";
    animalName[6]="두더지";
    animalName[7]="족제비";
    animalName[8]="다람쥐";
    animalName[9]="원숭이";
}

void assign()
{
    for(int i=0;i<10;i++){  // 0~9까지를
        for(int j=0;j<2;j++){  // 2번씩
            int Pos=randPos();  // 아직 안뽑힌 자리를 찾아서
            int x=convX(Pos);  // 그곳에 동물 번호를 배정
            int y=convY(Pos);
            animal[x][y]=i;
        }
    }
}

int randPos()
{
    while(1){  // 다 채워질 때까지 반복해야 함.
        int Pos=rand() % 20;  // 0~19
        int x=convX(Pos);
        int y=convY(Pos);
        if(animal[x][y]==-1){
            return Pos;
        }
    }
    return 0;
}

int convX(int num)
{
    return num/5;
}

int convY(int num)
{
    return num%5;
}

void preview()
{
    printf("\n\n잠깐 동안 카드의 순서를 기억해두세요!\n\n");
    for(int i=0;i<4;i++){
        for(int j=0; j<5; j++){
            printf("%12s", animalName[animal[i][j]]);
        }
        printf("\n");
    }
}

void question()
{
    printf("\n\n\n");
    int number=0;
    for(int i=0;i<4;i++){
        for(int j=0; j<5; j++){
            if(check[i][j]!=0)
                printf("%15s",animalName[animal[i][j]]);
            else
                printf("%9d", number);
            number++;
        }
        printf("\n");
    }
}

int finish()
{
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
            if(check[i][j]==0)
                return 0;
            // ==1이 아니라 ==0으로 해줘야 함
            // 하나라도 맞추지 못한게 있으면 찾아야 하기 때문이다.
        }
    }
    return 1;
}

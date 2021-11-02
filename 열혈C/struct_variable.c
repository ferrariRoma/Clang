//
//  struct_variable.c
//  열혈C
//
//  Created by 안동규 on 2021/11/02.
//

#include <stdio.h>

typedef struct {
    int xpos;
    int ypos;
} Point;

void ChangePos(Point *pos1, Point *pos2)
{
    Point pos3;
    pos3.xpos = pos1->xpos;
    pos3.ypos = pos1->ypos;
    printf("함수 내 pos3에 pos1 주소 복사 : %d, %d\n",pos3.xpos,pos3.ypos);
    printf("함수 내 pos2 : %d, %d\n",pos2->xpos,pos2->ypos);
    pos1->xpos = pos2->xpos;
    pos1->ypos = pos2->ypos;
    pos2->xpos = pos3.xpos;
    pos2->ypos = pos3.ypos;
    printf("함수 내 pos2에 pos3 주소 복사 : %d, %d\n",pos2->xpos,pos2->ypos);
    printf("함수 내 pos1에 pos2 주소 복사 : %d, %d\n",pos1->xpos,pos1->ypos);
}

void ChangePosSecond(Point *pos1, Point *pos2)
{
    Point temp;
    temp=*pos1;
    *pos1=*pos2;
    *pos2=temp;
}

int main()
{
    Point pos1 = {1,2};
    Point pos2 = {3,4};
    ChangePos(&pos1, &pos2);
    printf("pos1 : %d, %d\n",pos1.xpos,pos1.ypos);
    printf("pos2 : %d, %d\n",pos2.xpos,pos2.ypos);
    
    ChangePosSecond(&pos1,&pos2);
    printf("pos1 : %d, %d\n",pos1.xpos,pos1.ypos);
    printf("pos2 : %d, %d\n",pos2.xpos,pos2.ypos);
    
    // feedback
    // 어렵게 생각할게 없다. second는 훨씬 간결하게 진행이 되는데
    // 구조체끼리 대입연산을 진행하면 멤버 대 멤버의 복사가 이뤄짐을
    // 이용하자!
    
    return 0;
}

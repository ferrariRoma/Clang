//
//  question-twenty-three-two.c
//  열혈C
//
//  Created by 안동규 on 2021/11/09.
//  열혈 488p 문제

typedef struct point {
    int xpos;
    int ypos;
} Point;

typedef struct rectangle {
    Point ul;  // 좌상단
    Point lr;  // 우하단
} Rectangle;
//  잘 나타내었지만 문제에서는 구조체Point를 이용하여
//  구조체Rectangle을 정의하라고 하였음.
//  그리고 그걸 통하여 위치를 구하는 것이기 때문에 오답임.

#include <stdio.h>
#include <stdlib.h>

int GetSize(Point spot1, Point spot2);
void GetEachPoint(Point point1,Point point2);

int main_question_twenty_three_two()
{
    int x=0, y=0, size;
    Point pos1;
    Point pos2;
//    printf("첫번째 지점 x,y좌표를 입력하세요 : ");
//    scanf("%d %d",&pos1.xpos,&pos1.ypos);
//    getchar();
//    printf("두번째 지점 x,y좌표를 입력하세요 : ");
//    scanf("%d %d",&pos2.xpos,&pos2.ypos);
//    size = GetSize(pos1,pos2);
//    GetEachPoint(pos1,pos2);
//    printf("\n\n사각형의 크기 : %d\n\n",size);
//
    Rectangle angle1={
        {1,1},
        {5,3}
    };
    
    printf("\n\n(%d,%d)\n(%d,%d)\n(%d,%d)\n(%d,%d)\n\n",
           angle1.ul.xpos,angle1.ul.ypos,
           angle1.ul.ypos,angle1.lr.xpos,
           angle1.lr.xpos,angle1.lr.ypos,
           angle1.ul.xpos,angle1.lr.ypos);
    // 위의 사각형을 기반으로 해야함!
    
    return 0;
}

int GetSize(Point spot1, Point spot2)
{
    int gap_x;
    int gap_y;
    int size;
    
    gap_x = spot1.xpos-spot2.xpos;
    gap_y = spot1.ypos-spot2.ypos;
    size = abs(gap_x * gap_y);
    
    return size;
}

void GetEachPoint(Point point1,Point point2)
{
    printf("\n\n다른 두 점\n(%d, %d)\n(%d, %d)\n\n",point1.xpos,point2.ypos,point2.xpos,point1.ypos);
}

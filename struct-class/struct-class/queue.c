//
//  queue.c
//  struct-class
//
//  Created by 안동규 on 2021/12/21.
//

#include <stdio.h>

#define QUEUE_SIZE 5

typedef int element;
element queue[QUEUE_SIZE];
int front = -1;
int rear = -1;

void addQueue(int *rear, element item);
element deleteQueue(int *front, int rear);

int main_queue(void)
{
    
    return 0;
}

void addQueue(int *rear, element item){
    // 큐가 만원 상태인지 검사한다.
    if(*rear==QUEUE_SIZE-1){
        printf("Queue is Full\n");
        return;
    }
    // 만원이 아니면 queue를 1 증가시키고
    // item 할당
    queue[++(*rear)]=item;
    return;
}

element deleteQueue(int *front, int rear){
    if(*front==rear){
        printf("Queue is Empty\n");
        return -1;
    }
    return (queue[++(*front)]);
}


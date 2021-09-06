//
//  review.cpp
//  codingdojang
//
//  Created by 안동규 on 2021/09/04.
//  이번에는 이중 연결 구조체에 대해서 배워보겠다.
//  이중 연결 구조체와 관련해서 몇 개의 글을 스키밍 하다 보니까
//  tail의 next가 head를 가리키는 원형 구조체도 있지만
//  그냥 단절되어 있는 체인형 구조체도 있었다.
//  지금 내가 배우는 것은 체인형으로 파악됨.

#include <stdio.h>
#include <stdlib.h>

typedef struct NODE{
    struct NODE *next;
    struct NODE *prev;
    int num;
}node;

node *head;
node *tail;

// 노드 초기화
void initNode(void)
{
    head=malloc(sizeof(head));
    tail=malloc(sizeof(head));
    head->prev=head;
    head->next=tail;
    tail->prev=head;
    tail->next=tail;
}

// 새 노드 생성 및 삽입
// 오름차순으로 배치할 수 있도록 하자
node *newNode(int number)
{
    node *curr=head->next;
    // 기준노드의 멤버값이 작은 동안에만 반복, 같거나 기존노드가 더 커지면 탈출
    while(curr->num<number && curr!=NULL){
        curr=curr->next;
    }
    node *newNode=malloc(sizeof(node));
    newNode->num=number;
    curr->prev->next=newNode;
    newNode->prev=curr->prev;
    newNode->next=curr;
    curr->prev=newNode;
    
    return newNode;
}

// 노드 검색함수
node *searchNode(int number)
{
    int count=0;
    node *curr=head->next;
    while(curr!=NULL){
        count++;
        if(curr->num==number){
            printf("\n\n찾는 수는 %d번째에 있는 %d 입니다.\n\n", count, curr->num);
            return curr;
        }
        curr=curr->next;
    }
    if(curr==NULL){
        printf("\n찾는 값이 없습니다.\n\n");
    }
    return 0;
}

// 노드 삭제함수
// 숫자를 검색해서 해당 숫자의 노드를 삭제시키자
void deleteNode(int number)
{
    node *curr=searchNode(number);
    if(curr!=tail){  // 굳이 tail을 따질 필요가 없지 않을까..
        curr->prev->next=curr->next;
        curr->next->prev=curr->prev;
        free(curr);
    }
}

// 다른 방식의 노드 생성 및 삽입함수
// 앞에서는 오름차순의 생성방식을 구현해보았다면 이번에는 숫자를 검색하고
// 그 숫자를 가지는 노드 앞에 넣어주는 함수를 만들어 보자.
node *getNode(int number, int standard)
{
    node *curr=searchNode(standard);
    node *newNode=malloc(sizeof(node));
    newNode->num=number;
    // if(curr!=tail)을 생략해보자.
    curr->prev->next=newNode;
    newNode->prev=curr->prev;
    newNode->next=curr;
    curr->prev=newNode;
    
    return newNode;
}

int main(void)
{
    int num=0;
    int answer[5]={0,};
    initNode();  // 노드 초기화
    node *newOne=NULL;
    
    printf("숫자 5개를 입력해주세요 : ");
    for(int i=0;i<5;i++){
        scanf("%d ",answer+i);
        newOne=newNode(*(answer+i));
    }
    
    node *curr=head->next;
    while(curr!=tail){
        printf("%d ", curr->num);
        curr=curr->next;
    }
    
    printf("\n노드 하나를 찾아봅시다!\n숫자하나를 입력해주세요 : ");
    scanf("%d", &num);
    searchNode(num);

    printf("\n\n이번에는 노드 하나를 삭제시켜봅시다!\n");
    scanf("%d", &num);
    deleteNode(num);
    
    printf("\n삭제시킨 결과를 한 번 확인해볼게요!\n");
    curr=head->next;
    while(curr!=tail){
        printf("%d ", curr->num);
        curr=curr->next;
    }
    
    printf("\n노드를 메모리를 해제할 시간이에요.\n");
    curr=head->next;
    while(curr!=tail){
        node *temp=curr->next;
        printf("%d\n", curr->num);
        curr->prev->next=curr->next;
        curr->next->prev=curr->prev;
        free(curr);
        curr=temp;
    }
    free(head);
    free(tail);
    head=NULL;
    tail=NULL;
    
    return 0;
}

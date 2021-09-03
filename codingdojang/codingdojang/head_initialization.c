//
//  headnode_initialization.cpp
//  codingdojang
//
//  Created by 안동규 on 2021/09/01.
//  코딩도장에서 존재를 알게된 머리 노드 생성(연결 리스트 초기화) 함수 검색 및 내용 자습
//  Created by 안동규 on 2021/09/02.
//  공부한 내용 다른 곳에 복습하고, 그곳에서 발전시킨 내용 여기 원래 내용 지우고 바로 다시 복습

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct body{
    struct body *next;
    char nameTable[100];
}node;

typedef struct top{
    node *head;
    char nameTable[100];
}top;

// 노드 생성함수
node *getNode()
{
    node *newnode=malloc(sizeof(node));
    newnode->next=NULL;

    return newnode;
}

// 헤드 노드 생성 및 초기화
top *initNode()
{
    top *list=malloc(sizeof(top));
    list->head=getNode();  // node *head=NULL;

    return list;
}

// 새 노드를 생성하고 삽입하는 함수
void insert(top *list, char name[])
{
    node *newnode=getNode();
    stpcpy(newnode->nameTable, name);

    if(list->head->next==NULL){
        newnode->next=NULL;
        list->head->next=newnode;
    }
    else{
        newnode->next=list->head->next;
        list->head->next=newnode;
    }
}

// 노드검색함수
void search(top *list, char name[])
{
    int count=0;

    if(list->head->next==NULL){
        printf("\n데이터가 비어있습니다.\n\n");
    }
    else{
        node *curr=list->head;
        while(curr!=NULL){
            int cpr=strcmp(curr->nameTable, name);
            if(cpr==0){
                printf("\n검색하신 메뉴 : %s\n%d번째 메뉴입니다.\n\n",curr->nameTable,count);
                return;
            }
            else{
                curr=curr->next;
            }
            count++;
        }
        if(curr==NULL){
            printf("\n찾으시는 메뉴가 없습니다. 다시 입력해주세요\n\n");
        }
    }
}

void removeNode(top *list, char name[])
{
    if(list->head->next==NULL){
        printf("\n데이터가 비어있습니다.\n\n");
    }
    else{
        node *curr=list->head;
        node *reNode=NULL;
        while(curr!=NULL){
            int cpr=strcmp(curr->next->nameTable, name);
            if(cpr==0){
                reNode=curr->next;
                curr->next=curr->next->next;
                free(reNode);
                return;
            }
            curr=curr->next;
        }
        if(curr==NULL){
            printf("\n찾으시는 메뉴가 없습니다. 다시 입력해주세요.\n\n");
        }
    }
}

// 노드를 출력하는 함수
void printNode(top *list)
{
    if(list->head->next==NULL){
        printf("출력할 데이터가 없습니다.\n");
    }
    else{
        node *curr=list->head;
        while(curr!=NULL){
            printf("%s\n",curr->nameTable);
            curr=curr->next;
        }
    }
}


int main(void)
{
    top *head=initNode();
    insert(head, "짜장면");
    insert(head, "팔보채");
    insert(head, "탕수육");

    printf("\n최초 메뉴확인\n\n");
    printNode(head);

    search(head, "팔보채");

    removeNode(head, "팔보채");
    printf("\n팔보채 취소 메뉴확인\n\n");
    printNode(head);

    node *curr=head->head->next;
    while(curr!=NULL){
        node *currNext=NULL;
        printf("\n메모리 해제될 메뉴 : %s\n\n",curr->nameTable);
        currNext=curr->next;
        free(curr);
        curr=currNext;
    }
    free(head);
    
    return 0;
}

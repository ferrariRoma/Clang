//
//  stack.c
//  struct-class
//
//  Created by 안동규 on 2021/12/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tagNode{
    char Data[20];
    struct tagNode *nextNode;
}NODE;

typedef struct tagStack{
    NODE *Base;
    NODE *Top;
}STACK;

// 스택 생성
void CreateStack(STACK** Stack)
{
    (*Stack) = (STACK*)malloc(sizeof(STACK));
    (*Stack)->Base = NULL;  // Base, Top 초기화
    (*Stack)->Top = NULL;
}

// 노드 생성
NODE* CreateNode(char Data[])
{
    NODE* NewNode = (NODE*)malloc(sizeof(NODE));
    strcpy(NewNode->Data, Data);
    NewNode->nextNode = NULL;
    return NewNode;
}

// 새 노드 생성 및 스택에 PUSH!
void Push(STACK* Stack, char Data[])
{
    NODE* NewNode = CreateNode(Data);
    if(Stack->Base == NULL){
        Stack->Base=NewNode;
    } else {
        Stack->Top->nextNode = NewNode;
    }
    Stack->Top = NewNode;
}

// while로 Top직전 노드 찾아서 pop!
NODE* Pop(STACK* Stack)
{
    NODE* tempPop = Stack->Top;
    if(Stack->Base == Stack->Top){
        Stack->Base = NULL;
        Stack->Top = NULL;
    } else {
        NODE* current = Stack->Base;
        
        while(current->nextNode!=Stack->Top&&current!=NULL){
            current = current->nextNode;
        }
        
        current->nextNode = NULL;
        Stack->Top = current;
    }
    
    return tempPop;
}

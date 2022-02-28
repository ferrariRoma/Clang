//
//  stack.c
//  struct-class
//
//  Created by 안동규 on 2021/12/21.
//

//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct tagNode{
//    char Data[20];
//    struct tagNode *nextNode;
//}NODE;
//
//typedef struct tagStack{
//    NODE *Base;
//    NODE *Top;
//}STACK;
//
//// 스택 생성
//void CreateStack(STACK** Stack)
//{
//    (*Stack) = (STACK*)malloc(sizeof(STACK));
//    (*Stack)->Base = NULL;  // Base, Top 초기화
//    (*Stack)->Top = NULL;
//}
//
//// 노드 생성
//NODE* CreateNode(char Data[])
//{
//    NODE* NewNode = (NODE*)malloc(sizeof(NODE));
//    strcpy(NewNode->Data, Data);
//    NewNode->nextNode = NULL;
//    return NewNode;
//}
//
//// 새 노드 생성 및 스택에 PUSH!
//void Push(STACK* Stack, char Data[])
//{
//    NODE* NewNode = CreateNode(Data);
//    if(Stack->Base == NULL){
//        Stack->Base=NewNode;
//    } else {
//        Stack->Top->nextNode = NewNode;
//    }
//    Stack->Top = NewNode;
//}
//
//// while로 Top직전 노드 찾아서 pop!
//NODE* Pop(STACK* Stack)
//{
//    NODE* tempPop = Stack->Top;
//    if(Stack->Base == Stack->Top){
//        Stack->Base = NULL;
//        Stack->Top = NULL;
//    } else {
//        NODE* current = Stack->Base;
//
//        while(current->nextNode!=Stack->Top&&current!=NULL){
//            current = current->nextNode;
//        }
//
//        current->nextNode = NULL;
//        Stack->Top = current;
//    }
//
//    return tempPop;
//}
//
//// Pop함수와 함께 사용
//void PrintNode(NODE* Node)
//{
//    printf("pop: %s\n", Node->Data);
//    free(Node);
//}
//
//// 스택이 비었는지 확인
//int IsEmpty(STACK* Stack)
//{
//    return (Stack->Base == NULL);
//}
//
//int main(void)
//{
//    STACK* Stack;
//    int i;
//
//    CreateStack(&Stack);
//
//    Push(Stack, "짜장면");
//    Push(Stack, "짬뽕");
//    Push(Stack, "군만두");
//    PrintNode(Pop(Stack));
//    PrintNode(Pop(Stack));
//
//    Push(Stack, "탕수육");
//    Push(Stack, "팔보채");
//
//    while(1)
//    {
//        if(IsEmpty(Stack)) break;
//        PrintNode(Pop(Stack));
//    }
//    return 0;
//}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 노드 구조체
typedef struct Node{
    char data[20];
    struct Node* NextNode;
} NODE;

// 스택 구조체
typedef struct Stack{
    NODE* Top;
    NODE* Bass;
} STACK;

// 초기화
void InitStack(STACK** Stack)
{
    (*Stack)->Top = NULL;
    (*Stack)->Bass = NULL;
}

NODE* CreateNode(char Data[])
{
    NODE* NewNode = (NODE*)malloc(sizeof(NODE));
    strcpy(NewNode->data,Data);
    NewNode->NextNode = NULL;
    return NewNode;
}

void Push(STACK* Stack, char Data[])
{
    NODE* NewNode = CreateNode(Data);
    if(Stack->Bass == NULL){
        Stack->Bass = NewNode;
    } else{
        Stack->Top->NextNode = NewNode;
    }
    Stack->Top = NewNode;
}

// Pop함수
NODE* Pop(STACK* Stack)
{
    NODE* deletedNode = Stack->Top;
    
    // 빈 스택에 Pop했을 때
    if(Stack->Bass == NULL){
        return 1;
    }
    
    // 노드가 하나 밖에 없는 스택, 여러 개인 스택
    if(Stack->Bass == Stack->Top){
        Stack->Top = NULL;
        Stack->Bass = NULL;
    } else {
        NODE* temp = Stack->Bass;
        while(temp->NextNode != Stack->Top && temp != NULL){
            temp = temp->NextNode;
        }
        temp->NextNode = NULL;
        Stack->Top = temp;
    }
    
    return deletedNode;
}

int main(void)
{
    return 0;
}

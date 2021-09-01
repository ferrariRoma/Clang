// 코딩도장 74.5연습문제 '특정 노드 검색하기'

#include <stdio.h>
#include <stdlib.h>


typedef struct NODE{
    struct NODE *next;
    int data;
}node;

void addFirst(node *target, int data)
{
    if(target == NULL)
        return;

    node *newNode = malloc(sizeof(node));
    if(newNode == NULL)
        return;
    newNode->next = target->next;
    newNode->data = data;

    target->next = newNode;
}


// 노드 검색하는 함수 노드 구조체 설정
node *findNode(node *target, int data)
{   // 첫번째 인자로는 기준이 될 헤드노드를 입력하고,
    // 그 다음에는 찾을 data값을 입력한다.
    if(target == NULL)  // 헤드노드가 NULL이면,
        return NULL;  // 함수를 끝냄.
    node *curr = target->next;  // 첫번째 노드를 가리키는 주소를 포인터 curr에 할당
    while(curr != NULL)
    {
        if(curr->data == data)  // 첫번째 노드의 데이터가 찾으려는 데이터인가?
            return curr;  // 맞으면 첫번째 노드의 주소를 리턴
        
        curr = curr->next;  // 아니면 다음으로
    }

    return NULL;
    // 만약 반복문이 끝나도록 찾지 못했거나
    // 헤드노드(기준노드가) 처음부터 NULL이면 NULL을 반환.
}


int main_linkedlist_practice()
{
    // 특정 노드 검색하기!
    node *head = malloc(sizeof(node));
    head->next = NULL;

    addFirst(head,10);
    addFirst(head,20);
    addFirst(head,30);

    int num1;
    printf("무슨 값을 찾고 싶습니까?");
    scanf("%d", &num1);

    node *found = findNode(head,num1);
    // 포인터 found에는 findnode에서 반환된 주소 혹은 NULL값이 저장.
    printf("%d\n", found->data);  // 20이 반환되어야 함.

    node *curr = head->next;
    while(curr != NULL)
    {
        node *next = curr->next;
        free(curr);
        curr = next;
    }

    free(head);



    // 해설
/*
    단일 연결 리스트는 특정 노드를 찾으려면
    첫 번째 노드부터 마지막 노드까지 차례대로 검색해야 한다.
    따라서 반복문을 이용해서 NULL이 아닐때까지, if(curr->data=data)와 같이
    현재 노드의 데이터와 매개변수로 받은 데이터를 비교하여 같으면 현재 노드를 반환하고
    다르면 다음 노드로 넘어가면 됩니다.
     */

    return 0;
}

// 코딩도장의 단일 연결리스트 공부
// malloc_and_list 파일에서 이어짐

#include <stdio.h>
#include <stdlib.h>


typedef struct NODE{
    struct NODE *next;
    int data;
}node;

void addFirst(node *target,int data)
{
    if(target == NULL)  // 헤드노드가 NULL이면
        return;  // 함수를 끝냄.

    node *newNode = malloc(sizeof(node));
    if(newNode == NULL)  // 메모리 할당에 실패하면
        return;  // 함수를 끝냄.

    newNode->next=target->next;
    newNode->data=data;

    target->next=newNode;
}

void removeFirst(node *target)
{
    if(target == NULL)  // 헤드노드가 NULL이면
        return;  // 함수를 끝냄.

    // head node1 node2 node3 NULL 순서라고 가정한다면
    node *removeNode=target->next;  // node1을 가리키는 주소를 넣어주고
    if(removeFirst == NULL)  // 삭제할 노드가 NULL이면
        return;  // 함수종료.
    target->next=removeNode->next;  // target->next=node2주소

    free(removeNode);  // node1 메모리 해제
    // 노드 추가 함수에서 마지막에 반복문을 통해 메모리 해제할 때처럼
    // node1을 삭제시켜버리면 head와의 연결고리가 끊어지는 것이므로
    // node1의 주소를 포인터 removeNode에 저장시켜두고
    // 저장된 node1의 주소를 이용하여 head와 node2를 이어준 다음
    // node1의 메모리를 해제!
}

int main_linkedlist()
{
    /*
    // malloc_and_list 파일 마지막에 했던
    // 단일 연결리스트 복습



    // 기존 노드 구조체 선언
    struct NODE{
        struct NODE *next;
        int data;
    }

    // 그 다음 노드 추가 함수 선언
    void addFirst(struct NODE *target, int data)
    // addFirst라는 함수를 선언 하는데,
    // 인자에 2개가 있음. 각각,
    // struct NODE *target = struct NODE *next
    // int data = int data
    // 요소와 같음!
    {
        // 각 인자에 대한 상세한 설정
        struct NODE *newNode = malloc(sizeof(struct NODE));  // struct NODE 크기 만큼의 힙 메모리 할당
        newNode->next = target->next;  // 새 노드와 기준 노드의 next를 연결하자!
        int data = data;  // data변수의 값으로!

        target->next = newNode;  // 헤드노드의 next를 새로운 노드로 변경!
        // 원래 노드 구조체에서 head->next = node1;
        // 라고 주소를 처음에 정해준다는 것을 기억하면 이해하기 편할듯!
        // 즉, addFirst(어디뒤에다가 함수를 추가할건지, data멤버에 숫자 몇을 넣을 건지)에 대한 함수
    }


    struct NODE *head = malloc(sizeof(struct NODE));
    head->next = NULL;

    addFirst(head,10);
    addFirst(head,20);
    addFirst(head,30);

    // 제대로 값이 들어갔는지를 확인하기 위해서
    // curr이란 노드 구조체에 head->next를 입력!
    // head->next는 원래 구조체에서 head->next = node1;
    // 라고 지정해둔다는 것을 기억하면 무엇을 뜻하는지 알기 쉬움!
    // 첫번째 노드를 지칭해준다고 이해하면 됨.
    // 다시 말하면, struct NODE *curr에는 node1의 주소가 들어감.
    // 반복문에 있는 curr->next는 node1->next가 들어가겠지?
    // 그럼 그 값은 node2가 되겠지? 그러면 NULL값이 나오기 전까지는
    // 반복이다~
    struct NODE *curr = head->next;
    while(curr!=NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");

    // 이거는 curr에 다시 첫 노드 주소를 넣고
    // 반복문을 통해서 할당된 메모리를 해제하기 위한 작업
    curr = head->next;  // 첫번째 노드 주소
    while(curr!=NULL)
    {
        struct NODE *next = curr->next;  // *next에 첫번재 노드의 next에 저장된 주소를 저장
        free(curr);  // free(node1);
        curr = next;  // next에 저장해둔 다음 노드의 주소를 curr에 할당.
    }

    free(head);  // 마지막으로 헤드노드 메모리를 해제.
     */





    // 본진도
    // 코딩도장 74.3 노드 삭제 함수 만들기

    // 노드 추가 함수가 있으면 삭제 함수도 있다~
    // 노드 삭제 함수는 특정 노드를 삭제하고 남은 노드를
    // 서로 연결시켜주는 방식임.

    node *head = malloc(sizeof(node));  // 헤드노드 설정
    head->next = NULL;  // 헤드노드 다음은 아직까지는 NULL임~

    addFirst(head,10);  // 노드 추가 함수를 사용해서 3개의 노드를 추가
    addFirst(head,20);
    addFirst(head,30);

    removeFirst(head);  // 헤드노드 뒤에 있는 노드를 지워주세요! 30 날라가겠지?

    node *curr = head->next;  // 노드 순환용 포인터curr에 첫번째 노드 주소 할당
    while(curr != NULL)
    {
        printf("%d ", curr->data);  // 정말로 삭제가 되었는지 확인을 해보자.
        curr = curr->next;
    }
    printf("\n");

    // 나머지 노드들의 메모리 해제 절차
    curr = head->next;  // 다시 포인터에 첫번째 노드 주소 저장. 20주소겠지?
    while(curr != NULL)
    {
        node *next = curr->next;  // 20을 날리기 전에 10의 주소를 next에 저장
        free(curr);
        curr = next;  // 10의 주소를 저장.
    }

    free(head);


    /*
    연결 리스트 함수를 구현할 때는 노드가 NULL인지 검사를 해야함.
    특히나 실무에서는 반드시 해주어야 함.
    참고자료를 보니까 malloc을 할당해줄때 반드시 하는구나.
     */

    return 0;
}

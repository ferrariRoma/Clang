// 코딩도장 74.6 심사문제 '특정 노드 삭제하기'

/* 
지금까지 기준 노드의 다음 노드를 삭제했음.
이번 문제는 특정 데이터가 있는 노드를 삭제하는 문제임.
먼저 특정 노드를 삭제하려면 첫 노드부터 마지막 노드까지 검색하면서
특정 데이터가 들어있는 노드를 삭제하면 된다.

따라서 다음과 같은 직전 노드의 포인터를 prev에 저장,
그리고 삭제할 노드를 발견하면 직전 노드의 다음 노드인 prev->next에
현재 노드의 다음 노드 curr->next를 넣고
현재 노드를 해제하면 된다.

일단 개념 중에서 직전 노드의 포인터를 어떻게 설정하고
그것을 이용할 것인지에 대해서 감이 잘 안잡혔음.
 */


#include <stdio.h>
#include <stdlib.h>


struct NODE{
    struct NODE *next;
    int data;
};

void addFirst(struct NODE *target, int data)
{
    // 헤드노드가 NULL이 아닌지 확인
    if(target == NULL)
        return;
    
    // 새 노드 메모리할당
    struct NODE *newNode = malloc(sizeof(struct NODE));  
    // 메모리가 잘 할당됐는지 확인
    if(newNode == NULL)
        return;

    newNode->next = target->next;
    newNode->data = data;
    
    target->next = newNode;
}

void removeNode(struct NODE *target, int data)
{
    // 기준노드가 NULL이 아닌지 먼저 확인을 해주자.
    if(target == NULL)
        return;
    
    // 노드 구조체의 포인터 변수를 2개 선언해주어야 하는데,
    // 하나는 현재 노드의 주소를 저장해줄 포인터고,
    // 다른 하나는 이전 노드의 주소를 저장해줄 포인터이다.
    struct NODE *curr = target;  // 입력받은 첫번째 파라미터를 curr에 저장
    struct NODE *prev = NULL;  // 직전 노드의 포인터를 저장할 prev! NULL로 초기화

    while(curr != NULL)
    {
        if(curr->data == data)  // 만약 삭제할 노드를 발견하면
        {
            // head node1 node2 node3 NULL에서 node2가 curr이라고 한다면,
            prev->next = curr->next;
            // prev에 next멤버 값으로 node3이 있을 curr의 next 값을 할당해준다.
            free(curr);  // 이후 현재 노드는 삭제!
            return;  // 함수 종료.
        }
        
        prev = curr;  // 삭제가 되면 이전공간을 현재로,
        curr = curr->next; // 현재공간을 다음으로 넘기자.
        // prev curr next
        // curr next
        // 이런 형태가 되도록!
    }
}

int main_linked_list_remove_node()
{
    int numArr[10] = {0, };  // 0으로 초기화. 
    int removeNum;

    printf("노드 추가 함수에 넣을 값을 입력해주세요!");
    scanf("%d %d %d %d %d %d %d %d %d %d",
     &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4],
      &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]);

    printf("몇 번째 노드를 제거할까요?");
    scanf("%d", &removeNum);

    struct NODE *head = malloc(sizeof(struct NODE));
    if(head == NULL)  // 제대로 메모리가 할당되었는지 확인!
        return 1;

    // 예제에서는 배열과 반복문을 이용해서 노드추가 함수에 값을 할당해줌.
    for(int i=0; i<10; i++){
        addFirst(head, numArr[i]);
    }

    // 제거할 노드 구조체를 입력받은 removeNum을 이용해서 제거해주자.
    removeNode(head, removeNum);
    // 처음에 removeNum+1 했다가 -1을 해주었는데
    // 배열을 없애는 것이었다면 +1을 하는게 맞지만
    // 이건 노드기 때문에 그럴 필요가 애시당초 없었다.
    // 왜냐하면 노드를 추가한 순서대로 없어지는 것이기 때문이다.

    // 순환 노드 포인터를 설정해주자.
    struct NODE *curr = head->next;  // 주소를 저장해둘 노드 구조체
    while(curr!=NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;  // 현재 노드의 다음을 현재 노드주소를 담고 있는 curr에 저장
    }
    printf("\n");
    
    // 이제 나머지 포인터들의 메모리를 해제해주자.
    curr = head->next;
    while(curr != NULL)
    {
        struct NODE *next = curr->next;  // 삭제 전 다음 주소를 잠시 저장해둘 노드 구조체
        // 보면 노드 구조체의 주소는 노드 구조체에만 저장하는구나!
        free(curr);
        curr = next;  // next에 저장되어있는 다음 노드의 주소를 curr에 전달~
    }

    free(head);

    return 0;
}
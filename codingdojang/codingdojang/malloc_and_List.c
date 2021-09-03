// 코딩도장의 35.0의 메모리 사용하기 부분과
// 이어서 연결 리스트 부분 공부

#include <stdio.h>
#include <stdlib.h>  // malloc, free 함수가 선언된 헤더 파일
#include <string.h>  // memset 함수가 선언된 헤더 파일


/* typedef struct NODE{  //연결 리스트의 노드 구조체
    struct NODE *next;  // 다음 노드의 주소를 저장할 포인터
    int data;  // 데이터를 저장할 멤버
} node; */

//struct NODE{  //연결 리스트의 노드 구조체
//    struct NODE *next;  // 다음 노드의 주소를 저장할 포인터
//    int data;  // 데이터를 저장할 멤버
//};
//
//void addFirst(struct NODE *target, int data)
//{
//    struct NODE *newNode = malloc(sizeof(struct NODE));
//    newNode->next = target->next;
//    newNode->data = data;
//
//    target->next = newNode;
//}





int main_malloc()
{
    // 코딩도장 35.0

    /* 포인터 변수는 메모리 주소를 저장하는 방식으로 포인터를 활용
    이번에는 포인터에 원하는 만큼의 메모리 공간을 할당받아 사용하도록 하겠다.
    (주소와 공간)
    그러기 위해서는 메모리를 malloc -> 사용 -> free 패턴으로 사용!
    메모리를 사용하기 위해서는 malloc함수로 사용할 메모리 공간을 확보해야 한다.
    malloc은 Memory ALLOCation의 약자임.
    이때 필요한 메모리 크기를 바이트 단위로 지정.(할당하고 해제하는 함수는
    stdlib에 선언되어 있다.)
    
    포인터 = malloc(크기);
    void *malloc(size_t_Size);
    성공하면 메모리 주소를 반환, 실패하면 NULL을 반환 */

    /* int num1 = 20;
    int *ptr1;
    int *ptr2;

    ptr1 = &num1;
    ptr2 = malloc(sizeof(int));  // int 크기 4바이트만큼 동적 메모리 할당
    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
    printf("ptr1 : %lu, ptr2 : %lu, int : %lu\n", sizeof(ptr1), sizeof(ptr2), sizeof(int)); */

    /* 위 처럼 메모리를 할당해 줄 수 있다.
    주소를 출력해보면 메모리가 할당된 것을 확인할 수 있다.

    이렇게 원하는 시점에서 원하는 만큼 메모리를 할당할 수 있어서
    동적 메모리 할당이라고 부른다.

    이렇게 할당한 메모리는 '반드시' 해제를 해주어야 하는데
    free함수를 사용한다.
    free(포인터);
     void free(void*_Block);

    위에 ptr2에 할당된 메모리를 해제해주기 위해서는 */

    // free(ptr2);

    // 라고 해주어야 한다.






    // 잠깐 스택과 큐, 힙, (순서있는)리스트를 알아보자!

    /* <힙, 스택>
    힙 메모리는 프로그램을 사용할 수 있는 자유 메모리.
    프로그램 실행 시에 함수로 보내는 데이터 등을 일시적으로
    보관해 두는 소량의 메모리와 필요시 언제나 사용할 수
    있는 대량의 메모리가 있다. 이때, 소량의 메모리를
     '스택'이라 하고 대량의 메모리를 '힙'이라 한다.
     이 '힙'이 부족해지면 메모리 부족으로
     '이상 종료'하게 된다.

    스택과 힙의 큰 차이점은 메모리 해제에 있음.
    스택에 생성된 변수는 사용한 뒤 따로 처리를
    해주지 않아도 되지만 malloc 함수를 사용하여
    힙에서 할당한 메모리는 반드시 해제를 해주어야 함.
    따라서 free함수를 사용함.
    메모리 해제는 선택이 아니라 필수임!

    예제는 별로 하는 일이 없는 간단한 프로그램이지만
    실무에서는 메모리 할당을 매우 자주 해준다.
    따라서 메모리를 할당만 하고 해제를 해주지 않으면
    결국에는 시스템의 메모리가 부족해져서
    운영체제가 프로그램을 강제로 종료시키거나
    메모리 할당에 실패하게 된다.
    특히 메모리를 해제하지 않아 메모리 사용량이
    계속 증가하는 현상을 '메모리 누수'라고 부름. */

     /* <스택과 힙, 그리고 순서가 있는 리스트>
     스택은 삽입과 삭제가 한쪽 끝에서 이루어 지고,
     큐는 삽입과 삭제가 양쪽 끝에서 이루어 짐.
     (순서가있는)리스트는 삽입과 삭제가 아무 곳에서나
     일어난다. */

     /* <동적 데이터의 관리>
     프로그램 실행 중 데이터가 이동을 많이 하면?
     데이터가 움직이지 않으면 검색을 빨리할 수 있음.
     데이터는 삽입, 삭제 연산에 의해 위치와 개수가 변함.
     데이터가 변경되어 위치가 바뀌면 검색을 빨리하기 위한
     재배치를 한다. */





    // 예시 1
    /* 기억장소를 확보하여 데이터를 저장한 뒤
    기억장소를 반납해보자 */

    /* int *pi;
    float *pf;

    pi = (int *)malloc(sizeof(int));  // 메모리 할당
    pf = (float *)malloc(sizeof(float));  // 메모리 할당
    *pi = 1024;  // 역참조 연산을 통해서 값을 저장
    *pf = 3.14;
    printf("int=%d, float=%f\n", *pi, *pf);
    printf("%d, %d\n", sizeof(pi),sizeof(pf));
    // 왜 int와 float가 모두 8바이트로 나오지?ㅜ
    free(pi);  // 힙에 할당된 메모리를 해제!
    free(pf); */

    /* 즉 평소에 하던 포인터는 어떠한 주소에
    그때그때 자료형에 맞는 공간을 할당해주는 것이라면
    malloc은 미리 해당 자료형에 맞는 공간을
    할당해서 그곳에 값을 넣어주는 것임. */



    // 메모리 내용을 한꺼번에 설정하기
    /* long long *ptr = malloc(sizeof(long long));
    memset(ptr, 0x27, 8);  // 각 메모리에 16진수 27을 '모두' 할당!
    // 해당 포인터에, 특정 수를, 몇 바이트 넣겠다~
    // 기억해야 할 것이 memset은 malloc으로 포인터를 지정한 뒤에 사용된다.
    // 포인터 선언을 해주어야 하기 때문!

    printf("0x%llx\n", *ptr);  // 0x는 16진수~
    printf("%lu\n", sizeof(ptr));  // 맥에서는 사이즈를 나타내는 연산에서 %lu를 사용
    free(ptr); */

    /* memset함수는 주로 다음과 같이 설정할 값을 0으로 지정하여
    메모리의 내용을 모두 0으로 만들 때 주로 사용함. */
    // memset(ptr, 0, 8);

    /* 그리고 주로 8처럼 숫자말고 보통은 sizeof()을 그대로 써준다.
    long long *ptr = malloc(sizeof(long long));
    memset(ptr, 0, sizeof(long long)); */

    /* <NULL 포인터!>
    NULL이 들어있는 포인터를 널 포인터라고 하며
    아무것도 가리키지 않는 상태를 뜻합니다.
    따라서 역참조는 할 수 없음!
    실무에서는 다음과 같이 포인터가 NULL인지 확인한 뒤
    NULL이면 메모리를 할당하는 패턴을 주로 사용한다. */







    // 35.6연습문제 : 메모리 할당하기

    /* int *ptr1 = malloc(sizeof(int));
    int *ptr2 = malloc(sizeof(long long));
    free(ptr1);
    free(ptr2); */






    // 코딩도장 74.0 연결 리스트 구현하기

    /* 프로그래밍에서 빼놓을 수 없는 부분이 자료구조인데
    간단하면서도 널리 쓰이는 연결 리스트를 구현해보자.

    연결리스트는 데이터가 담긴 '노드(메모리 공간)를
    일렬로 연결'해놓았다고 해서 '연결 리스트'라고 부름.
    특징으로는,
    1. 리스트의 중간 지점에 노드를 손쉽게 추가하거나,
    삭제할 수 있음.
    2. 특정 노드를 찾으려면 노드를 모두 검색해야 함.(최악)
    3. 크기가 고정되어 있지 않음.

    다른 노드를 가리키는 포인터가 하나씩만 있는 것을
    '단일 연결 리스트'라고 한다.

    main함수 위에 선언해둔 구조체를 보면 아래와 같다. */


    // struct NODE{  //연결 리스트의 노드 구조체
    //     struct NODE *next;  // 다음 노드의 주소를 저장할 포인터
    //     int data;  // 데이터를 저장할 멤버
    // };
    
    // next에는 node구조체로 만든 다른 Node의 메모리 주소를 저장한다는 의미.

    /* NODE 구조체에서 가장 중요한 부분은 struct NODE *next; 임.
    얼핏 보면 구조체 자기 자신의 포인터를 멤버로 가지고 있는 모습임.
    하지만 next에는 NODE구조체로 만든 다른 노드의 메모리 주소를 저장함.
    즉, 자기 자신이 아니라 다른 노드의 메모리 주소를 저장!

    NODE구조체에서 데이터는 int형 하나만 저장했는데,
    실제로는 용도에 따라서 다양한 자료형으로 된 멤버 여러 개를 넣으면 됨.
    
    이제 단일 연결 리스트에서 노드의 종류를 알아보겠음.
    노드는 역할에 따라서 두 가지로 나눔.
    
    머리노드 : 단일 연결 리스트의 기준점이며 헤드라고도 부름.
             머리 노드는 첫 번째 노드를 가리키는 용도로 데이터를 저장하지 않음.
    노드 : 단일 연결 리스트에서 데이터가 저장되는 실제 노드임.

    이 두 종류의 노드는 역할만 다를 뿐 모두 NODE구조체를 사용함.
    이제 NODE구조체로 머리 노드를 만든 뒤 노드가 2개인 연결 리스트를 만들어 보겠음.
    그림으로 표현하면,
    head -> node1 -> node2 -> NULL과 같은 모양임. */


    /* struct NODE *head = malloc(sizeof(struct NODE));
    // 머리 노드 생성
    // 머리 노드는 데이터를 저장하지 않음
    // 머리노드의 모양을 보면 포인터 변수임
    // 머리노드 멤버인 next에는 malloc을 이용하여 노드구조체 만큼의 힙 메모리를 할당함.

    struct NODE *node1 = malloc(sizeof(struct NODE));  // 첫 번째 노드 생성
    head->next = node1;  // 머리 노드 다음은 첫 번째 노드
    node1->data = 10;  // 첫번째 노드에 10을 저장
    // 헤드에서 node1로 next를 이용해서 이어준다.(헤드 다음은 노드1)
    // 그 노드1의 데이터에 10을 저장
    // 헤드 포인터 변수의 next포인터 멤버에 다음주소 node1을 저장
    // *********아하! 첫번째 노드가 생성되고 나서
    // 그 전 노드(헤드노드)의 next에 첫번째 노드의 주소를 저장해주는거구나!!!

    struct NODE *node2 = malloc(sizeof(struct NODE));  // 두 번째 노드 생성
    node1->next = node2;  // 노드1 다음은 노드2
    node2->data = 20;  // 노드2의 데이터에는 20을 저장

    node2->next = NULL;  // 노드2 다음은 널값(단일 리스트 종료)

    struct NODE *curr = head->next;  // 연결 리스트 순회용 포인터에 첫 번째 노드의 주소 저장
    // 위에 head부분에 head->next = node1; 이라고 해두었음~ 고로 위는 첫 번째 노드의 주소를 저장한 것임.
    while(curr != NULL)  // 비어있지 않다면
    {
        printf("%d ", curr->data);  // 다음 노드의 데이터를 출력
        // 반복문 시작 전 시작문을 보면 node1의 주소를 이어주었으니,
        // 여기서는 curr에 node1이 들어가서 node1->data와 같음.
        curr = curr->next;  // curr에는 다음 노드를 저장!
        // curr에 node1의 주소가 저장되어 있으니,
        // curr = node1->next; 와 같음! 고로 node2의 주소가 저장~
    }
    printf("\n");

    free(node2);  // 노드 메모리 해제
    free(node1);  // 노드 메모리 해제
    free(head);  // 머리 노드 메모리 해제 */



    /* -> 이거는 예전에 구조체 했을때 구조체 포인터 부분에서 봤던거임.
    구조체의 포인터 변수에서 각 멤버에 접근하기 위한 방법.
    노드 구조체의 next라는 포인터 멤버에게
    다음 노드의 주소를 부여한다고 이해를 하자. */

    
    
    // 개인 실험. 노드 구조체에 typedef를 적용시켜보기!

    /* node *head = malloc(sizeof(node));  // 머리노드 선언
    
    node *node1 = malloc(sizeof(node));  // 1번 노드 선언
    head->next = node1;  // 머리노드 next포인터 멤버에 node1 주소 붙이기
    node1->data = 10;  // node1 data에 10 저장
    
    node *node2 = malloc(sizeof(node));
    node1->next = node2;
    node2->data = 20;

    node2->next = NULL;
    
    node *curr = head->next;
    while(curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
    
    free(node2);
    free(node1);
    free(head); */

    // 결론, NODE에도 typedef가 가능하구나~








    // 코딩도장 74.2 노드 추가 함수 만들기

    /* 기존의 노드 구조체 선언 뒤에,
    메인 함수 위에 노드를 추가하는 함수를 선언해보자. */

    // 중간에 느낀건데, 포인터에서 next는 그냥 다음 주소를 가리키는 것 같다.

    /* void addFirst(struct NODE *target, int data)  // 기준 노드 뒤에 노드를 추가하는 함수.
    // 2개의 함수 인자를 가지고 있다. 하나는 *next가 들어가는 곳이고, 하나는 data가 들어가는 곳이다.
    // 즉, 노드 구조체 멤버 2개를 함수 인자로 써준다.
    {
        struct NODE *newNode = malloc(sizeof(struct NODE));  // 새 노드 생성
        newNode->next = target->next;
        // 새 노드의 다음 노드에, 기준 노드의 다음 노드를 지정
        // target을 head라고 이해하면 될 듯?
        // newNode의 *next에 head->next를 넣어주자. 원래 노드 구조체에서 head->next = node1이었음.
        newNode->data = data;
        // 새 노드 데이터 멤버에 데이터 부분의 인자를 저장. addFirst(head, 20); 이라고 하면 20 부분이 저장.

        target->next = newNode;
        // 기준 노드의 다음 노드에 새 노드를 지정
        // 즉, head 뒤에 계속 새 노드가 오도록!
    } */



//    struct NODE *head = malloc(sizeof(struct NODE));
//
//    head->next = NULL;  // 머리 노드의 다음 노드는 없으므로 NULL!
//
//    addFirst(head, 10);  // 머리노드 뒤에 새 노드 저장
//    addFirst(head, 20);
//    addFirst(head, 30);
//
//    struct NODE *curr = head->next;  // 순회용 포인터에 첫번째 노드의 주소 저장
//    while(curr != NULL)  // 포인터가 NULL이 아닐 때 계속 반복
//    {
//        printf("%d ", curr->data);
//        curr = curr->next;
//    }
//    printf("\n");
//
//
//    curr = head->next;
//    while(curr != NULL)
//    {
//        struct NODE *next = curr->next;  // 현재 노드의 다음 주소를 임시로 저장
//        free(curr);  // 현재 노드의 메모리를 해제~
//        curr = next;
//    }
//    
//    free(head);  // 머리 노드 메모리 해제

    // 다음 주소를 임시로 저장해두는 이유는
    // 현재 노드의 메모리를 먼저 해제해버리면 curr->next에
    // 접근을 할 수 없기 때문에 curr->next를 다른 포인터(*next)에
    // 임시로 저장해놓은 뒤 curr을


    return 0;
}

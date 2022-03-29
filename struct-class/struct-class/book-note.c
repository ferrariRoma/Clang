//
//  book-note.c
//  struct-class
//
//  Created by 안동규 on 2022/03/22.
//  287,288p 예제 실습

#include <stdio.h>

struct node {
    struct node* next;
};

struct node* head;
struct node* node_to_delete;
struct node* current = head;
struct node* previous = (struct node*)0;;

int main()
{
    return 0;
}

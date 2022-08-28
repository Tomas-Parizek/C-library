//
// Created by user on 14.8.22.
//

#include "LinkedList.h"

void print_linked_list(struct LinkedList linkedList)
{
    printf("[ ");
    for (struct Node * node = linkedList.head.next; node != NULL; node = node->next)
        printf("%lld ", node->data);
    printf("]\n");
}

void add (struct LinkedList * linkedList, struct Node * node)
{
    linkedList->current->next = node;
    linkedList->current = node;
}

struct Node node_constructor(i64 data)
{
    struct Node node = {data, NULL};
    return node;
}

void linked_list_constructor(struct LinkedList * linkedList, int length, ...)
{
    va_list ap;
    va_start(ap, length);
    linkedList->current = &linkedList->head;

    for (int i = 0; i < length; i++)
    {
        add(linkedList, va_arg(ap, struct Node *));
    }
    va_end(ap);
}

i64 get(i32 position, struct LinkedList * linkedList)
{
    struct Node * node;
    int i;
    for (node = linkedList->head.next, i = 0; i < position; node = node->next, i++);
    return node->data;
}

void set (i32 position, struct LinkedList * linkedList, i64 data)
{
    struct Node * node;
    int i;
    for (node = linkedList->head.next, i = 0; i < position; node = node->next, i++);
    node->data = data;
}

void insert(i32 position, struct LinkedList * linkedList, struct Node * data)
{
    struct Node * node;
    int i;
    for (node = &linkedList->head, i = 0; i < position; node = node->next, i++);
    data->next = node->next;
    node->next = data;
}
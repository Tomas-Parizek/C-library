//
// Created by user on 14.8.22.
//

#include "LinkedList.h"

void printLinkedList(struct LinkedList linkedList)
{
    printf("[ ");
    for (struct Node * node = &linkedList.head; node != NULL; node = node->next)
        printf("%d ", node->data);
    printf("]\n");
}

void add (struct LinkedList * linkedList, struct Node * node)
{
    linkedList->current->next = node;
    linkedList->current = node;
}

struct Node node_constructor(int data)
{
    struct Node node = {data, NULL};
    return node;
}

void linked_list_constructor(struct LinkedList * linkedList, int length, ...)
{
    va_list ap;
    va_start(ap, length);
    linkedList->head = *va_arg(ap, struct Node *);
    linkedList->current = &linkedList->head;

    for (int i = 1; i < length; i++)
    {
        add(linkedList, va_arg(ap, struct Node *));
    }
    va_end(ap);
}
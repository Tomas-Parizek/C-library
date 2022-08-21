//
// Created by user on 14.8.22.
//

#include "LinkedList.h"

void print_linked_list(struct LinkedList linkedList, u8 type)
{
    printf("[ ");
    switch (type) {
        case 0:
            for (struct Node * node = &linkedList.head; node != NULL; node = node->next)
                printf("%lld ", node->data.i);
            break;
        case 1:
            for (struct Node * node = &linkedList.head; node != NULL; node = node->next)
                printf("%llu ", node->data.u);
            break;
        case 2:
            for (struct Node * node = &linkedList.head; node != NULL; node = node->next)
                printf("%lf ", node->data.d);
            break;
        case 3:
            for (struct Node * node = &linkedList.head; node != NULL; node = node->next)
                printf("%p ", node->data.p);
            break;
    }

    printf("]\n");
}

void add (struct LinkedList * linkedList, struct Node * node)
{
    linkedList->current->next = node;
    linkedList->current = node;
}

struct Node node_constructor(B8 data)
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
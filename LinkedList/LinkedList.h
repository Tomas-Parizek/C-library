//
// Created by user on 14.8.22.
//

#ifndef C_LIBRARY_LINKEDLIST_H
#define C_LIBRARY_LINKEDLIST_H

#include <stdio.h>
#include <stdarg.h>

struct Node
{
    int data;
    struct Node * next;
};

struct LinkedList
{
    struct Node head;
    struct Node * current;
};

void print_linked_list(struct LinkedList linkedList);
void add (struct LinkedList * linkedList, struct Node * node);
struct Node node_constructor(int data);
void linked_list_constructor(struct LinkedList * linkedList, int length, ...);

#endif //C_LIBRARY_LINKEDLIST_H

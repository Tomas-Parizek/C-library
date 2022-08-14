//
// Created by user on 14.8.22.
//
#include "LinkedList/LinkedList.h"

int main()
{
    struct Node node0 = node_constructor(25);
    struct Node node1 = node_constructor(50);
    struct Node node2 = node_constructor(-4);
    struct LinkedList linkedList;
    linked_list_constructor(&linkedList, 3, &node0, &node1, &node2);

    printLinkedList(linkedList);
}
//
// Created by user on 14.8.22.
//
#include "../LinkedList/LinkedList.h"
#include "../Types/Types.h"

int main()
{
    struct Node node0 = node_constructor(25);
    struct Node node1 = node_constructor(50);
    struct Node node2 = node_constructor(-4);
    struct Node node3 = node_constructor(12);
    struct Node node4 = node_constructor(100);
    struct LinkedList linkedList;
    linked_list_constructor(&linkedList, 3, &node0, &node1, &node2);
    add(&linkedList, &node3);
    insert(0, &linkedList, &node4);

    print_linked_list(linkedList);
    for (int i = 0; i < 5; i++)
        set(i, &linkedList, 4);
    print_linked_list(linkedList);
}
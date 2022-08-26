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
    insert(3, &linkedList, &node4);

    print_linked_list(linkedList);
    set(2, &linkedList, get(2, &linkedList)*2);
    printf("%lld\n", get(2, &linkedList));
}
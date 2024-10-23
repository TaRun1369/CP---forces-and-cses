#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n\n", ptr->data);
        ptr = ptr->next;
    }
}


int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    // linking nodes
    head->data = 3;
    head->next = second;

    second->data = 4;
    second->next = third;

    // for last terminate the list
    third->data = 65;
    third->next = NULL;
    traversal(head);

    return 0;
}

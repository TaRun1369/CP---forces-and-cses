#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

/* void traversal(struct Node *head)
{
    struct Node* ptr = head;
    printf("Element : %d\n\n", ptr->data);
    ptr = ptr->next;
    while (ptr != head)
    {
        printf("Element : %d\n\n", ptr->data);
        ptr = ptr->next;
    }
}
*/
// better version with do while loop
void traversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element : %d\n\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}

struct Node *insertionathead(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
};

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
    third->next = head;

    printf(" circular linkedlist before insertion\n");

    traversal(head);
    // printf("linkedlist after insertion\n");
    // head = insertatfirst(head,43);
    // traversal(head);

    // traversal(head);
    // head = insertatfirst(head,43);
    // traversal(head);
    // head = insertatindex(head , 848 , 2);
    // traversal(head);
    // insertafteranode(head,second,46);

    printf(" circular linkedlist after end insertion\n");

    // head = insertionathead(head, 87);
    // head = insertionathead(head, 82);
    // head = insertionathead(head, 83);

    // insertatend(head , 786);
    traversal(head);

    return 0;
}

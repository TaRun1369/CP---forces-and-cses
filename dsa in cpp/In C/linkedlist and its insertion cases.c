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

struct Node* insertatfirst(struct Node*head ,int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node* insertatindex(struct Node*head , int data , int index){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node* p = head;
    int i = 0;
    
    while(i!= index-1){
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node* insertatend(struct Node*head , int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;
    struct Node* p = head;
    // while loop kab tak chale wo likha hai condition mein nhi samjhe toh 3-4 baar wapas padh ya example leke dekh
    while(p->next != NULL){
        p = p->next;
        
    }
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node* insertafteranode(struct Node*head ,struct Node*prevnode , int data){
    struct Node*ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->data = data;

    ptr->next = prevnode->next;
    prevnode->next = ptr;
    
    return head;
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

    printf("linkedlist before insertion\n");

    traversal(head);
    //printf("linkedlist after insertion\n");
    //head = insertatfirst(head,43);
    //traversal(head);
    
    // traversal(head);
    // head = insertatfirst(head,43);
    // traversal(head);
    // head = insertatindex(head , 848 , 2);
    // traversal(head);
    insertafteranode(head,second,46);





    printf("linkedlist after end insertion\n");
    // insertatend(head , 786);
    traversal(head);

    return 0;
}

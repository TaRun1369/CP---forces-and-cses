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

struct Node * deletefirst(struct Node* head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
};
// khud se banayi hui mtd
struct Node* deleteatindex(struct Node*head, int index){
    struct Node* p = head;
    int i = 0;
    while(i != index - 1 ){
        p = p->next;
        i++;
        
    }
    struct Node* q = p->next;
    p->next = q->next;
    
    free(q);
    return head;
};

//harry bhaiya ki mtd

struct Node* Deleteatindex(struct Node*head, int index){
    struct Node* p = head;
    struct Node* q = head->next;
    for(int i = 0;i < index - 1;i++){
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
};

struct Node* Deleteatend(struct Node*head){
    struct Node* p = head;
    struct Node* q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);
    return head;
};


/* struct Node* deleteforavalue(struct Node*head, int value){
    struct Node* p = head;
    int i = 0;
    struct Node* q = p->next;
    while(q->data != value){
        p = p->next;
        i++;
        
    }
    if(q->data == value){
        p->next = q->next;
        free(q);        
    }
    return head;
};
*/
struct Node* Deleteforavalue(struct Node*head, int value){
    struct Node* p = head;
    struct Node* q = head->next;
    while(q->data != value && q->next!= NULL){
        p = p->next;
        q = q->next;
    }
    if(q->data == value){
        p->next = q->next;
        free(q);
        
    }
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
    third->next = NULL;

    printf("linkedlist before deletion\n");

    traversal(head);
    
    printf("linkedlist after deletion\n");
    // head = deletefirst(head);
    // head = deleteatindex(head, 1);
    // head = Deleteatindex(head, 2);
    // head = Deleteatend(head);
    head = Deleteforavalue(head, 3);
    traversal(head);

    return 0;
}

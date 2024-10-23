#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node*next;

};

struct Node* top = NULL;
void traversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n\n", ptr->data);
        ptr = ptr->next;
    }
}
int isEmpty(struct Node* top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }

}
int isFull(struct Node* top){
    struct Node* p = (struct Node*)malloc(sizeof(struct Node));
    if(p == NULL){
        return 1;// jaghah he nhi hai wala case...
    }
    else{
        return 0;
    }

    
}
struct Node* push(struct Node* top,int x){
    if(isFull){
        printf("stack overflowed\n");
    }
    else{
        struct Node* n=(struct Node*)malloc(sizeof(struct Node));
        n->data = x;
        n->next=top;
        top=n;
        return top;
    }

}
int peek(int pos){
    struct Node* ptr = top;
    for(int i = 0;(i<pos - 1 && ptr != NULL);i++){
        ptr = ptr->next;
    }
    if(ptr == NULL){
        return ptr->data;
    }
    else{
        return -1;
    }


}

int main(){
    // struct Node* top = NULL;
    top = push(top,78);
    top = push(top,8);
    top = push(top,7);
    top = push(top,21);
    top = push(top,786);

    traversal(top);

    return 0;
}

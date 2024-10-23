#include <stdio.h>
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    int *arr;
};
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(struct stack * ptr, int val){
    if(isFull(ptr)){
        printf("soorri darling overflow\n");

    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
int pop(struct stack * ptr){
    if(isEmpty(ptr)){
        printf("soorri darling underflow\n");
        return -1;

    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}


int peek( struct stack* ptr, int i){
    int arrayInd = ptr->top - i +1;
    if(arrayInd < 0){
        printf("not a valid position\n");
        return -1;
    }
    else{
        return ptr->arr[arrayInd];
    }
}

int StackTop(struct stack * ptr){
    return ptr->arr[ptr->top];
}
int StackBottom(struct stack * ptr){
    return ptr->arr[0];
}
 
int main(){
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));
 
    struct stack *s = (struct stack *) malloc(sizeof(struct stack));
    s->size = 80;
    s->top = -1;
    s->arr = (int *)malloc(s->size * sizeof(int));
    
    //s->arr[0] = 7;
    //s->top++;
    if(isEmpty(s)){
        printf("The stack is empty\n");
    }
    else{
        printf("The stack is not empty\n");
    }
    push(s,5);
    push(s,585);
    push(s,55);
    push(s,55);
    push(s,55);
    push(s,55);
    push(s,55);
    push(s,55);
    push(s,55);
    push(s,55);
    push(s,58);
    // pop(s);
    

    if(isEmpty(s)){
        printf("The stack is empty\n");
    }
    else{
        printf("The stack is not empty\n");
    }


    // printf("poppped %d \n",pop(s));
    // pop(s);

    for(int i = 1;i <= s->top + 1;i++){
        printf("value at %d is %d\n", i , peek(s,i));

    }

    printf("top is %d\n",StackTop((s)));



 
    return 0;
}
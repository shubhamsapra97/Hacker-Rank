#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Stack{
    int top;
    int *array;
    int capacity;
};

struct Stack *createStack(int capacity){
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = -1;
    stack->capacity = capacity;
    stack->array = (int*)malloc(sizeof(int) * stack->capacity);

    return stack;
};

int isFull(struct Stack *stack){
    return stack->top == stack->capacity - 1;
}

void push(struct Stack *stack,int k){
    if(isFull(stack)){
        return;
    }

    stack->array[++stack->top] = k;
    // printf("%d\n",stack->array[stack->top]);

}

int isEmpty(struct Stack *stack){
    return stack->top == -1 ;
}

int pop(struct Stack *stack){
    if(isEmpty(stack)){
        return;
    }
    return stack->array[stack->top--];
}

int main(){
    struct Stack *stack = createStack(100);

    printf("Enter Elements in Stack with last Input as -1");

    int n=0;
    scanf("%d",&n);
    while(n!=-1){
        push(stack,n);
        scanf("%d",&n);
    }

    printf("Element Popped = %d",pop(stack));
}

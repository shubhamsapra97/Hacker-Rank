#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *prev;
    struct node *next;
};

struct Stack{
    struct node *head;
    struct node *mid;
    int count;
};

struct Stack *createStack(){
    struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));

    stack->count = 0;
    stack->head = NULL;
    return stack;
};

void push(struct Stack *stack,int data){

    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    if(stack->head){
        newnode->next = stack->head;
        stack->head->prev = newnode;
        stack->head = newnode;
    }
    else{
        stack->head = newnode;
        stack->head->next = NULL;
    }

    newnode->data = data;
    newnode->prev = NULL;
    stack->count += 1;

    if(stack->count == 1){
        stack->mid = newnode;
    }
    else if((stack->count % 2) != 0){
        stack->mid = stack->mid->prev;
    }

}

void deleteMiddle(struct Stack *stack){
    if(stack->head){

        struct node *temp = stack->mid->next;
        stack->mid->prev->next = stack->mid->next;
        stack->mid->next->prev = stack->mid->prev;

        stack->count -= 1;

        temp = stack->mid->prev;
        free(stack->mid);
        stack->mid = temp;

    }
}

int main(){
    struct Stack *stack = createStack();

    printf("Push Elements with -1 to stop.. ");
    int k;
    scanf("%d",&k);
    while(k!=-1){
        push(stack,k);
        scanf("%d",&k);
    }

    struct node *ptr = stack->head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }

    printf("\nMid Value is %d\n",stack->mid->data);

    printf("Middle Node Deleted\n");
    deleteMiddle(stack);

    ptr = stack->head;
    while(ptr != NULL){
        printf("%d ",ptr->data);
        ptr = ptr->next;
    }

    printf("\nMid Value is %d ",stack->mid->data);

}

#include<stdio.h>
#include<stdlib.h>
#define bool int

struct node{
    int data;
    struct node *next;
};

void push(struct node **stack,char data){

    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    if(newnode == NULL){
        printf("Stack OverFlow\n");
    }

    newnode->data = data;

    newnode->next = *stack;
    *stack = newnode;

}

char pop(struct node **stack){
    struct node *ptr = *stack;

    if(*stack == NULL){
        printf("Stack Underflow\ns");
    }

    char s = ptr->data;
    *stack = ptr->next;
    free(ptr);
    return s;

}

bool isMatching(char a,char b){
    if(a == '(' && b == ')'){
        return 1;
    }
    else if(a == '[' && b == ']'){
        return 1;
    }
    else if(a == '{' && b == '}'){
        return 1;
    }
    else{
        return 0;
    }
}

int checkBalanced(char exp[]){
    struct node *stack = NULL;
    int i=0;
    while(exp[i]){
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '['){
            push(&stack,exp[i]);
        }
        else{

            if(stack == NULL){
                return 0;
            }

            if(!isMatching(pop(&stack),exp[i])){
                return 0;
            }
        }
        i++;
    }
    if(stack == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    char exp[100];
    gets(exp);

    if(checkBalanced(exp)){
        printf("Balanced");
    }
    else{
        printf("Not Balanced");
    }

}

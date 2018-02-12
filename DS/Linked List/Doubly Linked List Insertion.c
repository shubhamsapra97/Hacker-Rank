#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};

void push(struct node **head,int k){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = k;
    newnode->next = NULL;

    if(!head){
        return;
    }

    struct node *ptr = *head;
    if(*head!=NULL){
        while(ptr->next){
            ptr=ptr->next;
        }
        ptr->next = newnode;
        newnode->prev = ptr;
    }
    else{
        *head = newnode;
        newnode->prev = NULL;
    }
}

int main(){
    int n,k;
    struct node *start = NULL;

    printf("Enter number of nodes");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
        scanf("%d",&k);
        push(&start,k);
    }

    struct node *ptr = start;

    while(start){
        printf("%d ",start->data);
        start = start->next;
    }
}

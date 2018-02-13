#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void removeDuplicates(struct node *head){
    struct node *ptr = head;
    struct node *prev = NULL;
    struct node *ptr1 = NULL;

    while(ptr){
        ptr1 = ptr->next;
        prev = ptr;
        while(ptr1){
            if(ptr->data == ptr1->data){
                ptr1 = ptr1->next;
                prev->next = prev->next->next;
            }
            else{
                prev = ptr1;
                ptr1=ptr1->next;
            }
        }
        ptr=ptr->next;
    }
}

void push(struct node **head,int k){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = k;

    struct node *ptr = *head;

    if(!head){
        return;
    }

    if(*head){
        while(ptr->next){
            ptr=ptr->next;
        }
        ptr->next = newnode;
    }
    else{
        *head = newnode;
    }
    newnode->next = NULL;
}

int main(){
    int n,i,k;
    printf("Enter num of nodes");
    scanf("%d",&n);
    struct node *start = NULL;
    printf("Enter nodes");
    for(i=0;i<n;i++){
        scanf("%d",&k);
        push(&start,k);
    }
    removeDuplicates(start);
    while(start){
        printf("%d",start->data);
        start = start->next;
    }
}

#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void Joseph(struct node *start,int m,int n){
    struct node *ptr = start;
    struct node *ptr2 = start;

    while(ptr->next != ptr){
        int count = 1;
        while(count != m){

            ptr2 = ptr;
            ptr = ptr->next;
            count++;

        }

        ptr2->next = ptr->next;
        ptr = ptr2->next;
    }

    printf("Safest Pos is = %d",ptr->data);
}

void push(struct node **head,int k){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = k;

    if(!head){
        return;
    }
    else if(*head){
        struct node *ptr = *head;
        while(ptr->next != *head){
            ptr=ptr->next;
        }
        ptr->next = newnode;
    }
    else{
        *head = newnode;
    }
    newnode->next = *head;
}

int main(){
    int n,m;
    struct node *start = NULL;

    printf("Enter value of n");
    scanf("%d",&n);

    printf("Enter Eles");
    for(int i=1;i<=n;i++){
        push(&start,i);
    }

    printf("Enter value of increment");
    scanf("%d",&m);

    Joseph(start,m,n);


}

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *left,*right;
};

void insert(struct Node *root,int data){
    struct Node *p = root;
    struct Node *par;

    while(p!=NULL){
        par = p;
        if(p->data > data){
            p = p->left;
        }
        else if(p->data <= data){
            p = p->right;
        }
    }

    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = data;
    newnode->left = newnode->right = NULL;

    if(par->data > data){
        par->left = newnode;
    }
    else{
        par->right = newnode;
    }

}

void print(struct Node *root){
    if(root == NULL){
        return;
    }
    print(root->left);
    printf("%d ",root->data);
    print(root->right);
}
int sum1 = 0;
void rootToLeafSum(struct Node *root,int sum){



    if(root == NULL){
        return;
    }

    if(root->left == NULL && root->right == NULL){

        sum1 += root->data;
        //printf("Leaf Sum = %d \n ",sum1);
        if(sum1 == sum){
            printf("Found\n");
        }
        sum1 -= root->data;
        return;

    }

    sum1 += root->data;
    //printf("%d \n",sum1);

    rootToLeafSum(root->left,sum);
    rootToLeafSum(root->right,sum);
    sum1 -= root->data;

}

int main(){

    int n;

    printf("Enter node values");
    scanf("%d",&n);

    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->left = NULL;
    newnode->right = NULL;
    newnode->data = n;

    while(-1){
        scanf("%d",&n);
        if(n == -1){
            break;
        }
        insert(newnode,n);
    }

    int sum;
    printf("Enter req sum");
    scanf("%d",&sum);

    rootToLeafSum(newnode,sum);

    //print(newnode);

}


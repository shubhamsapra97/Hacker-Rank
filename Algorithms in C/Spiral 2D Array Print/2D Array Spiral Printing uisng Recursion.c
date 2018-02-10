#include<stdio.h>
#include<conio.h>

void Spiral(int m,int n,int arr[][n],int rl,int rmax,int cl,int cmax){

    if(rl >= rmax && cl >= cmax){
        return;
    }

    for(int i=cl;i<=cmax;i++){
           printf("%d ",arr[rl][i]);
    }
    rl++;
    printf("\n");

    for(int i=rl;i<=rmax;i++){
        printf("%d ",arr[i][cmax]);
    }
    cmax--;
    printf("\n");

    for(int i=cmax;i>=cl;i--){
        printf("%d ",arr[rmax][i]);
    }
    rmax--;
    printf("\n");

    for(int i=rmax;i>=rl;i--){
        printf("%d ",arr[i][cl]);
    }
    cl++;
    printf("\n");


    Spiral(m,n,arr,rl,rmax,cl,cmax);

}

int main(){

    int m,n,q=10,i,j;
    printf("Enter row and col of Array");
    scanf("%d",&m);
    scanf("%d",&n);

    int arr[m][n];

    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            arr[i][j] = q++;
        }
    }

    int rl = 0, rmax = m-1, cl = 0, cmax = n-1;

    Spiral(m,n,arr,rl,rmax,cl,cmax);

}


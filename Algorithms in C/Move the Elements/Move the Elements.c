#include<stdio.h>

int main(){
    int n,k,m;
    printf("\nEnter nodes\n");
    scanf("%d",&n);

    int arr[n];

    printf("\nEnter Eles\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    for(int i=0;i<n;i++){
        if(arr[i] > 0){
             k = i-1;

             while(k>=0 && arr[k] < 0){
                m = arr[k];
                arr[k] = arr[i];
                arr[i] = m;
                k--;
                i--;
             }
        }
    }

    printf("\nAfter Result\n");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

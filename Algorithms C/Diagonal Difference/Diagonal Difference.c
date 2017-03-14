#include<stdio.h>
int main()
{int k,l,n,sum1=0,sum2=0;
 scanf("%d",&n);
 int a[n][n];
 for(k=0;k<n;k++){
     for(l=0;l<n;l++){
        scanf("%d",&a[k][l]);
        if(l==k){
            sum1+=a[k][l];
            }
        if((k+l)==n-1){
            sum2+=a[k][l];
            }
        }
     }
 if(sum1>sum2)
 printf("%d",sum1-sum2);
 else
 printf("%d",sum2-sum1);
}

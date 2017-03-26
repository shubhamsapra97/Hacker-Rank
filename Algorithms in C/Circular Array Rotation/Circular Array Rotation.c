#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>
int main(){
    int n,k,q,c,m=1,i,h; 
    scanf("%d %d %d",&n,&k,&q);
    int *a = malloc(sizeof(int) * n);
    int *b = malloc(sizeof(int) * n);
    for(i = 0; i < n; i++){
       scanf("%d",&a[i]);
       c=i+k;
           if(c>n-1){
               c=c-n;
           }
            b[c]=a[i];
    }
    for(i = 0; i < q; i++){
        scanf("%d",&h);
        printf("%d\n",b[h]);
    }
    
    return 0;
}


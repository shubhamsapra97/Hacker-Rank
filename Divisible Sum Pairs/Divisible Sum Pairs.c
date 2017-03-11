#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,k,i,j,c=0;
    scanf("%d%d",&n,&k);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=(i+1);j<n;j++){
            if((a[i]+a[j])%k==0){
                c++;
            }
        }
    }
    printf("%d",c);
    return 0;
}


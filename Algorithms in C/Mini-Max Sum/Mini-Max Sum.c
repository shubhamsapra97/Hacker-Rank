#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;
    long int a[5],c,k;
    long int min,max;
    for(i=0;i<5;i++){
        scanf("%lld",&a[i]);
    }
    min=a[0];
    max=a[0];
    for(i=1;i<5;i++){
        c=min>a[i]?a[i]:min;
        k=max<a[i]?a[i]:max;
        min=c;
        max=k;
    }

    long int minsum=0,maxsum=0;
    for(i=0;i<5;i++){
        if(a[i]!=max){
            minsum += a[i];
        }
        if(a[i]!=min){
            maxsum+=a[i];
        }
    }
    printf("%lld %lld",minsum,maxsum);
    return 0;
}

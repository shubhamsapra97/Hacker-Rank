#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,j=5,k=0,n;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        j = j/2;
        k=k+j;
        j = j*3; 
    }   
    printf("%d",k);
    return 0;
}


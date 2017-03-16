#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,v,i;
    scanf("%d",&v);
    scanf("%d",&n);
    int str[n];
    
    for(i=0;i<n;i++){
        scanf("%d",&str[i]);
        if(str[i]==v){
            printf("%d",i);
            break;
        }
    }
    return 0;
}


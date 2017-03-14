#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int x1; 
    int v1; 
    int x2; 
    int v2,u,i; 
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    for(i=1;i<10000;i++){
        if((x1+(i*v1)) == (x2+(i*v2))){
            printf("YES");
            u=1;
            break;
        }
        else{
            u=0;
        }
    }
    if(u==0){
        printf("NO");
    }
    return 0;
}


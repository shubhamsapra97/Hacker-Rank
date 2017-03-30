#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,max=0,c=0; 
    scanf("%d",&n);
    int *height = malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
       scanf("%d",&height[i]);
       if(max<height[i]){
           max=height[i];
       } 
    }
    for(int i=0;i<n;i++){
        if(height[i]==max){
            c++;
        }
    }
    printf("%d",c);
    
    return 0;
}


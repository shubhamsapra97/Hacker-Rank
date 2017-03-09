#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int i;
    int *h = malloc(sizeof(int) * 26);
    for(i = 0; i<26; i++){
       scanf("%d",&h[i]);
    }
    char* word = (char *)malloc(512000 * sizeof(char));
    char* data = (char *)malloc(512000 * sizeof(char));
    
    scanf("%s",word);
    
    int l = strlen(word);
    
    int p=0,m,c;
    
    for(i=0;i<l;i++){
        c = (int)(word[i])-97;
        data[p]=h[c];
        p++;
    }
    int g = data[0];
    for(i=1;i<l;i++){
       m = g<data[i]?data[i]:g;
       g=m;
    }
    
    printf("%d",m*l);
    
    return 0;
}


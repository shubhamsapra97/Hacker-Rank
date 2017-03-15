#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int l = strlen(s);
    int i,c=1;
    for(i=0;i<l;i++){
        if((int)s[i]>=65 && (int)s[i]<=90){
            c= c+1;
        }
    }
    printf("%d",c);
    return 0;
}


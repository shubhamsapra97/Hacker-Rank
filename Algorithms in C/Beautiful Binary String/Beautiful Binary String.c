#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int n,i,c=0; 
    scanf("%d",&n);
    char* s = (char *)malloc(10240 * sizeof(char));
    scanf("%s",s);
    int l = strlen(s);
    for(i=0;i<l;i++){
        if(s[i]=='0' && s[i+2]=='0' && s[i+1]=='1'){
            c++;
            i+=2;
        }
    }
    printf("%d",c);
    return 0;
}


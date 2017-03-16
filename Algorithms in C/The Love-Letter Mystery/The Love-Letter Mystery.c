#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,k,n,l;
    scanf("%d",&n);
    char str[n][10000];
    for(i=0;i<n;i++){
        scanf("%s",str[i]);
        l = strlen(str[i]);
        k=0;
        for(j=0;j<(l/2);j++){
          if(str[i][j]!=str[i][l-j-1]){
              k = k + (abs)((int)(str[i][l-j-1]) - (int)(str[i][j]));
          }  
        }        
        printf("%d\n",k);
    }
    return 0;
}


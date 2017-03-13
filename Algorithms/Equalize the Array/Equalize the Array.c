#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int i,n,c=1,m=1,h=0,j;
    scanf("%d",&n);
    int a[n],b[n],f[n],count;
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        f[i]=-1;
    }
    
    for(i=0;i<n;i++){
        count=1;
        if(f[i]!=0){
            
            for(j=i+1;j<n;j++){
                if(f[j]!=0 && a[i]==a[j]){
                    count++;
                    f[j]=0;
                }
            }
            
            if(count>m){
                m=count;
                c=a[i];
            }
            
        }
    }
    
    for(i=0;i<n;i++){
        if(a[i]!=c){
            h++;
        }
    }
    
    if(m==1){
        printf("%d",n-1);
    }
    else{
        printf("%d",h);
    }
    
    return 0;
}


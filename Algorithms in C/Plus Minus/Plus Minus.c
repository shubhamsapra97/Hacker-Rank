#include<stdio.h>
int main()
{
    int i,b=0,n,c=0,d=0;char a[40];
    float k,l,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
         scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            b=b+1;
        }

        if(a[i]<0)
        {
            c=c+1;
        }

        if(a[i]==0)
        {
            d=d+1;
        }

    }
    k=(float)b/n;
    printf("%f",k);
    printf("\n");
    l=(float)c/n;
    printf("%f",l);
    printf("\n");
    m=(float)d/n;
    printf("%f",m);
    
}


#include<stdio.h>
int main()
 { int i,sum,n,t,j,k;
   scanf("%d",&t);
   for(i=1;i<=t;i++)
    {sum=1;
     scanf("%d",&n);
     for(j=1;j<=n;j++)
      {if(j%2==0)
        {
          sum=sum+1;
        }
       if(j%2!=0)
        {
             sum=(sum*2);
        }
     }
    printf("%d\n",sum);

   }
 }


#include<stdio.h>
int main()
{ int i,t,k;long n,h,p;
 scanf("%d",&t);
 for(i=1;i<=t;i++)
 {k=0;
  scanf("%d",&n);
  h=n;
  while(n>0)
   {p=n%10;
   
    if((p!=0) && (h%p==0))
     {
      k++;
     }
    n=n/10;
   }
  printf("%d\n",k);
 }
}





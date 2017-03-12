#include<stdio.h>
int main(){
 int n,k,i,j,t,c;

 scanf("%d",&t);

 for(i=0;i<t;i++){
  c=0;
  
  scanf("%d",&n);

  scanf("%d",&k);

  int a[n];

  for(j=0;j<n;j++){

   scanf("%d",&a[j]);
  }

  for(j=0;j<n;j++){
   if(a[j]<=0){
    c++;
   }
  }
   if(c>=k){
    printf("NO");
   }
   else{
    printf("YES");
   }
     printf("\n");
 }
}


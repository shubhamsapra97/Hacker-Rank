#include<stdio.h>
int main(){
 int k,s,m,p,n,c,d,t,i;

 scanf("%d",&t);
 for(i=0;i<t;i++){

 scanf("%d%d%d",&n,&c,&d);

 k=(n/c);
 s=k;
 while(s>=d){

   m=s%d;
   p=s/d;
   if(p>0){
    k=k+p;
    s=m+p;}

 }
 printf("%d\n",k);

}
}

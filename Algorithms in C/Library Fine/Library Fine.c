#include<stdio.h>
int main(){
 int mg,dg,yg,dr,yr,mr,i,j,k,fine;

 scanf("%d %d %d",&dr,&mr,&yr);

 scanf("%d %d %d",&dg ,&mg ,&yg);

 if(yr==yg){

  if(mr==mg){

   if(dr>dg){
    fine=15*(dr-dg);
    printf("%d",fine);

   }
  }
 }

 if(yr==yg){

  if(mr>mg){

   fine=500*(mr-mg);
   printf("%d",fine);

  }
 }

 if(yr>yg){
 fine=10000;
 printf("%d",fine);
 }

 if(yr<=yg){
  if(mr<=mg){
   if(dr<=dg){
    fine=0;
    printf("%d",fine);
   }
  }
 }
}


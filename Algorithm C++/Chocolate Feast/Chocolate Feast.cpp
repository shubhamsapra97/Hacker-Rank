#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#include<stdio.h>
int main(){
 int k,s,m,p,n,c,d,t,i;

 cin>>t;
 for(i=0;i<t;i++){

 cin>>n>>c>>d;

 k=(n/c);
 s=k;
 while(s>=d){

   m=s%d;
   p=s/d;
   if(p>0){
    k=k+p;
    s=m+p;}

 }
 cout<<k<<"\n";

}
}


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int i,j,n,k,rev,c=0,m;
    cin>>n>>j>>k;
    for(i=n;i<=j;i++){
        rev=0;
        m=i;
        while(m!=0){
            rev = (rev*10) + (m%10);
            m=m/10;
        }
        float s = ((float)(i-rev)/k);
        int  p = ((i-rev)/k);
        if(s<0){
            s=s*(-1);
        }
        if(p<0){
            p*=(-1);
        }
        if(s==p){
            c++;
        }        
    }
    cout<<c;
    return 0;
}


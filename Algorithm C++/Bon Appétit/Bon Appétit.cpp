#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,c=0,m;
    cin>>n>>k;
    int cost[n];
    for(int i=0;i<n;i++){
        cin>>cost[i];
        if(i!=k){
            c+=cost[i];
        }    
    }
    cin>>m;
    if((c/2)==m){
        cout<<"Bon Appetit";
    }
    else{
        cout<<(m-(c/2));
    }
    return 0;
}


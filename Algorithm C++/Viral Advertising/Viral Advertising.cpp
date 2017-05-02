#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {

    int i,j=5,k=0,n;
    cin>>n;
    for(i=0;i<n;i++){
        j = j/2;
        k=k+j;
        j = j*3; 
    }   
    cout<<k;
    return 0;
}



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s;
    int i,j,k,l;
    
    cin>>l;
    
    
    for(j=0;j<l;j++){
        
        cin>>s;
        k=0;

        for(i=0;i<s.length();i++){
            if(s[i]==s[i+1]){
                k++;
            }
        }
        cout<<k<<"\n";
        
    }
    return 0;
}


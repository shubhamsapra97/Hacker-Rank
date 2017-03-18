#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int c,i,j,k;
    string s;
    cin>>c;
    for(i=0;i<c;i++){
        cin>>s;
        int m=1;
        
        int l = s.length();
        char *arr = new char[l];
        
        for(j=0;j<l;j++){
            arr[j] = s[l-j-1];
        }
        
        for(j=1;j<l;j++){
            if((abs)((int)s[j]-(int)s[j-1]) != (abs)((int)arr[j]-(int)arr[j-1]) ){
                m=0;
            }
            if(m==0){
                cout<<"Not Funny\n";
                    break;
            }
        }
        if(m==1){
            cout<<"Funny\n";
        }
        
        
        for(j=0;j<l;j++){
            arr[j]=' ';
        }
        
    }
    return 0;
}


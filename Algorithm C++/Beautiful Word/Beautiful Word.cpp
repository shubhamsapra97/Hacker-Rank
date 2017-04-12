#include <bits/stdc++.h>

using namespace std;

int main(){
    int flag=0;
    string w;
    cin >> w;
    int l= w.length();
    for(int i=0;i<l;i++){
        if(w[i]==w[i+1]){
            flag=1;
            break;
        }
        if(w[i]=='a' || w[i]=='e' || w[i]=='i' || w[i]=='o' || w[i]=='u' || w[i]=='y'){
            
            if(w[i+1]=='a' || w[i+1]=='e' || w[i+1]=='i' || w[i+1]=='o' || w[i+1]=='u' || w[i+1]=='y'){
                flag=1;
                break;
            }
         }
    }
    if(flag==1){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
    return 0;
}


#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,i,c=0; 
    cin>>n;
    char* s = (char *)malloc(10240 * sizeof(char));
    cin>>s;
    int l = strlen(s);
    for(i=0;i<l;i++){
        if(s[i]=='0' && s[i+2]=='0' && s[i+1]=='1'){
            c++;
            i+=2;
        }
    }
    cout<<c;
    return 0;
}



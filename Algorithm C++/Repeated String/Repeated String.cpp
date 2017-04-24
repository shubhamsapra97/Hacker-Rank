#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    long n,c=0,k=0;
    cin >> n;
    int l = s.length();
    for(int i=0;i<l;i++){
        if(s[i] == 'a'){
            c++;
        }
    }
    long times = n/l;
    long rem = n%l;
    
    if(rem!=0){
        for(int j=0;j<rem;j++){
            if(s[j]=='a'){
                k++;                
            }
        }        
    }
    
    cout<<((times*c)+k);
    
    return 0;
}


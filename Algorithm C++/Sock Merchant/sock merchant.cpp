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
    int n,h=0,k;
    cin >> n;
    vector<int> c(n);
    for(int i = 0;i < n;i++){
       cin >> c[i];
    }
    for(int i = 0;i < n;i++){
        k=0;
        for(int g=i+1;g<n;g++){
   
       if(i!=0){
           
           for(int j=0;j<i;j++){
               if(c[i]==c[j]){
                   goto m;
               }
           }
           
       }
        
        if(c[g]==c[i]){
            k++;     
        }
      }       
        k++;
        h += k/2;
        
        m:0;
    }
    cout<<h;
    return 0;
}


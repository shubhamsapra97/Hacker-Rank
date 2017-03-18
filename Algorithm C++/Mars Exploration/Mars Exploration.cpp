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
    int i,m=0;
    cin >> s;
    int l = s.length();
    for(i=0;i<l;){
        if(s[i]!='S'){  
            m++;
        }
        if(s[i+1]!='O') {
            m++;
        }    
        if(s[i+2]!='S'){
            m++;
        }
        i=i+3;
    }
    cout<<m;
    return 0;
}


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
    int s;
    int t;
    cin >> s >> t;
    int a;
    int b;
    cin >> a >> b;
    int m;
    int n;
    cin >> m >> n;
    int c=0,k=0;
    vector<int> apple(m);
    for(int i = 0;i < m;i++){
       cin >> apple[i];
    }
    vector<int> orange(n);
    for(int i = 0;i < n;i++){
       cin >> orange[i];
    }
    for(int i=0;i<m;i++){
            if((a+apple[i])>=s && (a+apple[i])<=t){
                c++;
            }
    }
    for(int i=0;i<n;i++){
        if((b+orange[i])>=s && (b+orange[i])<=t){
                k++;
            }
    }
    cout<<c<<endl<<k;
    return 0;
}


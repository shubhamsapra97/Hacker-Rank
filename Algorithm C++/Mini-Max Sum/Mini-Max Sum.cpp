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
    int i;
    long int a[5],c,k;
    long int min,max;
    for(i=0;i<5;i++){
        cin>>a[i];
    }
    min=a[0];
    max=a[0];
    for(i=1;i<5;i++){
        c=min>a[i]?a[i]:min;
        k=max<a[i]?a[i]:max;
        min=c;
        max=k;
    }

    long int minsum=0,maxsum=0;
    for(i=0;i<5;i++){
        if(a[i]!=max){
            minsum += a[i];
        }
        if(a[i]!=min){
            maxsum+=a[i];
        }
    }
    cout<<minsum<<" "<<maxsum;
    return 0;
}


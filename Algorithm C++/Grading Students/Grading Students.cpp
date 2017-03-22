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
    int n,grade,num1,c;
    cin >> n;
    for(int a = 0; a < n; a++){
        cin >> grade;
        num1 = grade;
        c=0;
        if(grade<38){
            cout<<grade<<"\n";
        }
        else{
            while(num1%5!=0){
                num1++;
                c++;
            }
            if(c<3){
                cout<<num1<<"\n";
            }
            else{
                cout<<grade<<"\n";
            }
        }
    }
    return 0;
}


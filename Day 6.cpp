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
    int n,i,j;
    cin >> n;
    for(i=1;i<=n;i++)
        {
        for(j=n-i;j>=1;j--)
            {
            cout<<" ";
        }
        
        for(j=1;j<=i;j++)
            cout<<"#";
        
        cout<<"\n";
        
    }
    return 0;
}

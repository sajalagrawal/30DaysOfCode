//https://www.hackerrank.com/challenges/30-arrays
//Author - Sajal Agrawal
//@sajalagrawal

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
    int n;
    cin >> n;
    int ar[n],i,j,t=0;
    for(i=0;i<n;i++)
        {
        cin>>ar[i];
    }
 
     
    for(i=n-1;i>=0;i--)
        {
        cout<<ar[i]<<" ";
    }
    
    return 0;
}

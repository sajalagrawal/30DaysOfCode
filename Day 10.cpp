//https://www.hackerrank.com/challenges/30-binary-numbers
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
    int n,sum=0,max=0,k;
    cin >> n;
    while(n){
        k=n%2;
        if(k==1)sum++;
        else if(k==0)sum=0;
        if(sum>max)max=sum;
            n=n/2;
    }
    cout<<max;
    return 0;
}

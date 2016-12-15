//https://www.hackerrank.com/challenges/30-sorting
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
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    int swaps=0,totalSwaps=0;
    int i,j;
    for(i=0;i<n;i++){
        swaps=0;
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                swap(&a[j],&a[j+1]);
                swaps++;
                totalSwaps++;
            }
        }
        
        if(swaps==0)break;
    }
    cout<<"Array is sorted in "<<totalSwaps<<" swaps.";
    cout<<"\nFirst Element: "<<a[0];
    cout<<"\nLast Element: "<<a[n-1];
    return 0;
}

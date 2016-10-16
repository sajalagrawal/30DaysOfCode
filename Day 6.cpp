//https://www.hackerrank.com/challenges/30-review-loop
//Author - Sajal Agrawal
//@sajalagrawal

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t,l,i;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        l=s.size();
        for(i=0;i<l;i=i+2){
            cout<<s[i];
        }
        cout<<" ";
        for(i=1;i<l;i=i+2){
            cout<<s[i];
        }
        cout<<"\n";
        
    }
    return 0;
}

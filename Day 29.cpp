//https://www.hackerrank.com/challenges/30-bitwise-and
//Author - Sajal Agrawal
//@sajal.agrawal1997@gmail.com


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n,k;
    cin>>t;
    while(t--){
        cin>>n>>k;
        int a,b,max=0;
        for(a=1;a<=n-1;a++){
            for(b=a+1;b<=n;b++){
                //cout<<"a="<<a<<"b="<<b<<"a&b="<<(a&b)<<"\n";
                if((a&b)>max && (a&b)<k)max=(a&b);
            }
        }
        cout<<max<<"\n";
    }
    return 0;
}

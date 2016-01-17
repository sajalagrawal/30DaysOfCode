#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int find_gcd(int a,int b){
    //Write base condition
    int g;
    if(a==b)
        {
        g=a;
    }
    else if(a>b)
        {
       g=find_gcd(a-b,b);
    }
     else         {
       g=find_gcd(b-a,a);
    }
return g;
}

int main() {
    int a,b;
    //Take input
    cin>>a>>b;
    
    int gcd=find_gcd(a,b);
    cout<<gcd;
    return 0;   
}

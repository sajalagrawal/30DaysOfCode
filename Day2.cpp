//https://www.hackerrank.com/challenges/30-operators
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
    double m;
    int t;
    int x;
    float tip,tax,price;
    cin>>m;
    cin>>t;
    cin>>x;
    tip=(t*m)/100.0;
    tax=(m*x)/100.0;
    price=m+tax+tip;
    
    cout<<"The total meal cost is "<<round(price)<<" dollars.";
    return 0;
}

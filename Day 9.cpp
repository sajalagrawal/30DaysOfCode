//https://www.hackerrank.com/challenges/30-recursion
//Author - Sajal Agrawal
//@sajalagrawal

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int factorial(int);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    cout<<factorial(n)<<"\n";
    return 0;
}
int factorial(int n){
    if(n==1)return 1;
    return n*factorial(n-1);
}

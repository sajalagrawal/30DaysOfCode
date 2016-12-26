//https://www.hackerrank.com/challenges/30-running-time-and-complexity
//Author - Sajal Agrawal
//@sajal.agrawal1997@gmail.com

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isPrime(int n);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        if(isPrime(n))cout<<"Prime\n";
        else cout<<"Not prime\n";
    }
    return 0;
}

bool isPrime(int n){
    if(n==2)return true;
    if(n==1 || n%2==0)return false;
   
    int i=3;
    while(i*i<=n){
        if(n%i==0)return false;
        i=i+2;
    }
    return true;
}
/*
bool isPrime(int n){
    if(n==1)return false;
    int i=2;
    while(i*i<=n){
        if(n%i==0)return false;
        i++;
    }
    return true;
}*/

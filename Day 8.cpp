//https://www.hackerrank.com/challenges/30-dictionaries-and-maps
//Author - Sajal Agrawal
//@sajalagrawal

#include <cmath>
#include<map>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    map<string,int> dic;
    int t,n,flag;
    string s;
    cin>>t;
    while(t--){
        cin>>s>>n;
        dic[s]=n;
    }
    map<string,int>::iterator i;
    getchar();
    while(getline(cin,s)){
        if(dic.count(s)>0){
            cout<<s<<"="<<dic[s]<<"\n";
        }else{
            cout<<"Not found\n";
        }
    }
    return 0;
}

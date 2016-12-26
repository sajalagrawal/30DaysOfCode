//https://www.hackerrank.com/challenges/30-nested-logic
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
    int acDay,acMonth,acYear,exDay,exMonth,exYear,fine;
    cin>>acDay>>acMonth>>acYear;
    cin>>exDay>>exMonth>>exYear;
    if(acYear>exYear){
        fine=10000;
    }
    else{
        if(acYear<exYear || acMonth<exMonth || (acDay<=exDay && acMonth==exMonth))
            fine=0;
        else if(acMonth==exMonth)
            fine=15*(acDay-exDay);
        else if(acMonth>exMonth)
            fine=500*(acMonth-exMonth);
    }
    cout<<fine<<"\n";
    return 0;
}

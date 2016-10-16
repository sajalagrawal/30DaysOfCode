//https://www.hackerrank.com/challenges/30-data-types
//Author - Sajal Agrawal
//@sajalagrawal

#include <iostream>
#include<iomanip>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

int main()
{
    int i=4;
    double d=4.0;
    string s="Hackerrank ";
    // Declare second integer, double, and String variables.
    int num;
    double dou;
    string str;

    // Read and save an integer, double, and String to your variables.
    cin>>num>>dou;
    getchar();
    getline(cin,str);
    // Print the sum of both integer variables on a new line.
    cout<<(i+num)<<"\n";
    // Print the sum of the double variables on a new line.
    double a=dou+d;
    cout<<setprecision(1)<<fixed<<a<<"\n";
    // Concatenate and print the String variables on a new line
    // The 's' variable above should be printed first.
    string an=s+str;
    cout<<an;
    return 0;
}

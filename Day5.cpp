#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t,a[100],b[100],k,n[100],j,i;
    cin>>t;
    for(i=0;i<t;i++)
        {
        cin>>a[i];
        cin>>b[i];
        cin>>n[i];
    }
    
    for(i=0;i<t;i++){
         k=a[i]+ b[i];
        cout<<k<<" ";
   for(j=1;j<=n[i]-1;j++)
       {
       
      k=k+(b[i]*pow(2,j));
      
       cout<<k<<" ";
   }
        cout<<"\n";
    }
    
    
    return 0;
}

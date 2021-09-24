#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** agrc){

 //write your code here
    int n1,n2;
     cin>>n1;     //taking input from user for first array
    
    int a[n1];
    
    for (int i=0; i<n1;i++)
    {
        cin>>a[i];
    }
    cin>>n2;             //taking input from user for first array
    int b[n2];
    
    for (int i=0; i<n2;i++)
    {
        cin>>b[i];
    }
    

    // calculating size of sum array

    int sum[n1>n2?n1:n2];

    int c=0;
    
    int i = sizeof(a) / sizeof(a[0]) - 1;
    int j = sizeof(b) / sizeof(b[0]) - 1 ;
    int k = sizeof(sum) / sizeof(sum[0])  - 1 ;
    
    
    while(k>=0)
    {  int d=c;
        if (i>=0){
            d += a[i];
        }
       if (j>=0){
           d +=b[j];
       }
     c=d/10;
     d=d%10;
     
     sum[k] =d;
     i--;
     j--;
     k--;
    }
    if (c!=0)
    {
        cout<<c<<endl;
    }
    for (int val :sum)
    {
        cout<<val<<endl;
    }
} 

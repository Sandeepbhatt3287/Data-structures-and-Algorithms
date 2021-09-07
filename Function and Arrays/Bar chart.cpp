#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(int argc, char** agrc){

 //write your code here

 
 int n;
    cin>>n;
    int a[n];
    
    for (int i =0; i<n;i++)
    { cin>>a[i];}
    
    int max=a[0];
   for (int j=1 ;j<n;j++)
    {   if (max<a[j])
        {  
         max=a[j];
        }
    }


    for (int i=0; i<max;i++)
    { 
        for (int k=0;k<n;k++)
        {
            if (max-a[k]<=i)
                cout<<"*\t";
            else
                cout<<" \t";
        }
    cout<<"\n";
    }
    }

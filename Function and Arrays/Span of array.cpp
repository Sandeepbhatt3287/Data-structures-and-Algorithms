#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(int argc, char** agrc){

 //write your code here

 
 int n;
    cin>>n;
    
    int a[n];
    
    for (int i =0; i<n;i++)
    {
        cin>>a[i];
     }
    
    int max=a[0];
    int min=a[0];
    
    for (int j=1;j<n;j++)
    {
        if (max<a[j])
        {  
            max=a[j];
        }
         if (min>a[j])
        {  
            min=a[j];
        }
        
    }
    
 int span=max-min;
    cout<<span;
   
    
}

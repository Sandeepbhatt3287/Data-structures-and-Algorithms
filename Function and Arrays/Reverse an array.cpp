//1. You are given a number n, representing the size of array a.
//2. You are given n numbers, representing elements of array a.
//3. You are required to reverse the contents of array a.


#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** agrc){

 //write your code here
    int n1;
     cin>>n1;
    int a[n1];
    
    for (int i=0; i<n1;i++)
    {
        cin>>a[i];
    }
 for (int j=n1-1;j>-1;j--)
     // cout<<j;
     cout<<a[j];
} 

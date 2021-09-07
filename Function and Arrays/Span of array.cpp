//1. You are given a number n, representing the count of elements.
//2. You are given n numbers.
//3. You are required to find the span of input. Span is defined as difference 
//of maximum value and minimum value.





#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(int argc, char** agrc){

 //write your code here

 
    int n;
    cin>>n;     //size of array
    
    int a[n];
    
    for (int i =0; i<n;i++)
    {
        cin>>a[i];    //taking inputs 
     }
    
    
//    using STL functions for maximum and minimum number

    int max= *max_element(a,a+n);     
    int min= *min_element(a,a+n);
    
    int span=max-min;
    cout<<span;    
}

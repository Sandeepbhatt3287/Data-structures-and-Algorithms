//1.You are given a number n, representing the size of array a.
//2.You are given n distinct numbers, representing elements of array a.
//3. You are given another number d.
//4. You are required to check if d number exists in the array a and at
// what index (0 based). If found print the index, otherwise print -1.


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
    
    int d,c=0;
    cin>>d;
    
    for (int j=0;j<n;j++)
    {
        if (d==a[j])
        {  
           cout<<j;
            ++c;
        }
    
    }
    if (c==0)
        cout<<-1;

}

#include<iostream>
using namespace std;
int main(int argc, char** agrc){

 //write your code here

    int n,d,count=0;
    cin>>n>>d;
    
    while(n!=0)
    {
        int i= n%10;
        n=n/10;
        
        if (i==d)
        {++count;}
    }
    cout<<count;
    
}

#include<iostream>
using namespace std;

int factorial(int n){
    // write your code here
    if (n==0)
    return 1;
    
    return n*factorial(n-1);
    // cout<<n;
    
}


int main(){
    int n; cin>>n;
    cout<<factorial(n);
}

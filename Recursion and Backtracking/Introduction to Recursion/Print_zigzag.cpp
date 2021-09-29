#include<iostream>
using namespace std;


void pzz(int n){
    // write your code here
    if (n==0)
    return;
    cout<<n<<" " ;    //pre statement
    pzz(n-1);
    cout<<n<<" ";    // in statement
    pzz(n-1);
    cout<<n<<" ";    // post  statement
    
}



int main(){
    int n; cin>>n;
    pzz(n);
}

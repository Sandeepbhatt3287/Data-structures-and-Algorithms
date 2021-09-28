#include<iostream>
using namespace std;

int power(int x,int n){
   // write your code here
   if (n==0)
   return 1;
   if (n%2==1)
   return x*power(x,n/2)*power(x,n/2);
   else
   return power(x,n/2)*power(x,n/2);
   
}


int main(){
    int n,x; cin>>x>>n;
    cout<<power(x,n);
}

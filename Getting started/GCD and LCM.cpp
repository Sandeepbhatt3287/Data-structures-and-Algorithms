#include<iostream>
using namespace std;
int main(int argc, char** agrc){

 //write your code here
 
 int n1,n2;
 
 cin>>n1>>n2;
 
 int on1=n1;
 int on2=n2;
 
 while (n1%n2!=0)
 {
 	int r = n1%n2;
 	n1=n2;
 	n2=r;
 }
 
 int gcd =n2;
 int lcm =(on1*on2)/gcd;
 
 cout<<gcd<<endl;
 cout<<lcm;
 

}


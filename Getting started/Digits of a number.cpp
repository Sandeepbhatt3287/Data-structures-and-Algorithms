//Digits of a number

#include<iostream>
#include<math.h>
using namespace std;
int main(int argc, char** agrc){

 //write your code here
 int n,temp;
 
 cin>>n;
 
 
 temp= n;
 
 int count=0;
 for(;temp!=0;)  
 {
 	temp=temp/10;
 	
// 	cout<<n;
 	count++;
 }
 int div = pow(10,count-1);
//cout<<count;
while(div!=0)
{
	int q = n/div;
	cout<<q<<endl;
	n=n%div;
	div=div/10;
}
}


#include<iostream>
using namespace std;
int main(int argc, char** agrc){

 //write your code here
 int n;
 cin>>n;
 
 for (int i =0; i<=n;i++)
   { 
    cout<<"\n";
   	for (int j =0;j<=n;j++)
   	 {
		 int z=i+j;
   	  if(z<=n)
   	  
		 {
		 cout<<" ";
   	    }
   	else cout<<"*";
	   }
   }
   }





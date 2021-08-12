#include<iostream>
using namespace std;
int main(int argc, char** agrc){
    //write your code here
    int m;
    cin>>m;
    
	if (m>=90)
	{
	  cout <<"excellent";
	}
	 else if (m>=80 && m<90)
	{
	 cout<<"good";
    }
   else if (m>=70 && m<90)
	{
	cout<<"fair";
    }
   else if (m>=60 && m<70)
	{
	cout<<"meets expectations";
    }
	else 
	cout<<"below par";
	
}

#include<iostream>
using namespace std;
int main(int argc, char** agrc){
	int t ;
	cin>>t;
	
	for (int i =0 ; i <t ;i++)
	{
		int n;
	
				cin>>n;
			    int count =0;
				   
			for(int div =2;div <=n; div++)
				{
				   
				   if (n%div ==0)
					   {
					   	count++;    
					   	break;    
//						    once count increase it will be out from scope
					   }	
				}
				
				if (count==1)
				{
					cout<<"Prime";
					
				}
				else 
				{
					cout<<"Not prime";
				}
	}

}


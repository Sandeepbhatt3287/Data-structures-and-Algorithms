#include<iostream>
using namespace std;
int main(int argc, char** agrc){

 //write your code here
 int low,high;
 cin>>low>>high;

for(int n =low;n<=high;n++)
  {
	int count =0;
	
			for(int div =2; div*div<=n ; div++)
			{
				if (n%div ==0)
				{
					count=1;
					break;
				}
				
				
			}
               if (count==0)
                	{
	                  cout<<"\n"<<n;
                    }
			
	
    }
    
}


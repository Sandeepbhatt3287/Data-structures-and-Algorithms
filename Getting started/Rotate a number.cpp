#include<iostream>
using namespace std;
int main(int argc, char** agrc){

 //write your code here
int n,k;   // number rotate
cin>>n;
cin>>k;    //number of rotate

int temp=n,nod=0;

while (temp>0)
{
	temp=temp/10;
	nod++;
}

k=k%nod;
if (k<0){
	k=k+nod;
}

int div=1;
int mul=1;
for (int i =1; i<=nod;i++)
	{
	   if (i<=k){
	   	div=div*10;
	   	}
	   	else
	   	{mul=mul*10;
		   }
	}
	
	int q = n/div;
	int r = n%div;
	
	int rot = r*mul + q;
	cout<<rot;


}


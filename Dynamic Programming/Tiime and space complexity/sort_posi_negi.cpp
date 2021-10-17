//20MCA051
//Sandeep Bhatt


#include <stdio.h>
#include<iostream>
using namespace std;

void segregateBubble(int arr[], int n)
{
	int  j,k;
	for (int i = 1; i < n; i++)
    {
		k = arr[i];
        
	  if (k > 0)
			continue;
		j = i - 1;
		while (j >= 0 && arr[j] > 0)
        {
			arr[j + 1] = arr[j];
			j = j - 1;
		}

		arr[j + 1] = k;
	}
}


int main()
{   
    
    int n;
    cin>>n;
	int arr[n] ;   //= { 9,-3,5,-2,-8,-6,1,3};
     for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }   
        

	segregateBubble(arr, n);
    
	for (int i = 0; i < n; i++)
		cout<<arr[i]<<" ";
	

	return 0;
}

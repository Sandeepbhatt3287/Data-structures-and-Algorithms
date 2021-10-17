// 20MCA051
//Sandeep Bhatt


//jamia internal lab exam



#include <bits/stdc++.h>
using namespace std;

void compute(int arr[], int n)
{
	sort(arr, arr + n);

	int Le = 0;

	int sum1 = 0;

	int Max = INT_MIN;

	for (int i = 0; i < n; i++)
		sum1 += arr[i];
    
	for (int i = 0; i < n; i++) {

		int l= i;

		int r = n - i - 1;

		sum1 = sum1 - arr[i];

		int sum = (l * arr[i])- Le + sum1 - (r * arr[i]);


		Max = max(Max, sum);
        
		Le += arr[i];
	}
	cout << Max;
}

int main()
{   int n;
 cin>>n;
	int arr[n] ;//= { 1, 2, 3, 4 };

 for (int i =0; i<n;i++)
     cin>>arr[i];
 
	compute(arr, n);

	return 0;
}

// Counting sort which takes negative numbers as well
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;



void countSort(vector<int>& arr,int div,int mod,int range)
{
	// int max = *max_element(arr.begin(), arr.end());
	// int min = *min_element(arr.begin(), arr.end());
	// int range = max - min + 1;
//   cout<<"After sorting on "<<exp<<" place -> ";
  
	vector<int> count(range), output(arr.size());

//   makeing frequency array
	for (int i = 0; i < arr.size(); i++)
		count[arr[i]/div%mod]++;

//  convert it into prefix sum array
	for (int i = 1; i < count.size(); i++)
		count[i] += count[i - 1];

// stable sorting 
	for (int i = arr.size() - 1; i >= 0; i--) {
		output[count[arr[i]/div%mod] - 1] = arr[i];
		count[arr[i]/div%mod]--;
	}


//  fiilling original array with helpof output array
	for (int i = 0; i < arr.size(); i++)
		arr[i] = output[i];
}

void printArray(vector<int>& arr)
{
    
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i]<<endl;
// 	cout << "\n";
}



// void radixsort(vector<int>& a)
// {
//   int max = *max_element(a.begin(), a.end());

//   int exp =1;
//   while (exp<=max)
//   {
//       countSort(a,exp);
//       exp=exp*10;

//   }



  void sortdates(vector<int> &arr)
  {
       countSort(arr,1000000,100,32);   //days 
	   countSort(arr,10000,100,13);      //months
	   countSort(arr,1,10000,2501);      //years



  }

     


int main()
{   int n;
    cin>>n;
	vector<int> arr;
	
	for (int i = 0; i < n; i++) 
        {
            int temp;
            cin>>temp;
            arr.push_back(temp);
        }
	
	sortdates(arr);
	// printArray(arr);
	printArray(arr);
	return 0;
}

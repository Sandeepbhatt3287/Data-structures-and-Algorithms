// Counting sort which takes negative numbers as well
#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;







void countSort(vector<int>& arr,int exp)
{
	int max = *max_element(arr.begin(), arr.end());
	// int min = *min_element(arr.begin(), arr.end());
	// int range = max - min + 1;

	vector<int> count(10), output(arr.size());

//   makeing frequency array
	for (int i = 0; i < arr.size(); i++)
		count[arr[i]/exp%10]++;

//  convert it into prefix sum array
	for (int i = 1; i < count.size(); i++)
		count[i] += count[i - 1];

// stable sorting 
	for (int i = arr.size() - 1; i >= 0; i--) {
		output[count[arr[i]/exp%10] - 1] = arr[i];
		count[arr[i]/exp%10]--;
	}


//  fiilling original array with helpof output array
	for (int i = 0; i < arr.size(); i++)
		arr[i] = output[i];
}

void printArray(vector<int>& arr)
{
	for (int i = 0; i < arr.size(); i++)
		cout << arr[i] <<endl;
// 	cout << "\n";
}



void radixsort(vector<int>& a)
{
  int max = *max_element(arr.begin(), arr.end());

     
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
	
	countSort(arr);
	printArray(arr);
	return 0;
}

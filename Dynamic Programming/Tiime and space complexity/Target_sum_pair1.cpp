#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;

void input(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
}

// void print(vector<int> &arr)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         cout << arr[i] << endl;
//     }
//     cout << endl;
// }


void targetSumPair( vector<int> &arr,int target)
{
    sort(arr.begin(),arr.end());

    int li=0;
    int ri=arr.size()-1;
    while (li<ri)
    {
        if (arr[li]+arr[ri]<target)
        {
            li++;
        }else if(arr[li]+arr[ri]>target)
        {
            ri--;
        }else
        {
           cout<<arr[li]<<", "<<arr[ri]<<endl;
           li++;
           ri--;
        }
    }
}

// used for swapping ith and jth elements of array

int main()
{
    int n;
    cin >> n;
    vector<int> A(n, 0);
    input(A);
    int target;
    cin>>target;
  targetSumPair(A,target);
    // print(A);
    return 0;
}
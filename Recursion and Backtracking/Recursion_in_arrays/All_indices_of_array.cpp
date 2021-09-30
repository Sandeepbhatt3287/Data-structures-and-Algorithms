
#include<iostream>
using namespace std;

void firstIndex(int arr[], int idx, int x, int n){
    // write your code here
    // int a[1];
    if (idx==n)
    return ;
    
    if (x==arr[idx])
    {cout<<idx<<endl;}
    firstIndex( arr, idx+1,x,n);
    
}

int main()
{
    int n;
    cin >> n;
    int d;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cin >> d;
     firstIndex(arr, 0, d, n);
    // cout << p << endl;
}
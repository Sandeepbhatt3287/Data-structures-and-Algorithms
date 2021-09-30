#include <iostream>
using namespace std;

void display(int arr[], int idx, int n){
    // write your code here
    if (idx==n)
    return;
    
    // cout<<arr[n-1]<<endl;  //starting fro the end
    display(arr,idx,n-1);
    
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    display(arr, 0, n);
}

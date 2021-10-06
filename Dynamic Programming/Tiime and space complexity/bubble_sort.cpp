#include <iostream>
using namespace std;

void bubble(int arr[], int n){
    // write your code here
      for (int i =1; i<n;i++)
       for (int j =0;j<n-i;j++)
       {  cout<<"Comparing "<<arr[j+1]<<" and "<<arr[j]<<endl;
          if (arr[j+1]<arr[j])
          {   cout<<"Swapping "<<arr[j+1]<<" and "<<arr[j]<<endl;
               int temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
         }
     }

// }
// void swap(int arr[],int i ,int j)
// {
//     int temp=arr[i];
//     arr[i]=arr[j];
//     arr[j]=temp;
// }

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    bubble(arr,n);
    
    
     for (int i = 0; i < n; i++)
        cout<<arr[i]<<endl;
}

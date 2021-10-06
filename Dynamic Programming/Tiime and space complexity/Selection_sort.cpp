#include <iostream>
using namespace std;

void Selection(int arr[], int n){
    // write your code here

      for (int i =0; i<n-1;i++)
        {   
            int min=i;
                for (int j =i+1;j<n;j++)
                {   
                        cout<<"Comparing "<<arr[j+1]<<" and "<<arr[j]<<endl;
                        if (arr[j]<arr[min])
                        { 
                          min=j;
                            // min=arr[j+1];
                        }
                }
                swap(arr,i,min);
                 
        }
}
void  swap(int arr[],int i, nt j)
{
  cout<<"Swapping "<<arr[j+1]<<" and "<<arr[j]<<endl;
                            int temp=arr[j+1];
                            arr[j+1]=arr[j];
                            arr[j]=temp;
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    Selection(arr,n);
    
    
     for (int i = 0; i < n; i++)
        cout<<arr[i]<<endl;

}

#include<iostream>
using namespace std

void insertion(int arr[],int n)

{
  for (int i=1;i<n;i++)
   {
    for(in j =i;j<i;j--)
    {
        if(arr[j]<arr[j-1])
        {
            int temp =arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            break;
        }
    } 
   }

}

int main ()
{

 int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    
    insertion(arr,n);
    
    
     for (int i = 0; i < n; i++)
        cout<<arr[i]<<endl;


}
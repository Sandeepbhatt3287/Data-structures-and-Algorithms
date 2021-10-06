#include<iostream>
using namespace std;

void insertion(int arr[],int n)

{
  for (int i=1;i<n;i++)
   {
    for(int j =i-1;j>=0;j--)
    {

        cout<<"Comparing "<<arr[j+1]<<" and "<<arr[j]<<endl;
        if(arr[j]>arr[j+1])
        {    
            cout<<"Swapping "<<arr[j]<<" and "<<arr[j+1]<<endl;
            int temp =arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        
        }else
        break;
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
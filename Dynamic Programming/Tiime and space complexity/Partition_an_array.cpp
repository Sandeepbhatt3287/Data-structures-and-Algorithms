#include<iostream>
using namespace std;


void partition(int arr[],int n, int p)

{
   
  int i =0;
  int j=0;

  while (i<n)
  {
      if (arr[i]>p)
      {
          i++;

      }else
      {
          cout<<"Swapping "<<arr[i]<<" and "<<arr[j]<<endl;
          int temp =arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
          i++;
          j++;
      }

  }


}

int main()
{
    int n;
    cin>>n;

    int a[n];

for(int i=0;i<n;i++)
cin>>a[i];
int pivot;
cin>>pivot;


partition(a,n,pivot);

for(int i=0;i<n;i++)
  cout<<a[i]<<" ";


}
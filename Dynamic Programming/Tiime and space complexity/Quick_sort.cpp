#include<iostream>
using namespace std;



void quicksort(int arr[], int lo, int hi)

{
    if(lo>=hi)
    return;

int pivot= a[hi];
int pi = partition(arr,pivot,lo,hi);
quicksort(arr,lo,pi-1);
quicksort(arr,pi+1,hi);
 
}

int partition(int arr[],int p, int lo,int hi)

{
   
  int i =lo;
  int j=lo;

  while (i<hi)
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

 cout<<"pivot index -> "<<j-1;
 return (j-1);

}



int main()
 {
    int n;
    cin>>n;

    int a[n];
 
for(int i=0;i<n;i++)
cin>>a[i];
// int pivot;
// cin>>pivot;


// partition(a,pivot,0,n);
quicksort(a,0,n-1);

   for(int i=0;i<n;i++)
      cout<<a[i]<<" ";


 }
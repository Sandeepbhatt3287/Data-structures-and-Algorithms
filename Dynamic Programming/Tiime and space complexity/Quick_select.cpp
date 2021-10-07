#include<iostream>
using namespace std;

int partition(int arr[],int p, int lo,int hi)

{
   
  int i =lo;
  int j=lo;

  while (i<=hi)
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

 cout<<"pivot index -> "<<j-1<<endl;
 return (j-1);

}


void quickselect(int arr[], int lo, int hi,int k)

{
    // if(lo>hi)
    // return;

int pivot= arr[hi];
    cout<<"pivot->"<<pivot<<endl;

int pi = partition(arr,pivot,lo,hi);
if (k<pi)
quickselect(arr,lo,pi-1,k);
else if (k>pi)
quickselect(arr,pi+1,hi,k);
 else
 cout<<arr[pi];
}




int main()
 {
    int n;
    cin>>n;

    int a[n];
 
for(int i=0;i<n;i++)
cin>>a[i];
int k;
cin>>k;


quickselect(a,0,n-1,k-1);

//    for(int i=0;i<n;i++)
    //   cout<<a[i]<<" ";


 }
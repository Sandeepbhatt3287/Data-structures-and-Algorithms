#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    int data;
    cin>>data;
   int low=0;
    int high =n-1;
    int fi=-1;
    
    
    while (low <=high)
    {
        int mid = (low+high)/2;
        if (data>a[mid])
        {
            low=mid+1;
        }else if(data <a[mid])
        {
            high=mid-1;
        }else
        {
            fi =mid;
            high =mid -1;
            // return 0;
        }
    }
      cout<<fi<<endl;
    low=0;
    high =n-1;
    int li=-1;
    
    
    while (low <=high)
    {
        int mid = (low+high)/2;
        if (data>a[mid])
        {
            low=mid+1;
        }else if(data<a[mid])
        {
            high=mid-1;
        }else
        {
            li =mid;
            low =mid+1;
            // return 0;
        }
    }
      cout<<li<<endl;
}

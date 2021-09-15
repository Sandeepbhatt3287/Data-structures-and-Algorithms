#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
   int low=0;
    int high =n-1;
    int data ;
    cin>>data;
    
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
            cout<<mid<<endl;
            return 0;
        }
    }
      cout<<-1<<endl; 
}

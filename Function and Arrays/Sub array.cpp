#include<iostream>
using namespace std;



int main(){
    int n;
    cin>>n;
    int* a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    // cin>>r;
    
    
    for(int i = 0;i<n;i++)
    { for(int k =i+1;k<=n;k++)    {
         for (int j=i;j<k;j++)
      {   cout<<a[j]<<" "; 
       
        }
        cout<<endl;
    }
     
        
     
    }   
}

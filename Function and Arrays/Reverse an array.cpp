#include<iostream>
using namespace std;


void reverse (int* a,int i, int j)
{
    while (i<j)
    {
         int temp = a[i];
         a[i]=a[j];
         a[j]=temp;
         ++i;
         --j;
    }
}
void rotate(int* a, int n, int k){
   // write your code here
    // int size= sizeof(a)/sizeof(a[0]);
   k= k%n;
    // cout<<"k"<<size<<endl;
  if(k<0)
  k+=n;
  
  reverse (a,0,n-k-1);
  reverse (a,n-k,n-1);
  reverse(a,0,n-1);
}

void display(int* a, int n){
    for(int i = 0 ; i < n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int n, r;
    cin>>n;
    int* a = new int[n];
    for(int i = 0 ; i < n; i++){
        cin>>a[i];
    }
    cin>>r;
    rotate(a,n,r);
    display(a,n);
}

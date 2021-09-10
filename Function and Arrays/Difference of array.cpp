#include<bits/stdc++.h>
using namespace std;
int main(int argc, char** agrc){

 //write your code here
    int n1,n2;
     cin>>n1;
    
    int a[n1];
    
    for (int i=0; i<n1;i++)
    {
        cin>>a[i];
    }
    cin>>n2;
    int b[n2];
    
    for (int i=0; i<n2;i++)
    {
        cin>>b[i];
    }
    
    int dif[n2];
    int c=0;
    
    int i = sizeof(a) / sizeof(a[0]) - 1;
    int j = sizeof(b) / sizeof(b[0]) - 1 ;
    int k = sizeof(dif) / sizeof(dif[0]);
    
    
    while(j>=0)
    {  int d=0;
     int alv = i >=0 ? a[i]:0;
        if (b[j]+c >=alv){
            d = b[j]+c-alv;
            c=0;
        }
     else{
          d = b[j]+10+c-alv;
         c = -1;
        }
      
     // c=d/10;
     // d=d%10;
     
     dif[j] =d;
     i--;
     j--;
     // k--;
    }
   
    int idx=0;
//     checking for leading zeros in the answer array
    while(dif[idx]==0){
        ++idx;
    }
    
//     print the remaining array after zeroes
    while (idx<k)
    {
        cout<<dif[idx++]<<endl;
    }
    

 
    } 

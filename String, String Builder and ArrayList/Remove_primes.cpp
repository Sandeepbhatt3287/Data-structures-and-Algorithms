#include<bits/stdc++.h>
// #include<string.h>
using namespace std;


int main ()
{
    int n;
    cin>>n;
    int a[n];

    for ( int i =0;i<n;i++)
    {
        cin>>a[i];
    }

     for (int j =0;j<n;j++)
     {
         for (int div=2;div*div=a[j];div++)
         {
             if (div%a[j]==0)
             {
                 cout<<a[j];
             }
         }
     }

}
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

cout<<"[";
     for (int j =0;j<n;j++)
     { int c=0;
         for (int div=2;div*div<=a[j];div++)
         {
             if (a[j]%div==0)
             {
                 c=1; break;
             }
         }
     
      if (c==1)
      cout<<a[j]<<",";
     }

 cout<<"]";
}
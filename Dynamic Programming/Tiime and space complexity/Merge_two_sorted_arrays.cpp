#include<iostream>
using  namespace std;


void mergetwo(int a[],int b[],int n,int m)
{
   int res[m+n];

   int i=0,j=0,k=0;

   while(i<n && j<m)
   {
       if (a[i]<b[j])
        {
            res[k]=a[i];
            i++;
            k++;
        }
        else
        {
            res[k]=b[j];
            j++;
            k++;
        }
         
   }
   while (i<n)
   {
       res[k]=a[i];
       i++;
       k++;
   }
   

   while (j<m)
   {
       res[k]=b[j];
       j++;
       k++;
   }



// printing finla array
   for ( int i = 0; i <m+n ; i++)
        cout<<res[i]<<endl;



}

int main()
{
 
int n,m;
cin>>n;

int a[n];

for(int i=0;i<n;i++)
cin>>a[i];
     
cin>>m;

int b[m];

for(int i=0;i<m;i++)
cin>>b[i];

mergetwo(a,b,n,m);
     

}
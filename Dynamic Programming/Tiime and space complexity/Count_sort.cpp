#include<iostream>
using namespace std;

 void countsort(int arr[],int min ,int max,int n)
 {
   int range =max -min +1;

   int farr[range];

   for (int  i = 0; i < n; i++)
   {
       int idx =arr[i]-min;
       farr[idx]++;
   }
   for (int i=1;i<range;i++)
   {
       farr[i]=farr[i]+farr[i-1];
   }

   int ans[n];

   for (int i =n=1 ; i>=0;i--)
   {
       int val =arr[i];
       int pos =farr[val -min];
       int idx =pos -1;
       ans[idx]=val;
       farr[val-min]--;
   }

   for (int i = 0; i <n; i++)
   {
       cout<<arr[i]<<endl;
   }
   
   
 }


int main()
{

}
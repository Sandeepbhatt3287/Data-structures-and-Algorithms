//1. You are given a square matrix of size 'n'. You are given n*n elements of the square matrix. 
//2. You are required to find the saddle price of the given matrix and print the saddle price. 
//3. The saddle price is defined as the least price in the row but the maximum price in the column of the matrix.




#include<iostream>
using namespace std;



int main(){
    int n,m;
    
    cin>>n;
    // cin>>m;
    m=n;
    
    int a[n][m];
    
    for(int i = 0 ; i < n; i++)
        for(int j = 0 ; j < m; j++)
    {
          cin>>a[i][j];
    }
    
    for(int i = 0 ; i < n; i++)
      { int svj=0;
        for(int j = 1 ; j < m; j++)
         
       {   
          if (a[i][j]<a[i][svj])
           { 
            svj=j;
            }
       }
        
       int flag =1;
       for (int k =0;k<n;k++)
       {
           if (a[k][svj]>a[i][svj])
           {
               flag=0;
               break;
           }
       }
       if (flag == 1)
       {
           cout<<a[i][svj]<<endl;
           return 0;
       }
      
    }
      cout<<"Invalid input"<<endl;
}

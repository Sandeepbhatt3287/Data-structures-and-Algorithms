//1. You are given a number n, representing the number of rows and number of columns.
//2. You are given n*n numbers, representing elements of 2d array a.
//3. You are required to rotate the matrix by 90 degree clockwise and then display the contents using display function.
//*Note - you are required to do it in-place i.e. no extra space should be used to achieve it .*


include<iostream>
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
    
    for(int j=0;j<m;j++)
    {
        for(int i=n-1;i>=0;i--)
    cout<<a[i][j]<<" ";
    cout<<endl;    
    }
}

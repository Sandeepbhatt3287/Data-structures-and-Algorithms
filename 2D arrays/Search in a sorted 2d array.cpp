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
    int b;
    cin>>b;
    
        for(int i = 0 ; i < n; i++)
        for(int j = 0 ; j < m; j++)
    {   if (a[i][j]==b)
                {
                      cout<<i<<endl<<j;
                    return 0;
                }
    }
     cout<<"Not Found"<<endl;
}

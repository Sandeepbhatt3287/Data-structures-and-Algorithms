#include<iostream>
using namespace std;



int main(){
    int n,m;
    
    cin>>n;
    cin>>m;
    
    int a[n][m];
    
    for(int i = 0 ; i < n; i++)
        for(int j = 0 ; j < m; j++)
    {
          cin>>a[i][j];
    }
    
    int minc=0;
    int minr=0;
    int maxr=n-1;
    int maxc=m-1;
    int tne=n*m;
    int cnt=0;
    
    
while (cnt< tne)
{  
    // left wall
  for(int i=minr, j = minc ; i <= maxr && cnt< tne ; i++)
  { 
      cout<<a[i][j]<<endl;
      cnt++;
  }
    minc++;
    
    // bottom wall
    for(int i=maxr, j = minc ; j<= maxc && cnt< tne ; j++)
  { 
      cout<<a[i][j]<<endl;
      cnt++;
  }
    maxr--;
    
    // right wall
    for(int i=maxr, j = maxc ; i >= minr && cnt< tne ; i--)
  { 
      cout<<a[i][j]<<endl;
      cnt++;
  }
    maxc--;
    // top wall
    
    for(int i=minr, j = maxc ; j >= minc && cnt< tne ; j--)
  { 
      cout<<a[i][j]<<endl;
      cnt++;
  }
    minr++;
}   
    
}

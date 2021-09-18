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
    
    int dir=0; //0-e,1-s,2-w,3-n.
    int i=0;
    int j=0;
 
    while (1)
    {
    
    dir = (dir +a[i][j])%4;
    
    if (dir ==0 ){
        // east
        j++;
    }
    else if (dir ==1 )
    {
        // south
        i++;
    }
     else if (dir ==2 )
    {
        // west
        j--;
    }
     else if (dir ==3 )
    {
        // north
        i--;
    }
        
        
        if (i<0){
            i++;
            break;
        }
        else if (j<0){
            j++;
            break;
        }else if (i==n){
            i--;
            break;
        }else if (j == m){
            j--;
            break;
        }
     
 } //end while loop
    cout<<i<<endl;
     cout<<j<<endl;
}

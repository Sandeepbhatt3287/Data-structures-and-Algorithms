#include<bits/stdc++.h>
// #include<string.h>
using namespace std;


void Dec(int n)
{
    if (n==0)
    return;
    cout<<n<<endl;
    Dec(n-1);
}


int main(){
  int n;
  cin>>n;
  Dec(n);
  
  return 0;

}
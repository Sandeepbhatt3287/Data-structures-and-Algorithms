#include <iostream>
using namespace std;

void printStairPaths(int n, string path){
    // write your code here
    
    // base case
    if (n<0)
        return;
    if(n==0)
    {
        cout<<path<<endl;
        return;
    }
    
    printStairPaths(n-1,path + "1");
    printStairPaths(n-2,path + "2");
    printStairPaths(n-3,path + "3");
    
    
}

int main(){

    int n;
    cin >> n;
    printStairPaths(n, "");
}
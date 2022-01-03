#include <iostream>
using namespace std;

void printPermutations(string str, string asf){
    // write your code here

    if(str.size()== 0)
    {   
        cout<<asf<<endl;
        return;
    }
    
    for(int i=0;i<str.size();i++)
    {
        char ch =str.at(i);
        string leftstr = str.substr(0,i);
        string rigthstr = str.substr(i+1);
        string roq = rigthstr + leftstr;
        
        printPermutations(roq,asf+ch);
        
    }
    
}

int main(){
    string str;
    cin>>str;
    printPermutations(str,"");
    
}
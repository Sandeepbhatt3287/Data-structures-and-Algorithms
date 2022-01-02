#include <iostream>
using namespace std;

void printSS(string ques, string ans){
    // write your code here
    
//     base case
    if(ques.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    
    char  ch = ques.at(0);
    string roq = ques.substr(1);
    
    printSS(roq,ans + "");
    printSS(roq,ans + ch);
    
}

int main(){
    string str;
    cin >> str;
    printSS(str, "");
}
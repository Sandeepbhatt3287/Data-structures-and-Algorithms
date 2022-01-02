#include <iostream>
using namespace std;

string codes[] = {".;", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tu", "vwx", "yz"};

void printKPC(string ques, string ans){
    // write your code here

     if(ques.size()==0)
    {
        cout<<ans<<endl;
        return;
    }
    
    char ch_option =ques.at(0);
     string roq = ques.substr(1);

     string codeforch =codes[ch_option - '0'];

     for(int i =0; i< codeforch.size(); i++)
     {
         char cho = codeforch.at(i);
         printKPC(roq,ans + cho);
     }
}

int main(){
    string str;
    cin >> str;
    printKPC(str, "");
}
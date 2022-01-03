#include <iostream>
#include<string>
using namespace std;

void printEncoding(string ques, string asf){
    // write your code here
    
    if(ques.size() == 0)
    {
     cout<<asf<<endl;
      return;
    }  else if(ques.size()==1)
    { 
        char ch =ques.at(0);
        if(ch =='0')
        {
            return;
        }
            else{
                int chv = ch - '0';
                char code = char ('a' + chv -1);
                // asf = asf + code ;
                cout<<(asf+code)<<endl;
            }
    }  else 
    {
        char ch = ques.at(0);
        
        string roq = ques.substr(1);
        
        if(ch == '0')
            return ;
        else
        {
            int chv =ch-'0';
            char code = (char)('a'+chv - 1);
            printEncoding(roq, asf + code);
        }
        
        string ch12 = ques.substr(0,2);
        string roq12 = ques.substr(2);
        
        int ch12v;
        ch12v = stoi(ch12);       //using type converting string to integer
        
        if(ch12v<=26)
        {
            char code = (char)('a'+ ch12v -1);
            printEncoding(roq12,asf+code);
        }
    }
    
}

int main(){
    string str;
    cin>>str;
    printEncoding(str,"");
    
}
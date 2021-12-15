#include <iostream>
#include <vector>
using namespace std;

vector<string> gss(string s){
    // write your code here
      if(s.size()==0)
    {
        vector<string> ans;
        ans.push_back("");
        return ans;
    }
    
    char ch=s.at(0);
    string rres=s.substr(1);
    vector<string> rans=gss(rres);
    // cout<<rans<<"\n";
    
    vector<string> fans;
    for(auto str: rans)
    {
        fans.push_back(""+str);
    }
    for(auto str: rans)
    {
        fans.push_back(ch + str);
    }
    
    return fans;
  
}

int main(){
    string s;
    cin >> s;
    vector<string> ans = gss(s);
    int cnt = 0;

    cout << '[';
    for (string str : ans){
        if (cnt != ans.size() - 1)
            cout << str << ", ";
        else
            cout << str;
        cnt++;
    }
    cout << ']';
}
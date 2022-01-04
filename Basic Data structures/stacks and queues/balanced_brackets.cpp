#include <bits/stdc++.h>
using namespace std;

string balanced( string str)
{
    stack <char> st;
    
    for (int i =0; i<str.size();i++)
    {
        char ch=str[i];
     if (ch=='('|| ch=='{'||ch=='[')
        {
            st.push(ch);
        }
        else if (ch == ')')
        {
            if(st.size()==0)
            {
                return "false";
            }
            else if(st.top()!='(')
                return "false";
            else 
                st.pop();
            // return true;
        }
        else if(ch =='}')
        {
            if(st.size()==0)
            {
                return "false";
            }
            else if(st.top()!='{')
                return "false";
            else 
                st.pop();
            // return true;

        }
        else if(ch==']')
        {
              if(st.size()==0)
            {
                return "false";
            }
            else if(st.top()!='[')
                return "false";
            else 
                st.pop();
            // return true;
        }
    }
    if (st.size()==0)
        return "true";
    else
        return "false";
    
}


int main(int argc, char** argv)
{
  //write your code
    
    string str;
    getline(cin,str);
 
    cout<<balanced(str);
    
  return 0;
}
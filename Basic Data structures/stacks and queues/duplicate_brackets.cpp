#include<iostream>

#include<bits/stdc++.h>

using namespace std;


string duplicate( string str)
{
     stack<char> st;
    
    for (int i =0; i<str.length();i++)
    {
        char ch = str[i];
        
        if(ch==')')
        {
            if(st.top()=='(')
            {
                // cout<<"true";
                return "true";
             }
            else
            {
                while(st.top()!='(')
                {
                    st.pop();
                }
                st.pop();
            }
        }
        else
            st.push(ch);
        
    }
         return "false";
     
}

int main(){
        
    string str;
    getline(cin,str);
 
    cout<<duplicate(str);
    
      return 0;
    }
    

 
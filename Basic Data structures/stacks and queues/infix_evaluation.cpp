#include <bits/stdc++.h>
#include <ctype.h>
using namespace std;


int operation(int v1,int v2,char optor)
  {
    if(optor=='+')
        return v1+v2;
    else if (optor=='-')
        return v1-v2;
    else if(optor=='*')
        return v1*v2;
    else
    { return v1/v2;
    }
  }


int precedence(char optor)
  {
    if(optor=='+')
        return 1;
    else if (optor=='-')
        return 1;
    else if(optor=='*')
        return 2;
    else
        return 2;
  }  


int main() {
  string str;
  getline(cin, str);
  // write your code here
   
    stack<int> opd;
    stack<char> opt;
    
    for (int i=0;i<str.size();i++)
    {
        char ch = str[i];
        
        if(ch=='(')
        {
         opt.push(ch);   
        }
        else if(isdigit(ch))
        {
            opd.push(ch-'0');     // char into int
        }
        else if(ch==')')
        {
            while (opt.top()!= '(')
            {
                char optor =opt.top();
                opt.pop();
                int v2 = opd.top();
                opd.pop();
                int v1 = opd.top();
                opd.pop();
                int  opv = operation(v1,v2,optor);
                
                opd.push(opv);
            }
            opt.pop();
        }
        else if (ch=='+' || ch=='-' || ch=='*'|| ch=='/')
        {
      while (opt.size()>0 && opt.top()!='(' && precedence(ch)<= precedence(opt.top()))
                   {
                char optor =opt.top();
                opt.pop();
                int v2 = opd.top();
                opd.pop();
                int v1 = opd.top();
                opd.pop();
                int opv = operation(v1,v2,optor);
                
                opd.push(opv);

                   }
            opt.push(ch);
        }
        
       }
     while (opt.size()!= 0)
            {
                char optor = opt.top();
                opt.pop();
                int v2 = opd.top();
                opd.pop();
                int v1 = opd.top();
                opd.pop();
                int  opv = operation(v1,v2,optor);
                opd.push(opv);
            }
   cout<<(opd.top());

  return 0;
}
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
  
  stack<string> post;
  stack<string> pre;
  stack<char> ops;
  
  for (int i =0;i<str.size();i++)
  {
      char ch = str[i];
      
      if(ch =='(')
      {
       ops.push(ch);   
      }else if ((ch>='0' and ch <='9') || (ch>='a' and ch<='z')|| (ch >='A' and ch<='Z') )
      {  
          string res;
          res+=ch;
       post.push(res);
       pre.push(res);
      }else if (ch ==')')
      {
          while(ops.top()!='(')
          {
              char op = ops.top();
              ops.pop();
              string postv2= post.top();
              post.pop();
              string postv1= post.top();
              post.pop();
              
              string postv = postv1 + postv2 + op;
              
              post.push(postv);
              
              string prev2= pre.top();
              pre.pop();
              string prev1= pre.top();
              pre.pop();
              
              string prev = op + prev1 + prev2 ;
              
              pre.push(prev);
              
          }
          ops.pop();
          
      }
      else if(ch=='+'|| ch=='-'||ch=='*'||ch=='/')
      {
          while( ops.size()>0 and ops.top()!='(' and precedence(ch)<=precedence(ops.top()))
          {
              char op = ops.top();
              ops.pop();
              string postv2= post.top();
              post.pop();
              string postv1= post.top();
              post.pop();
              
              string postv = postv1 + postv2 + op;
              
              post.push(postv);
              
              string prev2= pre.top();
              pre.pop();
              string prev1= pre.top();
              pre.pop();
              
              string prev = op + prev1 + prev2;
              
              pre.push(prev);
              
          }
          ops.push(ch);
         
      }
  }
   while(ops.size()>0)
          {
              char op = ops.top();
              ops.pop();
              string postv2= post.top();
              post.pop();
              string postv1= post.top();
              post.pop();
              
              string postv = postv1 + postv2 + op;
              
              post.push(postv);
              
              string prev2= pre.top();
              pre.pop();
              string prev1= pre.top();
              pre.pop();
              
              string prev = op+prev1 + prev2 ;
              
              pre.push(prev);
              
          }
    
         cout<<post.top()<<endl;
         cout<<pre.top();

  return 0;
}
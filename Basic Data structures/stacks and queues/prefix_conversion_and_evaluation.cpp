#include <bits/stdc++.h>
using namespace std;


int operation(int v1,int v2,char optor)
  {
    if(optor=='+')
        return v1+v2;
    else if (optor=='-')
        return v1-v2;
    else if(optor=='*')
        return v1*v2;
    else if(optor=='/')
    return v1/v2;
    else
        return 0;
  }



int main() {
  string exp;
  getline(cin, exp);

  // write yout code here
  
  stack<int> vs;
  stack<string> is;
  stack<string> ps;
  
  for (int i =exp.size()-1;i>=0;i--)
  {
      char ch = exp.at(i);
      
      if(ch == '+'|| ch== '-'||ch=='*'|| ch=='/')
      {
          int v1 = vs.top();
          vs.pop();
          int v2 = vs.top();
          vs.pop();
          
          int val = operation(v1,v2,ch);
          
          vs.push(val);
          
        //   infix
          string iv1 = is.top();
          is.pop();
          
          string iv2 = is.top();
          is.pop();
          
          string ival = "(" +iv1+ch+iv2 +")";
          is.push(ival);
          
          
        //   prefix
          string pv1= ps.top();
          ps.pop();
          
          string pv2 = ps.top();
          ps.pop();
          
          string pval = pv1+pv2+ch;
          
          ps.push(pval);
      }
      else 
      {    
          string res;
          res+=ch;
          
          vs.push(ch-'0');
          is.push(res);
          ps.push(res);
      }
  }
  cout<<vs.top()<<endl;
    
  cout<<is.top()<<endl;
  cout<<ps.top();
  return 0;
}
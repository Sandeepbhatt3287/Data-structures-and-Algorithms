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
    else
    { return v1/v2;
    }
  }



int main() {
  string exp;
  getline(cin, exp);

  // write yout code here
  
  stack<int> vs;
  stack<string> is;
  stack<string> ps;
  
  for (int i =0;i<exp.size();i++)
  {
      char ch = exp.at(i);
      
      if(ch == '+'|| ch== '-'||ch=='*'|| ch=='/')
      {
          int v2 = vs.top();
          vs.pop();
          int v1 = vs.top();
          vs.pop();
          
          int val = operation(v1,v2,ch);
          
          vs.push(val);
          
        //   infix
          string iv2 = is.top();
          is.pop();
          
          string iv1 = is.top();
          is.pop();
          
          string ival =  iv1+ch+iv2;
          is.push(ival);
          
          
        //   prefix
          string pv2 = ps.top();
          ps.pop();
          string pv1 = ps.top();
          ps.top();
          string pval = ch+ pv1 + pv2;
          ps.push(pval);
      }
      else 
      {
          vs.push((ch));
          is.push((ch));
          ps.push((ch));
      }
  }
  cout<<vs.top();
  cout<<is.top();
  cout<<ps.top();
  return 0;
}
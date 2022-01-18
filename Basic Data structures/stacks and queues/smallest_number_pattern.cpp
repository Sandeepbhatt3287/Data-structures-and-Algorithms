#include<iostream>
#include <string>
#include <stack>
using namespace std;



int main() {
  string str;
  cin >> str;

  // write your code here
  stack<int> st;
  int num=1;
  
  for(int i=0;i<str.size();i++)
  {
      char ch = str[i];
      if (ch =='d')
      {
          st.push(num);
          num++;
      }else
      {
          st.push(num);
          num++;
          while (st.size()>0)
          {
              cout<<st.top();
              st.pop();
          }
      }
  }
   st.push(num);
          while (st.size()>0)
          {
              cout<<st.top();
              st.pop();
          }

  return 0;
}
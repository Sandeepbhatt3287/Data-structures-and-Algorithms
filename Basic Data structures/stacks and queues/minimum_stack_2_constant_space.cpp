#include<iostream>
#include <string>
#include <stack>

using namespace std;


class MinStack {
  stack<int> data;
  int minVal;


public:
  int size() {
    // write your code here
    return data.size();
  }

public:
  void push(int val) {
    // write your code here
    if(data.size()==0)
    {
        data.push(val);
        minVal=val;
        
    }else if (minVal<=val)
    {
        data.push(val);
    }
    else {
        
        // storing fake value in data stack.
        data.push(val+val-minVal);
        minVal=val; //original vlaue store in min
        
    }
  }

public:
  int pop() {
    // write your code here
    
    if(size()==0){
        cout<<"Stack underflow"<<endl;
        return -1;
    }else{
        int val = data.top();
        data.pop();
        if(data.top()<minVal)
        {  
              int ov=minVal;
            minVal=2*minVal-data.top();
               data.pop();
            return ov;
           
        }else
        {
            return data.top();
            data.pop();
        }
            
        }
  }

public:
  int top() {
    // write your code here
     if(size()==0)
      {
        cout<<"Stack underflow"<<endl;
        return -1;
      }
     else
     {
        if(data.top()>=minVal)
        {
            return data.top();
        }
         else
        {
            return minVal;
        }
      }
  }

public:
  int min() {
    // write your code here
    if(size()==0)
    {
        cout<<"Stack underflow"<<endl;
        return -1;
    }
    else{
        return minVal;
    }
  }
};

int main() {
  MinStack st;

  string str;
  cin >> str;

  while (str != "quit") {

    if (str == "push") {
      int val;
      cin >> val;
      st.push(val);
    }
    else if (str == "pop") {
      int val = st.pop();
      if (val != -1) {
        cout << val << endl;
      }
    }
    else if (str == "top") {
      int val = st.top();
      if (val != -1) {
        cout << val << endl;
      }
    }
    else if (str == "size") {
      cout << st.size() << endl;
    }
    else if (str == "min" ) {
      int val = st.min();
      if (val != -1) {
        cout << val << endl;
      }
    }

    cin >> str;

  }

}
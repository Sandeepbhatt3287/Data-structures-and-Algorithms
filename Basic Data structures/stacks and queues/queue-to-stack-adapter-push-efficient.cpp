#include <iostream>
#include <exception>
#include <queue>
using namespace std;

class QueueToStackAdapter {
public:
  queue<int> mainQ;
  queue<int> helperQ;

  int size() {
    // write your code here
    return mainQ.size();
  }

  void push(int data) {
    // write your code here
    mainQ.add(data);
  }

  int top() {
    // write your code here
    if(size()==0)
    {
        cout<<"Stack overflow"<<endl;
        return -1;
    }else
    {
         while(mainQ.size()>1)
        {
            helperQ.add(mainQ.remove());
        }
        int val = mainQ.remove();
        helperQ.add(val);
        
        while (helperQ.size()>0)
        {
            mainQ.add(helperQ.remove());
        }
        return val;
    }
  }

  int pop() {
    // write your code here
    if(size()==0)
    {
        cout<<"Stack overflow"<<endl;
        return -1;
    }else 
    {
        while(mainQ.size()>1)
        {
            helperQ.add(mainQ.remove());
        }
        int val = mainQ.remove();
        while (helperQ.size()>0)
        {
            mainQ.add(helperQ.remove());
        }
        return val;
    }
  }
};

int main() {
  QueueToStackAdapter st;
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
    cin >> str;
  }
  return 0;
}
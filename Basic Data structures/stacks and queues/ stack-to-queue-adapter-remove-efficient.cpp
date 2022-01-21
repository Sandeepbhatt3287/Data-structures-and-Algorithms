#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class StackToQueueAdapter {
public:
  stack <int> mainS;
  stack <int> helperS;

  int size() {
    // write your code here
  }

  void add(int val) {
// write your code here
  }

  int Remove() {
    // write your code here
  }

  int peek() {
    // write your code here
  }
};

int main() {
  string str;
  StackToQueueAdapter qu;
  while (true) {
    getline(cin, str);
    if (str[0] == 'q') {
      break;
    }
    else if (str[0] == 'a') {
      string ss = str.substr(4, 2);
      int n = stoi(ss);
      qu.add(n);
    }
    else if (str[0] == 's') {
      cout << qu.size() << endl;
    }
    else if (str[0] == 'r') {
      int val = qu.Remove();
      if (val != -1) {
        cout << val << endl;
      }
    } else if (str[0] == 'p') {
      int val = qu.peek();
      if (val != -1) {
        cout << val << endl;
      }
    }

  }
  return 0;
}
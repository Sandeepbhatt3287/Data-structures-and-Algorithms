#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

class TwoStack {
public:
  vector<int> data;
  int tos1;
  int tos2;

  TwoStack(int cap) {
    // write your code here
  }

  int size1() {
    // write your code here
  }

  int size2() {
    // write your code here

  }

  void push1(int val) {
    // write your code here
  }

  void push2(int val) {
    // write your code here

  }

  int pop1() {
// write your code here
  }

  int pop2() {
    // write your code here
  }

  int top1() {
    // write your code here
  }

  int top2() {
    // write your code here
  }
};

int main() {
  string str;

  int cap;
  cin >> cap;
  TwoStack st(cap);

  while (true) {
    getline(cin, str);
    if (str[0] == 'q') {
      break;
    }
    else if (str[0] == 'p' && str[4] == '1') {
      string ss = str.substr(6, 2);
      int n = stoi(ss);
      st.push1(n);

    }
    else if (str[0] == 't' && str[3] == '1') {
      int tp = st.top1();
      if (tp != -1) cout << tp << endl;
    }
    else if (str[0] == 'p' && str[3] == '1') {
      int tp = st.pop1();
      if (tp != -1) cout << tp << endl;
    }
    else if (str[0] == 'p' && str[4] == '2') {
      string ss = str.substr(6, 2);
      int n = stoi(ss);
      st.push2(n);

    }
    else if (str[0] == 't' && str[3] == '2') {
      int tp = st.top2();
      if (tp != -1) cout << tp << endl;
    }
    else if (str[0] == 'p' && str[3] == '2') {
      int tp = st.pop2();
      if (tp != -1) cout << tp << endl;
    }

  }
  return 0;

}
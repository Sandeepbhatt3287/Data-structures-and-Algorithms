#include <iostream>
#include <exception>
#include <stack>
using namespace std;

class StackToQueueAdapter {
public:
  stack<int> mainS;
  stack<int> helperS;

  int size() {
    // write your code here
  }

  void add(int data) {
    // write your code here
  }

  int peek() {
    // write your code here
  }

  int remove() {
    // write your code here
  }
};

int main() {
  StackToQueueAdapter q;
  string str;
  cin >> str;

  while (str != "quit") {
    if (str == "add") {
      int val;
      cin >> val;
      q.add(val);
    }
    else if (str == "remove") {
      int val = q.remove();
      if (val != -1) {
        cout << val << endl;
      }
    }
    else if (str == "peek") {
      int val = q.peek();
      if (val != -1) {
        cout << val << endl;
      }
    }
    else if (str == "size") {
      cout << q.size() << endl;
    }
    cin >> str;
  }
  return 0;
}
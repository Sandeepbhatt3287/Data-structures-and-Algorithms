#include <iostream>
#include <exception>
using namespace std;

class DynamicQueue {
public:
  int* arr;
  int sizeQ;
  int front;
  int arrSize;

  DynamicQueue(int cap) {
    sizeQ = 0;
    front = 0;
    arr = new int[cap];
    arrSize = cap;
  }

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

  void display() {
    // write your code here
  }
};

int main() {
  int n;
  cin >> n;
  DynamicQueue q(n);
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
    else if (str == "display") {
      q.display();
    }
    cin >> str;
  }
  return 0;
}





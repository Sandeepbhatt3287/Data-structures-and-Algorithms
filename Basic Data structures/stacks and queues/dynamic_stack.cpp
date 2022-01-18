#include <iostream>
#include <exception>
using namespace std;

class Stack {

public:
  int* arr;
  int tos;
  int MaxCapacity;

public:
  Stack(int size) {
    this->MaxCapacity = size;
    this->arr = new int[this->MaxCapacity];
    this->tos = -1;
  }

public:
  Stack() {
    Stack(10);
  }

public:
  int size() {
    // write your code here
  }

public:
  void push(int data) {

    // write your code here
  }

public:
  int top()
  {
    // write your code here
  }

public:
  int pop()
  {
    // write your code here
  }

public:
  void display() {
    // write your code here
  }
};

int main() {
  int n;
  cin >> n;
  Stack st(n);
  string str;
  cin >> str;

  while (str != "quit") {
    if (str == "push") {
      int val;
      cin >> val;
      st.push(val);
    } else if (str == "pop") {
      int val = st.pop();
      if (val != -1) {
        cout << val << endl;
      }
    } else if (str == "top") {
      int val = st.top();
      if (val != -1) {
        cout << val << endl;
      }

    } else if (str == "size") {
      cout << st.size() << endl;
    } else if (str == "display") {
      st.display();
    }
    cin >> str;
  }
}
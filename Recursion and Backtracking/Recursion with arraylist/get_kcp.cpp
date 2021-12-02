#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<string> getKPC(string s) {
  //Write your code here
}


int main() {
  string s;
  cin >> s;
  vector<string> ans = getKPC(s);
  int cnt = 0;

  cout << '[';
  for (string str : ans) {
    if (cnt != ans.size() - 1)
      cout << str << ", ";
    else
      cout << str;
    cnt++;
  }
  cout << ']';
}
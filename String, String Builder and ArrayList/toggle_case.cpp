#include<iostream>
#include<string>
using namespace std;

string togglecase(string &str)
{   
    string str1;
  //write your code here
  for (int i =0;i<str.length();i++)
  { 
      if(str[i]>='a' && str[i]<='z')
      {
        char uch=('A'+ str[i] - 'a');   
        str1.push_back(uch);
      }
      else
      {
           char lch=('a' + str[i] -'A');   
        str1.push_back(lch);

      }
  }
   // cout<<str1;
  return str1;

}

int main() {
  string str;
  getline(cin, str);
  cout<<togglecase(str);
  return 0;
}
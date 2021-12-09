#include<iostream>
#include<string.h>

using namespace std;

string printstr(string str)
{
  //write your code here

  string str1;
    
    str1=str[0];
    
 for (int i=1;i<str.length();i++)
   {

    char current = str[i];
    char previous = str[i-1];

    int gap = current-previous;
  // cout<<gap;
     str1 += to_string(gap);
     str1.push_back(current);   
   }
 
    // cout<<str1;
  return str1;

}
int main()
{
  string str;
  getline(cin, str);
  cout<<printstr(str);
  return 0;
}
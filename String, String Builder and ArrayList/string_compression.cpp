#include<bits/stdc++.h>
// #include<string.h>
using namespace std;


// duplicates function
string duplicates(string str)
{ 
  string str1;
  str1=str[0];

  for (int i=1;i<str.length();i++)
  {
    char curr = str[i];
    char  prev = str[i-1];

    if(curr != prev)
    {
       str1 +=curr;
    }

  }
  return str1;
}

string compression(string str)
{ 
  string str1;
  str1=str[0];
int count=1;
  for (int i=1;i<str.length();i++)
  {
    char curr = str[i];
    char  prev = str[i-1];
 
    if(curr == prev)
    {  
        ++count;
      
    }
      else
      { if(count>1)
         {
           str1 +=to_string(count);
          count =1;
         }          
          str1 +=curr;
      }

  }
    if(count>1)
         {
           str1 +=to_string(count);
          count =1;
         }
  return str1;
}


int main( )
{

    string str;
    getline(cin,str);
    cout<<duplicates(str);
    cout<<endl<<compression(str);
    

}
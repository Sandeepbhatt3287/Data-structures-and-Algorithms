#include<bits/stdc++.h>
using namespace std;


int main(int argc, char** agrc){

string str;
getline(cin,str);


int li=0,ri=str.length();

int Palindrom(string &ss)
{  while (li<ri)
   {
    if (str[li]!=str[ri])
     return 0;

     li++;
     ri--;
  }
  return 1;
}


for (int i =0;i<ri;i++)
   { for (int j =i+1;j<ri;j++)
     {
        string ss = str.substr(i,j);
           // string str1 = str[i];
       if (Palindrom(ss)==1)
          {
              cout<<ss<<endl;
          }

     }
   }
   
 }
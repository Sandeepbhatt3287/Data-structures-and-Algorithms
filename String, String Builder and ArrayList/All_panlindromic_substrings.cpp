#include<bits/stdc++.h>
using namespace std;


int main(int argc, char** agrc)
{

    string str;
    getline(cin,str);


     int li=0,ri=str.length();


bool isPal( string &ss)
 { 
     while (li<ri)
   {
    if (ss[li]!=ss[ri])
     return false;
     li++;
     ri--;
    }
  return true;
};



for (int i =0;i<ri;i++)
   { for (int j =i+1;j<ri;j++)
     {
        string ss = str.substr(i,j);
           // string str1 = str[i];


       if (isPal(ss)==true)
          {
              cout<<ss<<endl;
          }

     }
   }
   
}
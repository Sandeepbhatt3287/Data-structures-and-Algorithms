#include<bits/stdc++.h>
using namespace std;



bool isPal( string str)
 {    
     int li=0,ri=str.length()-1;
     while (li<ri)
   {
    if (str[li]!=str[ri])
         return false;
         
     li++;
     ri--;
    }
  return true;
}

void solve(string str)
{  
    string temp;
for (int i =0;i<str.length();i++)
   { for (int j =1;j<=str.length()-i;j++)
     {
        temp = str.substr(i,j);
           // string str1 = str[i];


       if (isPal(temp)==true)
          {
              cout<<temp<<endl;
          }

     }
   }
}
int main(int argc, char** agrc)
{

    string str;
    getline(cin,str);
    solve(str);
}
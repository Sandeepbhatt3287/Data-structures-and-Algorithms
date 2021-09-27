#include<bits/stdc++.h>
// #include<string.h>
using namespace std;



string duplicates(string str)
{ string s1=str;
  int  index = 0;
     for (int i=0; i <str.length();i++)
         {
             int j ;
             for(j=0;j<i;j++)
           if (s1[i]==s1[j] )    
           { break; }
     if (j==i)
     s1[index++]=s1[i];
 
         }  
  return s1;
}


int main( )
{

    string str;
    getline(cin,str);
    cout<<duplicates(str);
    

}
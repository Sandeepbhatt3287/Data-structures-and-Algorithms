#include<bits/stdc++.h>
// #include<string.h>
using namespace std;




void duplicates(string str)
{
  int  index = 0;
     for (int i=0; i <str.length();i++)
         {
             int j ;
             for(j=0;j<i;j++)
           if (str[i]==str[j] )
           { break; }
     if (j==i)
     str[index++]=str[i];
         }  

 str;
}


int main(int argc, char** agrc)
{

    string str;
    getline(cin,str);
    duplicates(str);

}
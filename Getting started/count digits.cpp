//count digits of a number

 #include<iostream>
using namespace std;
int main(int argc, char** agrc){

 //write your code here
 int l,dig=0;
 cin>>l;

    
for(;l!=0;)
{ 
    l=l/10;
    dig++;
}
    cout<<dig;
}

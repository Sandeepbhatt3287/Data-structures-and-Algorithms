#include <iostream>
using namespace std;


// linked list node

struct node {
// public:
  int val;     //data 
  node* next;     // head->next;  pointer
    
    node(int x)
    {
        val=x;
        next=NULL;      // next pointing to NULL
    }
    
};


// printing values using recursion

void print( node *head)
{
  if(head==NULL)
      return;
    
    cout<<head->val<<endl;

    // recursive call 

    print(head->next);
        
}

int main(){

//   new values
    node *head= new node(10);
    head->next= new node(20);

//  printing values

    print(head);
    return 0;
    
}
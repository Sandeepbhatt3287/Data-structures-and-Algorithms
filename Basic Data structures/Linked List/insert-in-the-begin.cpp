// Insert at the beginning of singly linked list



#include <iostream>
using namespace std;
struct node {
// public:
  int val;
  node* next;
    
    node(int x)
    {
        val=x;
        next=NULL;
    }
    
};

node *insertbegin( node *head,int x)
{
    
    node *temp =new node(x);
    temp->next=head;
     return temp;
        
}

void print( node *head)
{
  if(head==NULL)
      return;
    
    cout<<head->val<<endl;

    // recursive call 

    print(head->next);
        
}


int main(){
    
    node *head= NULL;
    
    
    head= insertbegin(head,10);
    head= insertbegin(head,20);
    head= insertbegin(head,30);
    head= insertbegin(head,40);
    
    print(head);
    return 0;
    
}
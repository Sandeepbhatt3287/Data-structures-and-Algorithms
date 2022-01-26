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

void print( node *head)
{
  node *cur=head;
    
    while(cur!=NULL)
    {
        cout<<cur->val<<endl;
        cur=cur->next;
    }
}

int main(){
    node *head= new node(10);
    head->next= new node(20);
    print(head);
    return 0;
    
}
// GFG linked list



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

node *insertend( node *head,int x)
{
    
    node *temp =new node(x);
    
    if(head==NULL)
        return temp;
    
    node *cur=head;
    while(cur->next!=NULL)
        cur=cur->next;
    
    cur->next=temp;
    
     return head;
        
}

node *deletehead(node *head,int x)
{
    if(head ==NULL)
        return NULL;
    else{
        node *temp=head->next;
        
        delete head;
        
        return temp;
    }
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
    
    
    head= insertend(head,10);
    head= insertend(head,20);
    head= insertend(head,30);
    head= insertend(head,999999);
    
     print(head);
  
    cout<<"\nLinked list after delete  head"<<endl;
    
    head=deletehead(head,10);
    
    print(head);
    return 0;
    
}
// using GFG 



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


node *given_position(node *head,int pos,int data)
{   
    node *temp=new node(data);
    if(pos==1)
    {// return NULL;
      temp->next=head;
        return temp;
    }
       node *cur=head;
    
    for(int i=1;i<pos-2 and cur!=NULL;i++)
        cur=cur->next;
    
    
    if(cur==NULL)
        return head;
    
    temp->next=cur->next;
    
    cur->next=temp;
    
    return head;
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
  
    cout<<"\nLinked list after insert at given point "<<endl;
    
    head=given_position(head,2,222);
    
    
    head=given_position(head,9,222);   //this will not print 
    
    print(head);
    return 0;
    
}
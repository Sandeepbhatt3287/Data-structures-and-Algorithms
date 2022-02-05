
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

node *Sortedinsert(node *head,int x)
{   
    node *temp=new node(x);

    if(head==NULL)
    {
       return temp;
    }
    
    if(x<head->val)
    {
        temp->next=head;

        return temp;
    }
    
    node *cur=head;

    while( cur->next!=NULL && cur->next->val<x)
    {
        cur=cur->next;
    }

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

    cout<<"\nOriginal linked list"<<endl;
    
    print(head);
    
    head =Sortedinsert(head,45);
    
    cout<<"\nAfter Insertion linked list"<<endl;
    
     print(head);
    
    // print(head);
    return 0;
    
}
// using GFG 
#include <iostream>
using namespace std;


struct node {
  int data;
  node*next;
  node*prev;
    
 node(int x)
    {
        data=x;
        next=prev=NULL;
    }
};



node *Delete_head( node *head)
 {  
    if(head==NULL)
        return NULL;
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }else
    {
        node *temp=head;
        
        head=head->next;
        head->prev=NULL;
        
        delete temp;
        return head;
        
     }
    
 }


void print( node *head)
{
  if(head==NULL)
      return;
    
    cout<<head->data<<endl;

    // recursive call 
   print(head->next);
}


int main(){
    
    
    
    node *head= new node(10);
    node *temp1=new node(20);
    node *temp2= new node(30);
    
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    
    cout<<"\n original Double LL"<<endl;
     print(head);
    
    
   head= Delete_head(head);
    
    
    
    cout<<"\nDouble linked list Delete at head result... "<<endl;
    
    print(head);
  
    return 0;
    
}
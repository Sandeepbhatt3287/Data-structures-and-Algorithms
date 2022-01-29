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



void reverse( node **head_ref)
{
    node *temp = NULL;
    node *current = *head_ref;
     
    /* swap next and prev for all nodes of
    doubly linked list */
    while (current != NULL)
    {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;            
        current = current->prev;
    }
     
    /* Before changing the head, check for the cases like empty
        list and list with only one node */
    if(temp != NULL )
        *head_ref = temp->prev;
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
    
    
    reverse(&head);
    
    
    
    cout<<"\nDouble linked list Reverse result... "<<endl;
    
    print(head);
  
    return 0;
    
}
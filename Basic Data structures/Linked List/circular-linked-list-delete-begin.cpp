// using GFG 
#include <iostream>
using namespace std;


struct node {
  int data;
  node*next;
  // node*prev;
    
 node(int x)
    {
        data = x;
        next = NULL;
    }
};



node *Delete_begin(node *head)
  { 
    
       if(head==NULL)
       {  
           
           return NULL;
       }
    if(head->next==NULL)
    {
        delete head;
        return NULL;
    }
    

    // version 1
    node *cur=head;
    
    while(cur->next!=head)
        cur=cur->next;
    
    cur->next=head->next;
    delete head;
    return cur->next;
  }
    
  
void print( node *head)
{
  if(head==NULL)
      return;
 cout<<head->data<<endl;

    
//     method 2
      node *p=head->next;
    do{
        cout<<p->data<<endl;
        p=p->next;
        
    }while(p!=head);
}


int main(){
    
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next=head;

    
    cout<<"\nOriginal circular LL"<<endl;
    print(head);
    
    head=Delete_begin(head);
    cout<<"\nCircular  LL after Delete in begin "<<endl;
    
    print(head);
    return 0;
    
}
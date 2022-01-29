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

node *insert_end(node *head,int data)
  { 
     node *temp=new node(data);
    
       if(head==NULL)
       {  
           temp=temp->next;
           return temp;
       }
    
    node *cur=head;
    
    while(cur->next!=head)
        cur=cur->next;
    
    cur->next=temp;
    temp->next=head;
    return head;
    
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
    
    head=insert_end(head,456);
    cout<<"\nCircular  LL after insertion at end "<<endl;
    print(head);
    return 0;
    
}
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
    
    head->data=head->next->data;
    
    node *temp=head->next;
    
    head->next=head->next->next;
    
    delete temp;
    
    return head;
    
  }

node *delete_kth(node *head,int k)
{
    if(head==NULL)
        return head;
    
    if(k==1)
        return Delete_begin(head);
    
    node *cur=head;
    
    for(int i=0;i<k-2;i++)
        cur=cur->next;
    
    node *temp=cur->next;
    cur->next=cur->next->next;
    delete temp;
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
    
    head=delete_kth(head,2);
    cout<<"\nCircular  LL after Delete in begin "<<endl;
    
    print(head);
    return 0;
    
}
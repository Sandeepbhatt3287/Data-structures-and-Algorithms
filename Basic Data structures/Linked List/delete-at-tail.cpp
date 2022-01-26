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

// deletion on tail

node *deletetail(node *head,int x)
{
    if(head ==NULL)
        return NULL;
    
    if(head->next==NULL)
        return NULL;
    
       node *cur=head;
    
    while (cur->next->next!=NULL)
        cur=cur->next;
    delete(cur->next);
    
    cur->next=NULL;
    
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
  
    cout<<"\nLinked list after delete tail "<<endl;
    
    head=deletetail(head,0);
    
    print(head);
    return 0;
    
}
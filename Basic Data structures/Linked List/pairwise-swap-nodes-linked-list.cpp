// pairwise-swap-nodes-linked-list


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

node *pairswap(node *head)
  {
   if(head==NULL||head->next==NULL)
       return NULL;
    node *cur=head->next->next;
    node *prev=head;
    head =head->next;
    head->next=prev;
    
    while (cur!=NULL && cur->next!=NULL)
    {
        prev->next=cur->next;
        prev=cur;
        node *next=cur->next->next;
        cur->next->next=cur;
        cur=next;
    }
    prev->next=cur;
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
    
    
    head= insertend(head,1);
    head= insertend(head,20);
    head= insertend(head,30);
    head= insertend(head,3);
    head= insertend(head,999999);

    cout<<"\nOriginal linked list"<<endl;
    
    print(head);
    
    head=pairswap(head);
     
    cout<<"\nLinked list after segregate"<<endl;
    
    print(head);
    
    return 0;
    
}
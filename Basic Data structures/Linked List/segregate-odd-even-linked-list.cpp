

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

node *segregate(node *head)
  {
   node *es=NULL,*ee=NULL,*os=NULL,*oe=NULL;
    
    for(node *cur=head;cur!=NULL;cur=cur->next)
    { 
        int a=cur->val;
    
    if(a%2==0)
    {
        if(es==NULL)
        {
            es=cur;
            ee=es;
        }
        else
        {
            ee->next=cur;
            ee=ee->next;
        }
    }
    else 
    {
        if(os==NULL)
        {
            os=cur;
            oe=os;
        }
        else{
            oe->next=cur;
            oe=oe->next;
        }
    }
 }
    
    if(os==NULL||es==NULL)
    return head;
    
    ee->next=os;
    oe->next=NULL;
     return es;
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
    
    head=segregate(head);
     
    cout<<"\nLinked list after segregate"<<endl;
    
    print(head);
    
    return 0;
    
}
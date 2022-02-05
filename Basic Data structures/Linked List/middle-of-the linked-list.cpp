
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



// (efficient solution)


void middle(node *head)
{    
      
  if(head==NULL)
      return;
    
    node *slow=head,*fast=head;
    
    while (fast!=NULL && fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    cout<<(slow->val);

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
    
    cout<<"\nMiddle of  linked list"<<endl;
    middle(head);
    
    return 0;
    
}
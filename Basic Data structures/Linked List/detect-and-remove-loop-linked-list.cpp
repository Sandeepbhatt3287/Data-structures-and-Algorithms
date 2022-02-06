// Using floyd cycle detection


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




// Recersive method

void detectandremove(node *head)
{    
    node *slow_p=head,*fast_p=head;
    
    while (fast_p!=NULL && fast_p->next!=NULL)
    {
        slow_p=slow_p->next;
        fast_p=fast_p->next->next;
        if(slow_p==fast_p)
            break;
    }

    if(slow_p!=fast_p)
    return;

slow_p=head;

while(slow_p->next!=fast_p->next)
{
    slow_p=slow_p->next;
    fast_p=fast_p->next;

}
fast_p->next=NULL;

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
    
    detectandremove(head);
    
    
    return 0;
    
}
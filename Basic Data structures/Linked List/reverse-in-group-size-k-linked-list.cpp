
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

// naive solution

// node *revlist(node *head)
// {    
//     vector<int> arr;
//     for(node *cur=head;cur!=NULL;cur=cur->next)
//         arr.push_back(cur->val);
    
//     for(node *cur=head;cur!=NULL;cur=cur->next)
//     {
//         cur->val=arr.back();
//         arr.pop_back();
//     }
    
//     return head;
    
// }



// Recersive method

node *revlist(node *head,int k)
{    node *cur=head,*next=NULL;
     node *prev=NULL;
  int count=0;
 while (cur!=NULL && count<k)
 {
     next=cur->next;
     cur->next=prev;
     
    prev=cur;
     cur=next;
     count++;
 }
 
 if(next!=NULL)
 {
     node *rest_head=revlist(next,k);
     head->next=rest_head;
 }
    return prev;
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
    head= revlist(head,2);
    cout<<"\nReverse of linked list"<<endl;
    print(head);
    
    return 0;
    
}
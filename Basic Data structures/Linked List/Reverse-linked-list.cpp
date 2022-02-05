
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

node *revlist(node *head)
{    
    vector<int> arr;
    for(node *cur=head;cur!=NULL;cur=cur->next)
        arr.push_back(cur->val);
    
    for(node *cur=head;cur!=NULL;cur=cur->next)
    {
        cur->val=arr.back();
        arr.pop_back();
    }
    
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

    cout<<"\nOriginal linked list"<<endl;
    
    print(head);
    head= revlist(head);
    cout<<"\nReverse of linked list"<<endl;
    print(head);
    
    return 0;
    
}
// using GFG 

// Iterative solution

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


int Search(node *head,int x)
{   
    node *cur=head;
    int pos=1;
    
    while(cur!=NULL)
    {
        if(cur->val==x)
        {
            return pos;
            
        }else{
            ++pos;
            cur=cur->next;
        }
    }
    
    return -1;
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
  
    cout<<"\nSearching result... "<<endl;
    
    cout<<Search(head,20)<<endl;
    
    
    cout<<Search(head,999999)<<endl;   
    
    // print(head);
    return 0;
    
}
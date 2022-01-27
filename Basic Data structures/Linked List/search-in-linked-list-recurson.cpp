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


int Search(node *head,int x)
{   
  if(head==NULL)
      return -1;
    
    if(head->val==x)
        return 1;
    else
    {
      int res=Search(head->next,x);
        if(res==-1)
            return -1;
        else
            return (res+1);
    }
    
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
    
    int size=0;
    cin>>size;
    
    for (int i=0;i<size;i++)
    {   
        int x;
        cin>>x;
        head= insertend(head,x);
    }
    
    // head= insertend(head,20);
    // head= insertend(head,30);
    // head= insertend(head,999999);
    
     print(head);
  
    cout<<"\nSearching result... "<<endl;
    
    cout<<Search(head,20)<<endl;
    
    cout<<Search(head,5)<<endl;   
    
    // print(head);
    return 0;
    
}
// using GFG 
#include <iostream>
using namespace std;


struct node {
  int data;
  node*next;
  node*prev;
    
 node(int x)
    {
        data=x;
        next=prev=NULL;
    }
};



// node *insertBegin( node *head,int data)
// {
//     node *temp =new node(x);
    
//     if(head==NULL)
//         return temp;
    
//     node *cur=head;
//     while(cur->next!=NULL)
//         cur=cur->next;
    
//     cur->next=temp;
    
//      return head;
        
// }


// int Search(node *head,int x)
// {   
//   if(head==NULL)
//       return -1;
    
//     if(head->val==x)
//         return 1;
//     else
//     {
//       int res=Search(head->next,x);
//         if(res==-1)
//             return -1;
//         else
//             return (res+1);
//     }
// }

void print( node *head)
{
  if(head==NULL)
      return;
    
    cout<<head->data<<endl;

    // recursive call 
   print(head->next);
}


int main(){
    
    node *head= new node(10);
    node *temp1=new node(20);
    node *temp2= new node(30);
    
    head->next=temp1;
    temp1->prev=head;
    temp1->next=temp2;
    temp2->prev=temp1;
    
    
//     int size=0;
//     cin>>size;
    
//     for (int i=0;i<size;i++)
//     {   
//         int x;
//         cin>>x;
//         head= insertend(head,x);
//     }
    
    // head= insertBegin(head,10);
    // head= insertend(head,30);
    // head= insertend(head,999999);
    
    
    print(head);
  
    cout<<"\nDouble linked list result... "<<endl;
    
    // cout<<Search(head,20)<<endl;
    
    // cout<<Search(head,5)<<endl;   
    
    // print(head);
    return 0;
    
}
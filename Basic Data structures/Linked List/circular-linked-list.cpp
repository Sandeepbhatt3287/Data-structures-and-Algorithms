// using GFG 
#include <iostream>
using namespace std;


struct node {
  int data;
  node*next;
  // node*prev;
    
 node(int x)
    {
        data = x;
        next = NULL;
    }
};


  
void print( node *head)
{
  if(head==NULL)
      return;
 cout<<head->data<<endl;

// //  method 1
//     for(node *p=head->next;p!=head;p=p->next)
//         cout<<(p->data)<<endl;
    
//     method 2
      node *p=head->next;
    do{
        cout<<p->data<<endl;
        p=p->next;
        
    }while(p!=head);
}


int main(){
    
    node *head = new node(10);
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next=head;

    
    cout<<"\nOriginal circular LL"<<endl;
     print(head);
    return 0;
    
}
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

node *insert_begin(node *head,int data)
  { 
     node *temp=new node(data);
    
       if(head==NULL)
          {
             temp=temp->next;
             return temp;
          }
    else{  
      // method 1st

        // node *cur=head;
        
        // while(cur->next!=head)
        //     cur=cur->next;
        
        // cur->next=temp;
        // temp->next=head;

// method 2nd
   temp->next=head->next;
   head->next=temp;

   int t= head->data;
   head->data=temp->data;
   temp->data=t;

return head;
}
    
    // return temp;
  }
    
  
void print( node *head)
{
  if(head==NULL)
      return;
 cout<<head->data<<endl;

    
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
    
    head=insert_begin(head,456);
    cout<<"\nCircular  LL after insertion at begin "<<endl;
    print(head);
    return 0;
    
}
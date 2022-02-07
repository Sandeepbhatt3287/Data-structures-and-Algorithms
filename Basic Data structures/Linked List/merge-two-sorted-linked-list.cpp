// merge two sorted two linked list
/* C++ program to merge two sorted linked lists */
#include <bits/stdc++.h>
using namespace std;

/* Link list node */
class Node
{
	public:
	int data;
	Node* next;
};




// Function to merge two linked list

Node *SortedMerge(Node *a,Node *b)
   {
     if(a==NULL)
         return b;
    if(b==NULL)
        return a;
    
    Node *head=NULL,*tail=NULL;
    
    if(a->data<= b->data)
    {
        head=tail=a;
        a=a->next;
    }
    else 
    {
        head=tail=b;
        b=b->next;
    }
    
    while (a!=NULL && b!=NULL)
    {
        if(a->data<=b->data)
        {
            tail->next=a;
            tail=a;
            a=a->next;
        }
        else
        {
            tail->next=b;
            tail=b;
            b=b->next;
        }
     }
    
    if(a==NULL)
        tail->next=b;
    else
        tail->next=a;
    
    return head;
   }



/* Function to insert a node at
the beginning of the linked list */
void push(Node** head_ref, int new_data)
{
	/* allocate node */
	Node* new_node = new Node();

	/* put in the data */
	new_node->data = new_data;

	/* link the old list off the new node */
	new_node->next = (*head_ref);

	/* move the head to point to the new node */
	(*head_ref) = new_node;
}

/* Function to print nodes in a given linked list */
void printList(Node *node)
{
	while (node!=NULL)
	{
		cout<<node->data<<" ";
		node = node->next;
	}
}

/* Driver code*/
int main()
{
	/* Start with the empty list */
	Node* res = NULL;
	Node* a = NULL;
	Node* b = NULL;

	push(&a, 15);
	push(&a, 10);
	push(&a, 5);

	push(&b, 20);
	push(&b, 3);
	push(&b, 2);

     cout<<"\nLinked list A"<<endl;
    printList(a);
    
     cout<<"\nLinked list B"<<endl;
    printList(b);
    
    
	/* Remove duplicates from linked list */
	res = SortedMerge(a, b);

    
    
   
	cout << "\nMerged Linked List is: \n";
	printList(res);

	return 0;
}


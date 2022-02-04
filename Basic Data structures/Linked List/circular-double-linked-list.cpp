// insert in  circular double linked list


node*temp=new node(x);
if(head==NULL)
{
    temp->next=temp;
    temp->prev=temp;

    return temp;
}

temp->prev=head->prev;
temp->next=head;
head->prev->next=temp;
head->prev=temp;
return temp;
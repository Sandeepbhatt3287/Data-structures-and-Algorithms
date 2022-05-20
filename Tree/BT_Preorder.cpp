#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node *left, *right;
};

Node* newNode(int data)
{
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void Preorder(struct Node* node){
    if(node != NULL){
        cout<<node->data<<endl;
        Preorder(node->left);
		Preorder(node->right);
    }
}


int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);



	cout << "\nPreorder traversal of binary tree is \n";
	Preorder(root);

	

	return 0;
}
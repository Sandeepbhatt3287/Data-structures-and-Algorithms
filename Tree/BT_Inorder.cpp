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

void Inorder(struct Node* node){
    if(node != NULL){
        Inorder(node->left);
        cout<<node->data<<endl;
		Inorder(node->right);
    }
}


int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);



	cout << "\nInorder traversal of binary tree is \n";
	Inorder(root);

	

	return 0;
}
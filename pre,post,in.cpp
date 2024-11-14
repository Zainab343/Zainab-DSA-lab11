#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *left;
	node *right;
};
class tree{
	public:
	node *root;
	
	tree(int d)
	{
		root=new node();
		root->data=d;
		root->left=NULL;
		root->right=NULL;
	}
	tree(){
	root=nullptr;
	}
	
	void traversePreorder(node *temp){
		if(temp!=NULL){
			cout<<temp->data<<endl;
			traversePreorder(temp->left);
			traversePreorder(temp->right);
		}
		else
		return;
	}
	void traverseInOrder(node *tem){
		if(tem!=NULL){
			traverseInOrder(tem->left);
			cout<<tem->data<<endl;
			traverseInOrder(tem->right);
		}
		else
		return;
	}
		void traversePostOrder(node *pre){
		if(pre!=NULL){
			traversePostOrder(pre->left);
			traversePostOrder(pre->right);
			cout<<pre->data<<endl;
		}
		else
		return;
	}
};
int main(){
	node *root,*n1,*n2,*n3,*n4,*n5,*n6;
	root=new node;
	n1=new node;
	n2=new node;
	n3=new node;
	n4=new node;
	n5=new node;
	n6=new node;
	
	root->data=8;
	root->left=n1;
	root->right=n4;
	
	n1->data=5;
	n1->left=n2;
	n1->right=n3;
	
	n2->data=4;
	n2->left=NULL;
	n2->right=NULL;
	
	n3->data=9;
	n3->left=NULL;
	n3->right=NULL;
	
	n4->data=3;
	n4->left=n5;
	n4->right=n6;
	
	n5->data=2;
	n5->left=NULL;
	n5->right=NULL;
	
	n6->data=7;
	n6->left=NULL;
	n6->right=NULL;
	
	tree t1;
	cout<<"Preorder "<<endl;
	t1.traversePreorder(root);
	cout<<"Inorder "<<endl;
	t1.traverseInOrder(root);
	cout<<"Postorder "<<endl;
	t1.traversePostOrder(root);
	
	
}
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
	void traversePreOrder(node *tem){
		if(tem!=NULL){
			cout<<tem->data<<endl;
			traversePreOrder(tem->left);
			traversePreOrder(tem->right);
		}
		else
		return;
	}
	
	void traversePostOrder(node *tem){
		if(tem!=NULL){
			traversePostOrder(tem->left);
			traversePostOrder(tem->right);
			cout<<tem->data<<endl;
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
};
int main(){
	node *root,*n1,*n2,*n3,*n4,*n5,*n6,*n7,*n8,*n9,*n0;
	root=new node;
	n1=new node;
	n2=new node;
	n3=new node;
	n4=new node;
	n5=new node;
	n6=new node;
	n7=new node;
	n8=new node;
	n9=new node;
	n0=new node;
	
	root->data=12;
	root->left=n1;
	root->right=n5;
	
	n1->data=7;
	n1->left=n2;
	n1->right=n3;
	
	n2->data=3;
	n2->left=NULL;
	n2->right=NULL;
	
	n3->data=9;
	n3->left=NULL;
	n3->right=n4;
	
	n4->data=10;
	n4->left=NULL;
	n4->right=NULL;
	
	n5->data=22;
	n5->left=n6;
	n5->right=n9;
	
	n6->data=18;
	n6->left=n7;
	n6->right=n8;
	
	n7->data=14;
	n7->left=NULL;
	n7->right=NULL;
	
	n8->data=20;
	n8->left=NULL;
	n8->right=NULL;
	
	n9->data=24;
	n9->left=NULL;
	n9->right=n0;
	
	n0->data=30;
	n0->left=NULL;
	n0->right=NULL;
	
	tree t1;
	cout<<"Preorder "<<endl;
	t1.traversePreOrder(root);
	cout<<"Inorder "<<endl;
	t1.traverseInOrder(root);
	cout<<"Postorder "<<endl;
	t1.traversePostOrder(root);
	
	
}
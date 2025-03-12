#include<bits/stdc++.h>
using namespace std;
template <typename T>
class BinaryTreeNode {
public:
	T data;
	BinaryTreeNode<T> *left;
	BinaryTreeNode<T> *right;
	BinaryTreeNode(T data) {
			this->data = data;
			left = NULL;
			right = NULL;
	}
};
//only take the sum ofall nodes which are the left child of some node.

long long leftSum(BinaryTreeNode<int> *root){
	queue< BinaryTreeNode<int>* > q;
	if(root) q.push(root);
	long long sum=0;

	while(!q.empty()){
		BinaryTreeNode<int>* pr= q.front();
		q.pop();

		if(pr->left)
		    sum= sum+ pr->left->data;
		
		if(pr->left) q.push(pr->left);
		if(pr->right) q.push(pr->right);
	}
	return sum;
}

// or.................


long long sum=0;
void leftSum_recursion(BinaryTreeNode<int> *root){
	if(root==NULL) return;
	if(root->left){
		sum= sum+ root->left->data ;
	}
    leftSum_recursion(root->left);
	leftSum_recursion(root->right);
}

long long leftSum(BinaryTreeNode<int> *root){
	sum=0;
	leftSum_recursion(root);
	return sum;
}


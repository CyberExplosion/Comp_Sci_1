#include "BTreeBook.h"

#include <iostream>
void BTreeBook::insert(Node*& tree, int num) {
	//If the tree is empty, make a new node and make it the root of the tree
	if (!tree) {
		tree = new Node(num);
		return;
	}
	//If num is already in tree: then return. This also prevent adding another number that is equal to the root num
	if (tree->value == num)
		return;
	//The tree is not empty: then insert the new node into the left or right subtree
	if (num < tree->value)
		insert(tree->left, num);
	else 
		insert(tree->right, num);
}

void BTreeBook::destroySubTree(Node* tree) {
	//Delete all nodes in the tree
	if (!tree)
		return;
	destroySubTree(tree->left);
	destroySubTree(tree->right);
	//Delete the node at the root
	delete tree;
}

void BTreeBook::remove(Node*& tree, int num) {
	if (tree == nullptr)
		return;
	if (num < tree->value)
		remove(tree->left, num);
	else if (num > tree->value)
		remove(tree->right, num);
	else
		//We have found the node to delete
		makeDeletion(tree);
}

void BTreeBook::makeDeletion(Node*& tree) {
	//Used to hold node that will be deleted
	Node* nodeToDelete = tree;

	//Used to locate the point where the left subtree is  attached
	Node* attachedPoint;

	//Case 1: There are only 1 children
	//When there's only 1 node in the tree, its left and right both points at nullptr. The way this code works is that it will assign the tree to left ptr, which is also nullptr. Ultimately assign root to nullptr
	if (tree->right == nullptr) {
		//Replace the tree with its's left node
		tree = tree->left;
	}
	else if (tree->left == nullptr) {
		//Replace tree with its right subtree
		tree = tree->right;
	}
	//Case 2: The Node has 2 children
	else{
		//Move to the right subtree
		attachedPoint = tree->right;

		//Locate the smallest node in the right subtree by moving as far to the left as possible
		while (attachedPoint->left != nullptr)
			attachedPoint = attachedPoint->left;

		//Attach the left subtree of the original tree as the left subtree of the smallest node in the right subtree
		attachedPoint->left = tree->left;

		//Replace the original tree with its right subtree
		tree = tree->right;
	}
	//Delete the root of original tree
	delete nodeToDelete;
}

void BTreeBook::displayInOrder(Node* tree) const {
	if (tree) {
		displayInOrder(tree->left);
		std::cout << tree->value << "  ";
		displayInOrder(tree->right);
	}
}

void BTreeBook::displayPreOrder(Node* tree) const {
	std::cout << tree->value << "  ";
	displayPreOrder(tree->left);
	displayPreOrder(tree->right);
}

void BTreeBook::displayPostOrder(Node* tree) const {
	displayPostOrder(tree->left);
	displayPostOrder(tree->right);
	std::cout << tree->value << "  ";
}

bool BTreeBook::search(int num) const {
	Node* tree = root;
	while (tree) {
		if (tree->value == num)
			return true;
		else if (num < tree->value)
			tree = tree->left;
		else
			tree = tree->right;
	}
	return false;
}

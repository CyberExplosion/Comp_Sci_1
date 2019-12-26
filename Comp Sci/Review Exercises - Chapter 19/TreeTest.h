#pragma once
#include <string>
#include <iostream>

typedef std::string ItemType;

class TreeTest {
private:
	struct Node {
		ItemType m_data;
		Node* m_left;
		Node* m_right;
		Node(ItemType data, Node* left = nullptr, Node* right = nullptr) : m_data(data), m_left(left), m_right(right) {};
	};
	Node* root;

	//Function

	//Need more stuff
	bool same_tree(Node* tree1, Node* tree2);
	Node* bst_insert(ItemType item, Node* t);
};


#include "TreeTest.h"

bool TreeTest::same_tree(Node* tree1, Node* tree2) {
	//Base Case
	if(tree1 == nullptr && tree2 == nullptr)

	return false;
}

TreeTest::Node* TreeTest::bst_insert(ItemType item, Node* t) {
	//Base Case
	if (t == nullptr)
		t = new Node(item);
	if (t->m_data == item)
		return t;

	//Recursive Case
	Node* ptr = t;
	if (item < t->m_data)
		t->m_left = bst_insert(item, t->m_left);
	else
		t->m_right = bst_insert(item, t->m_right);
}

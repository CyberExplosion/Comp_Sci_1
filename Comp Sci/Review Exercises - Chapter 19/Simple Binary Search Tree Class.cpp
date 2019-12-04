#include <iostream>
#include <vector>
using namespace std;

class BinaryTree {
protected:
	struct TreeNode {
		double value;
		TreeNode* left;
		TreeNode* right;
		TreeNode(double t_val, TreeNode* t_left = nullptr, TreeNode* t_right = nullptr) : value(t_val), left(t_left), right(t_right) {}
	};
	TreeNode* root;
private:
	bool search(double x, TreeNode* t);
	void inOrder(vector<double>& v, TreeNode* t);
public:
	BinaryTree() : root(nullptr) {};
	void insert(double x);
	bool search(double x);
	void inorder(vector<double>& v);
};


int main() {
	BinaryTree tree;
	vector<double>num;

	cout << "Inserting Numbers.\n";
	tree.insert(5);
	tree.insert(8);
	tree.insert(3);
	tree.insert(12);
	tree.insert(9);
	tree.inorder(num);
	if (tree.search(0)) {
		cout << "found \n";
	}
	else
		cout << "Not found\n";
	for (double val : num)
		cout << val << endl;
	cout << "Done.\n";
}

bool BinaryTree::search(double x, TreeNode* t) {
	while (t) {
		if (t->value == x)
			return true;
		else if (x < t->value)
			t = t->left;
		else
			t = t->right;
	}
	return false;
}

void BinaryTree::inOrder(vector<double>& v, TreeNode* t) {
	//Base Case
	if (t == nullptr)
		return;

	//Recursive
	inOrder(v, t->left);
	v.push_back(t->value);
	inOrder(v, t->right);
}

void BinaryTree::insert(double x) {
	if (root == nullptr) {
		root = new TreeNode(x);
		return;
	}

	TreeNode* ptr = root,
		*prev_ptr = ptr;
	//Finding where should the new node be place
	while (ptr) {
		prev_ptr = ptr;
		if (ptr->value == x)
			return;
		else if (x < ptr->value)
			ptr = ptr->left;
		else
			ptr = ptr->right;
	}
	ptr = new TreeNode(x);

	//Reconnect back to the tree
	if (ptr->value < prev_ptr->value)
		prev_ptr->left = ptr;
	else
		prev_ptr->right = ptr;
}

bool BinaryTree::search(double x) {
	return search(x, root);
}

void BinaryTree::inorder(vector<double>& v) {
	inOrder(v, root);
}

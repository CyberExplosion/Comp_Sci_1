#pragma once

class BTreeBook {
private:
	//Tree node
	struct Node {
		int value;
		Node* left;
		Node* right;
		Node(int t_val, Node* t_left = nullptr, Node* t_right = nullptr) {
			value = t_val;
			left = t_left;
			right = t_right;
		}
	};
	Node* root;

	//Verious helper member functions.
	void insert(Node*&, int);
	void destroySubTree(Node*);
	void remove(Node*&, int);
	void makeDeletion(Node*&);
	void displayInOrder(Node*)const;
	void displayPreOrder(Node*) const;
	void displayPostOrder(Node*)const;

public:
	BTreeBook() {
		root = nullptr;
	}
	~BTreeBook() {
		destroySubTree(root);
	}
	void insert(int num) {
		insert(root, num);
	}
	bool search(int) const;
	void remove(int num) {
		remove(root, num);
	}
	void showInOrder(void)const {
		displayInOrder(root);
	}
	void showPreOrder()const {
		displayPreOrder(root);
	}
	void showPostOrder() const {
		displayPostOrder(root);
	}
};


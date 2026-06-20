#include <iostream>
using namespace std;


class node {
public:
	int data;
	node* next;
	node() {
		data = 0;
		next = NULL;
	}
};


node* head;
node* tail;

node* findAddress(int tar) {

	if (head == NULL) {
		cout << "list is empty\n";
		return NULL;
	}

	else {

		node* temp = head;
		bool flag = false;
		while (temp != NULL) {
			if (temp->data == tar) {
				flag = true;
				return temp;
			}
			temp = temp->next;
		}

		if (flag == false) {
			return NULL;
		}

	}

}


void deleteNode(node* x) {

	node* temp = x->next;
	x->data = temp->data;
	temp = temp->next;
	x->next = temp;

}

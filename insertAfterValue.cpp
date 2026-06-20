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


void insertAfterValue(int val, int tar) {


	if (head == NULL) {
		cout << "List is empty\n";
	}

	else {
		bool flag = false;
		node* temp = new node;
		node* x = head;
		temp->data = val;
		while (x != NULL) {
			if (x->data == tar) {
				temp->next = x->next;
				x->next = temp;
				flag = true;
				break;
			}

			x = x->next;
		}

		if (flag == false) {
			cout << "value not found\n";
		}
	}

}

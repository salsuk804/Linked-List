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

void insertAtTail(int val) {

	node* temp = new node;
	temp->data = val;
	temp->next = NULL;
	if (head == NULL) {
		
		head = temp;
		tail = temp;
	}
	else {

		tail->next = temp;
		tail = temp;

	}

}

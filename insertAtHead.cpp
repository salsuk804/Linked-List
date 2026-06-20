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

void insertAtHead(int val) {
	node* temp = new node;
	temp->data = val;
	if (head == NULL) {
		temp->next = NULL;
		head = temp;
		tail = temp;
	}

	else {

		temp->next = head;
		head = temp;

	}
	
}

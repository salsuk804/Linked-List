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

void display() {
	node* temp = head;
	while (temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
}

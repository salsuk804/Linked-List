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

void sortInAscending() {

	node* curr = head;
	int temp = 0;
	bool swapped = true;
	while (swapped == true) {
		swapped = false;
		curr = head;
		while (curr->next != NULL) {
			if (curr->data > curr->next->data) {
				temp = curr->data;
				curr->data = curr->next->data;
				curr->next->data = temp;
				swapped = true;

			}
			curr = curr->next;
		}
	}
}

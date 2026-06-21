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


void sortInDescending() {

	node* curr = head;
	int temp = 0;
	bool swapped = true;
	while (swapped == true) {
		curr = head;
		swapped = false;
		while (curr->next != NULL) {
			if (curr->data < curr->next->data) {
				temp = curr->data;
				curr->data = curr->next->data;
				curr->next->data = temp;
				swapped = true;
			}
			curr = curr->next;
		}
	}


}

#include <bits/stdc++.h>
using namespace std;

class Node {
	
	public: 
	
	int value;
	Node* next;
	
	Node (int val) {
		
		value = val;
		next = NULL;
	}
};


int main () {
	
	Node* head = new Node(10);
	Node* a = new Node(20);
	Node* b = new Node(30);
	Node* c = new Node(60);
	Node* tail = new Node(60);
	
	(*head).next = a;
	(*a).next = b;
	(*b).next = c;
	(*c).next = tail;
	
	Node* tmp = head;
	while (tmp != NULL) {
		
		Node* temp = (*tmp).next;
		while (temp != NULL) {
			if ((*tmp).value == (*temp).value) {
				cout << "YES" << endl;
				return 0;
			}
			temp = (*temp).next;
		}
		
		tmp = (*tmp).next;
	}
	
	cout << "NO" << endl;
	
	return 0;
}

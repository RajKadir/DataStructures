// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void printLinkedList(Node* listNode) {

	// pointer on the first node
	struct Node* p = listNode;

	while (p != 0) {
		cout << p->data << endl;
		p = p->next;
	}
}

int main()
{
	// Link list
	struct Node* firstNode = new Node;
	struct Node* secondNode = new Node;
	struct Node* thirdNode = new Node;

	// Assign values
	firstNode->data = 100;
	firstNode->next = secondNode;
	secondNode->data = 250;
	secondNode->next = thirdNode;
	thirdNode->data = 300;
	thirdNode->next = 0;

	// Print the nodes in the list
	printLinkedList(firstNode);
}



// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

void printLinkedList(Node* head) {
	struct Node* p = head;
	while (p != 0) {
		cout << p->data << endl;
		p = p->next;
	}
}

void printLinkedListRec(Node* head) {
	if (head != NULL) {
		cout << head->data << endl;
		printLinkedListRec(head->next);
	}
}

int lengthOfNodes(Node* head) {
	int sum = 0;
	struct Node* p = head;
	while (p != 0) {
		sum++;
		p = p->next;
	}
	return sum;
}

int lengthOfNodesRec(Node* head) {
	if (head == NULL) 
		return 0;
	else
		return lengthOfNodesRec(head->next) + 1;
}

int sumOfAllNodes(Node* head) {
	int sum = 0;
	while (head != NULL) {
		sum += head->data;
		head = head->next;
	}
	return sum;
}

int sumOfAllNodesRec(Node* head) {
	if (head == NULL)
		return 0;
	else
		return sumOfAllNodes(head->next) + head->data;
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

	cout << "Number of nodes: " << lengthOfNodesRec(firstNode) << endl; 
	cout << "Sum of nodes: " << sumOfAllNodes(firstNode) << endl;
	cout << "Recursive: Sum of nodes: " << sumOfAllNodes(firstNode) << endl;
	
}



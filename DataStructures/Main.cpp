// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
};

int main()
{
	// Link list
	struct Node* startNode;
	startNode = new Node;

	// Assign values
	startNode->data = 100;
	startNode->next = 0;


	cout << "value of start node data is " << startNode->data << endl;
}
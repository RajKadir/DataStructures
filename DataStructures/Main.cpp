// Main.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "LinkedList.cpp"
using namespace std;


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

	cout << "Maximum number in the nodes is: " << findMax(firstNode) << endl;
	cout << "Recursive: Maximum number in the nodes is: " << findMaxRec(firstNode) << endl;


	cout << "Recursive: Smallest int in list: " << findSmallRec(firstNode) << endl;
	cout << "Recursive: Smallest int in list2: " << findSmallRec2(firstNode) << endl;
}



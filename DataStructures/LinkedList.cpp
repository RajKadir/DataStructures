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

int findMax(Node* head) {
	int max = INT_MIN;

	while (head->next) {
		if (head->data > max) {
			max = head->data;
		}
		head = head->next;
	}

	return max;
}
int findMaxRec(Node* head) {
	int max = INT_MIN;
	if (head == NULL)
		return INT_MIN;

	max = findMaxRec(head->next);

	return head->data > max ? head->data : max;
}


int findSmall(Node* head) {
	int small = INT_MAX;
	while (head != NULL) {

		if (head->data < small) {
			small = head->data;
		}

		head = head->next;
	}
	return small;
}

int findSmallRec(Node* head) {
	int small = INT_MAX;
	if (head == NULL) {
		return INT_MAX;
	}

	small = findSmallRec(head->next);


	return head->data < small ? head->data : small;
}

int findSmallRec2(Node* head) {
	int small = INT_MAX;
	if (head == NULL)
		return INT_MAX;

	small = findSmallRec2(head->next);

	if (small < head->data) {
		return small;
	}
	else {
		return head->data;
	}
}

// Linear Search through a LinkedList

Node* findNode(Node* head, int element) {
	while (head != NULL) {

		if (head->data == element) {
			return head;
		}

		head = head->next;
	}

	int* p, * c;

	return NULL;
}

Node* findNodeRec(Node* head, int element) {
	if (head == NULL) {
		return NULL;
	}

	if (head->data == element) {
		return head;
	}

	return findNode(head->next, element);
}

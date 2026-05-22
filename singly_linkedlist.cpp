#include <cstdlib>
#include <iostream>

using namespace std;

class List {
public:
	List();
	void AddNode(int addData);
	void DeleteNode(int delData);
	void PrintList();

private:
	//struct Node {
	//	int data;
	//	Node* next;
	//};

	//typedef struct Node* nodePtr;

	// or

	typedef struct Node {
		int data;
		Node* next;
	}* nodePtr;

	nodePtr head, curr, temp;
};


List::List() {
	head = curr = temp = NULL;
}

void List::AddNode(int addData) {
	nodePtr newNode = new Node;
	newNode->next = NULL;
	newNode->data = addData;

	if (head != NULL) {
		curr = head;
		while (curr->next != NULL) {
			curr = curr->next;
		}
		curr->next = newNode;
	}
	else {
		head = newNode;
	}
}

void List::DeleteNode(int delData) {
	nodePtr delPtr = NULL;
	temp = curr = head;
	while (curr != NULL && curr->data != delData) {
		temp = curr;
		curr = curr->next;
	}
	if (curr == NULL) {
		cout << delData << "was not in the list...\n";
		delete delPtr;
	}
	else {
		delPtr = curr;
		curr = curr->next;
		temp->next = curr;
		delete delPtr;
		cout << "The value " << delData << " was deleted\n";
	}

}

void List::PrintList() {
	curr = head;
	while (curr != NULL) {
		cout << curr->data << endl;
		curr = curr->next;
	}
}

int main(int argc, char** argv) {
	List run;
	run.AddNode(3);
	run.AddNode(4);
	run.AddNode(5);
	run.AddNode(6);
	run.PrintList();

	run.DeleteNode(5);
	run.PrintList();
}
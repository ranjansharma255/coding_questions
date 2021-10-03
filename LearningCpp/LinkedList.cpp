#include <iostream>
#define nline '\n'
using namespace std;

class  Node{
	public:
		int data;
		Node* next;
};

void printList(Node* n) {
	while( n != NULL) {
		cout << n -> data << " ";
		n = n -> next;
	}
	cout << nline;
}

void push(Node** head_ref, int new_data) {
	Node* new_node = new Node();
	
	new_node -> data = new_data;
	
	new_node -> next = (*head_ref);
	
	(*head_ref) = new_node;
}
int main()
{
	Node* head = NULL;
	Node* second = NULL;
	Node* third = NULL;
	Node* fourth = NULL;
	
	head =  new Node();
	second =  new Node();
	third =  new Node();
	fourth = new Node();
	
	head->data = 1;
	head->next = second;
	
	second->data = 2;
	second->next = third;
	
	third->data = 3;
	third->next = fourth;
	
	fourth -> data = 4;
	fourth -> next = NULL;
	
	printList(head);
	
	push(&head, 6);
	
	printList(head);
	return 0;
}

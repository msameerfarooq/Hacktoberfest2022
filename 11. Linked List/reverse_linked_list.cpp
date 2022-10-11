Write a program to reverse a given linked list, and return the reversed list.

Example 1:

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:

Input: head = [1,2]
Output: [2,1]

Example 3:

Input: head = []
Output: []

#include <iostream>
using namespace std;

class Node 
{
public:
    Node(int val)
    {
        this->data = val;
        this->next = NULL;
    }
	int data;
	Node* next;
};

void reverse(Node** head_ref)
{
	Node* curr = *head_ref;
	
	Node* prev = NULL;
	Node* next = NULL;
	
	while (curr != NULL) 
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*head_ref = prev;
}

void push( Node** head_ref, int val)
{
	Node* new_node = new Node(val);
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

void printList( Node* head)
{
	Node* curr = head;
	while (curr != NULL) 
	{
		cout << curr->data << " ";
		curr = curr->next;
	}
	cout << endl;
}

int main()
{
	Node* head = NULL;
	
	push(&head, 20);
	push(&head, 4);
	push(&head, 15);
	push(&head, 85);
	
	cout << "Given Linked List: " << endl;
	printList(head);
	
	reverse(&head);
	
	cout << "Reversed Linked list: " << endl;
	printList(head);
	
	return 0;
}
// C++ program to create a Complete Binary tree from its Linked List
#include <iostream>
#include <string>
#include <queue>
using namespace std;

// Linked list node
struct ListNode
{
	int data;
	ListNode* next;
};

struct BinaryTreeNode
{
	int data;
	BinaryTreeNode *left, *right;
};

void push(struct ListNode** head_ref, int new_data)
{
	// allocate node and assign data
	struct ListNode* new_node = new ListNode;
	new_node->data = new_data;
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}

BinaryTreeNode* newBinaryTreeNode(int data)
{
	BinaryTreeNode *temp = new BinaryTreeNode;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void convertList2Binary(ListNode *head, BinaryTreeNode* &root)
{
	queue<BinaryTreeNode *> q;

	// Base Case
	if (head == NULL)
	{
		root = NULL; 
		return;
	}

	root = newBinaryTreeNode(head->data);
	q.push(root);
	head = head->next;
	while (head)
	{
		BinaryTreeNode* parent = q.front();
		q.pop();
		BinaryTreeNode *leftChild = NULL, *rightChild = NULL;
		leftChild = newBinaryTreeNode(head->data);
		q.push(leftChild);
		head = head->next;
		if (head)
		{
			rightChild = newBinaryTreeNode(head->data);
			q.push(rightChild);
			head = head->next;
		}

		parent->left = leftChild;
		parent->right = rightChild;
	
		
	}
}

// Utility function to traverse the binary tree after conversion
void inorderTraversal(BinaryTreeNode* root)
{
	if (root)
	{
		inorderTraversal( root->left );
		cout << root->data << " ";
		inorderTraversal( root->right );
	}
}

int main()
{
	// create a linked list shown in above diagram
	struct ListNode* head = NULL;
	push(&head, 36);
	push(&head, 30);
	push(&head, 25);
	push(&head, 15);
	push(&head, 12);
	push(&head, 10);

	BinaryTreeNode *root;
	convertList2Binary(head, root);

	cout << "Inorder Traversal of the constructed Binary Tree is: \n";
	inorderTraversal(root);
	return 0;
}

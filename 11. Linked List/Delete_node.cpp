#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL;
    Node *tail = NULL;
    while (data != -1)
    {
        Node *newdata = new Node(data);
        if (head == NULL)
        {
            head = newdata;
            tail = newdata;
        }
        else
        {
            tail->next = newdata;
            tail = newdata;
        }
        cin >> data;
    }
    return head;
}
Node *deleteNode(Node *head, int i)
{

    int count = 0;
    Node *temp = head;
    if (head == NULL)
    {
        return NULL;
    }
    if (i == 0)
    {
        head = head->next;
        delete temp;
        return head;
    }
    else
    {

        while (count <= i - 2 && temp != NULL)
        {
            temp = temp->next;
            count++;
        }
        if (temp != NULL && temp->next != NULL)
        {
            Node *a = temp;
            temp = a->next;
            Node *newnode = temp->next;
            a->next = newnode;
            delete temp;
        }
        return head;
    }
}
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = takeinput();
    int i;
    cin >> i;
    head = deleteNode(head, i);
    print(head);
}
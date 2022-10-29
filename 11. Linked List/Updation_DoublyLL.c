#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} no;
int main()
{
    int n;
    no *head, *last;
    head = NULL;
    last = NULL;
    printf("Enter the total number of nodes in list: ");
    scanf("%d", &n);
    int i, data;
    no *newNode;
    if (n >= 1)
    {
        head = (no *)malloc(sizeof(no));
        printf("Enter data of 1 node: ");
        scanf("%d", &data);
        head->data = data;
        head->prev = NULL;
        head->next = NULL;
        last = head;
        for (i = 2; i <= n; i++)
        {
            newNode = (no *)malloc(sizeof(no));
            printf("Enter data of %d node: ", i);
            scanf("%d", &data);
            newNode->data = data;
            newNode->prev = last;
            newNode->next = NULL;
            last->next = newNode;
            last = newNode;
        }
    }
    no *temp;
    temp = head;
    while (temp->next != 0)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("%d ", temp->data);
    printf("\n");
    int p;
    printf("Enter the position to be updated:");
    scanf("%d", &p);
    int data1;
    printf("Enter a data:");
    scanf("%d", &data1);
    no *temp1;
    temp1 = head;
    for (int i = 0; i < (p-1); i++)
    {
        temp1 = temp1->next;
    }
    temp1->data = data1;
    no *temp2;
    temp2 = head;
    printf("Resultant linked list :\n");
    while (temp2->next != 0)
    {
        printf("%d ", temp2->data);
        temp2 = temp2->next;
    }
    printf("%d ", temp2->data);
    no *temp3;
    temp3=head;
    int length=0;
    while(temp3->next!=0){
        length++;
        temp3=temp3->next;
    }
    return 0;
}
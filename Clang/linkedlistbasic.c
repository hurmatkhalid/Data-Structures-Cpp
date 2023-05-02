#include <stdio.h>
#include <stdlib.h>
// node creation:
struct Node
{
    int data;
    struct Node *next;
};
// displaying the linked list starting from given node
void display(struct Node *n)
{
    while (n != NULL)
    {
        printf("%d", n->data);
        n = n->next;
    }
}
int main()
{
    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // allocate the nodes
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // assigning data
    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    display(head);

    return 0;
}
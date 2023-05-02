#include <stdio.h>
#include <stdlib.h>

// creating a node
struct Node
{
    int data;
    struct Node *next;
};
// inserting a new node on the front of a list
void push(struct Node **head_ref, int new_data)
{
    // allocate a node
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    // put in the data
    new_node->data = new_data;
    // make next of the new node
    new_node->next = (*head_ref);
    // now head is new
    *head_ref = new_node;
}
// inserting in middle anywhere
void insertAfter(struct Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("The given previous node cant be null");
    }
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
}
// inserting at the end
void append(struct Node **head_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last = *head_ref;
    new_node->data = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
    {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    return;
}
void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d", node->data);
        node = node->next;
    }
}
int main()
{
    /* Start with the empty list */
    struct Node *head = NULL;
    append(&head, 6);
    push(&head, 7);
    push(&head, 1);
    insertAfter(head->next, 8);
    printList(head);

    return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

typedef struct sllist 
{
    int val;
    struct sllist *next;
} sllnode;

sllnode *create(int val)
{
    // Dynamically allocate space for a new sllnode.
    sllnode *node;

    node = malloc(sizeof(sllnode));
    // Check to make sure we didn't run out of memory.
    if (node == NULL)
    {
        printf("Error: memory allocation.\n");
        return NULL;
    }
    // Initialize the node's val field.
    node->val = val;
    // Initialize the node's next field.
    node->next = NULL;
    // Return a pointer to the newly created sllnode.
    return node;
}

bool search(sllnode *head, int val) 
{
    // Create a traversal pointer point to the list's head.
    sllnode *current = head;
    // If the current node's val field is what we're looking 
    while (current != NULL)
    {
        if (current->val == val)
        {
            return true;
        }
        // If not, set the traversal pointer to the next pointer
        current = current->next;
    }
    // If you've reached the end of the list, return false.
    return false;
}

sllnode *insert(sllnode *head, int val) 
{
    sllnode *new_node;
    new_node = malloc(sizeof(sllnode));
    if (new_node == NULL)
    {
        printf("Error: memory allocation.\n");
        return NULL;
    }
    // Populate and insert the node at the beginning o
    new_node->val = val;
    new_node->next = head;
    head = new_node;
    return head;
}

void destroy (sllnode *head) 
{
    // If you've reached a null pointer, stop.
    if (head == NULL)
        return;
    // Pointer the rest of the list.        
    destroy(head->next);
    // free the current node.
    free(head);
}

void destroy_node(sllnode *head, int n) 
{
    sllnode *current = head;
    // 0 index node.
    if (n == 0)
    {
        sllnode *removed = current;
        current = current->next;
        free(removed);
    }

    // others

    // last index node
}

int main()
{
    sllnode *first;

    first = create(10);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{

    struct Node *head;
    struct Node *second;
    struct Node *third;

    head   = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third  = (struct Node *)malloc(sizeof(struct Node));

    // link first and second nodes
    head->data = 11;
    head->next = second;

    // link second and third
    second->data = 13;
    second->next = third;

    // terminate
    third->data = 7;
    third->next = NULL;

    linkListTraversal(head);

    return 0;
}


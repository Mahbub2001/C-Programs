#include <stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

void linkListTraversal(struct Node *ptr);

struct Node*insertAtFirst(struct Node *head , int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr ->next = head;
    ptr ->data = data;
    return ptr;
}

int main()
{
    int value;

    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;

    head   = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third  = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 41;
    third->next = fourth;

    fourth->data = 66;
    fourth->next = NULL;

    linkListTraversal(head);

    printf("Enter the value that you want to add : ");
    scanf("%d",&value);

    head = insertAtFirst(head ,value);
    printf("\n");
    linkListTraversal(head);

    return 0;
}
void linkListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d \n", ptr->data);
        ptr = ptr->next;
    }
}


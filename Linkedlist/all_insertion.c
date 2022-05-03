#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head;

int display(struct Node *head)
{
    struct Node *tmp;
    tmp = head;

    while (tmp != NULL)
    {
        printf("%d\t", tmp->data);
        tmp = tmp->next;
    }
}

struct Node *front(struct Node *head)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the value that you want to add : ");
    scanf("%d", &newnode->data);

    newnode->next = head;
    head = head->next;
    head = newnode;

    printf("The updated linklist is : ");
    display(head);
}

struct Node *end(struct Node *head)
{
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data that you want to add : ");
    scanf("%d", &newnode->data);

    struct Node *temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = NULL;

    printf("The updated linklist is : ");
    display(head);
}

struct Node *insertAtIndex(struct Node *head)
{
    int index;
    struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data that you want to add : ");
    scanf("%d", &newnode->data);

    printf("Enter the position where you want to add : ");
    scanf("%d", &index);

    struct Node *temp = head;
    int i = 1;
    while (i < index - 1)
    {
        temp = temp->next;
        i++;
    }
    newnode->next = temp->next;
    temp->next = newnode;

    printf("The updated linklist is : ");
    display(head);
}

struct Node *insertAtAfterNode(struct Node *head, struct Node *previousNode)
{
    int value;
    printf("Enter the value that you ant to add : ");
    scanf("%d", &value);

    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = value;

    ptr->next = previousNode->next;
    previousNode->next = ptr;

    display(head);
}

int main()
{
    struct Node *prev, *head, *p;
    int n, i;
    printf("number of elements:");
    scanf("%d", &n);

    head = NULL;

    for (i = 0; i < n; i++)
    {
        p = (struct Node *)malloc(sizeof(struct Node));

        scanf("%d", &p->data);

        p->next = NULL;

        if (head == NULL)
        {
            head = p;
        }

        else
        {
            prev->next = p;
        }

        prev = p;
    }

    display(head);

    int UserChoice;
    printf("\nEnter '1' for front insertion\n"
           "Enter '2' for end insertion\n"
           "Enter '3' for insertion anywhere ...\n"
           "Enter '4' for after a node....\n");
    scanf("%d", &UserChoice);

    switch (UserChoice)
    {
    case 1:
        front(head);
        break;
    case 2:
        end(head);
        break;
    case 3:
        insertAtIndex(head);
        break;
    case 4:
        insertAtAfterNode(head, head->next->next);
        break;
    default:
        printf("You entered wrong number ");
        break;
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};

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

struct Node *delete_at_front(struct Node *head);
struct Node *delete_at_end(struct Node *head);
struct Node *delete_at_index(struct Node *head);
int searchNode(struct Node *head);
struct Node *delete_with_a_given_value(struct Node *head);

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
    printf("\nENTER '1' FOR FRONT DELETION\n"
           "ENTER '2' FOR END DELETION\n"
           "ENTER '3' FOR DELETE ANYWHERE...\n"
           "ENTER '4' FOR DELETE AT KEY....\n");
    scanf("%d", &UserChoice);

    switch (UserChoice)
    {
    case 1:
        delete_at_front(head);
        break;
    case 2:
        delete_at_end(head);
        break;
    case 3:
        delete_at_index(head);
        break;
    case 4:
        delete_with_a_given_value(head);
        break;
    default:
        printf("You entered wrong number ");
        break;
    }

    return 0;
}
struct Node *delete_at_front(struct Node *head)
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);

    printf("\nUpdated elements are : ");
    display(head);
}

struct Node *delete_at_end(struct Node *head)
{
    struct Node *p = head;
    struct Node *q = head->next;

    while (q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    free(q);

    printf("\nUpdated elements are : ");
    display(head);
}

struct Node *delete_at_index(struct Node *head)
{
    int pos;
    printf("Enter the index number : ");
    scanf("%d", &pos);

    struct Node *current = head;
    struct Node *previous = head;

    if (head == NULL)
    {
        printf("List is already empty");
    }
    else if (pos == 1)
    {
        head = current->next;
        free(current);
        current = NULL;
    }
    else
    {
        while (pos != 1)
        {
            previous = current;
            current = current->next;
            pos--;
        }
        previous->next = current->next;
        free(current);
        current = NULL;
    }

    printf("\nUpdated elements are : ");
    display(head);
}
struct Node *delete_with_a_given_value(struct Node *head)
{
    int pos = searchNode(head);

    struct Node *current = head;
    struct Node *previous = head;

    if (head == NULL)
    {
        printf("List is already empty");
    }
    else if (pos == 1)
    {
        head = current->next;
        free(current);
        current = NULL;
    }
    else
    {
        while (pos != 1)
        {
            previous = current;
            current = current->next;
            pos--;
        }
        previous->next = current->next;
        free(current);
        current = NULL;
    }

    printf("The updated linklist is : ");
    display(head);
}

int searchNode(struct Node *head)
{
    struct Node *current = head;
    int i = 1;
    bool flag = false;

    int value;
    printf("Enter the value that you want to find : ");
    scanf("%d", &value);

    // Checks whether list is empty
    if (head == NULL)
    {
        printf("List is empty \n");
    }
    else
    {
        while (current != NULL)
        {
            // Compares node to be found with each node present in the list
            if (current->data == value)
            {
                flag = true;
                break;
            }
            i++;
            current = current->next;
        }
    }
    if (flag)
        return i;
    else
        return 0;
}

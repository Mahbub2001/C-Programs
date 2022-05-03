#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
struct node
{
    int data;
    struct node *next;
};

int display(struct node *head)
{
    struct node *p = head;

    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}
int searchNode(struct node *head);
struct node *delete_with_a_given_value(struct node *head);

int main()
{
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    struct node *p, *prev, *head;

    head = NULL;
    for (int i = 0; i < n; i++)
    {
        p = (struct node *)malloc(sizeof(struct node));
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

    printf("Before deleting : ");
    display(head);
    printf("\nAfter deleting : ");
    delete_with_a_given_value(head);
    return 0;
}
struct node *delete_with_a_given_value(struct node *head)
{
    int pos = searchNode(head);

    struct node *current = head;
    struct node *previous = head;

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

int searchNode(struct node *head)
{
    struct node *current = head;
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

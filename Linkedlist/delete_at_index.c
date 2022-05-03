#include <stdio.h>
#include <stdlib.h>

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
struct node *delete_at_index(struct node *head);

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

    display(head);
    delete_at_index(head);
    return 0;
}
struct node *delete_at_index(struct node *head)
{
    int pos;
    printf("Enter the index number : ");
    scanf("%d", &pos);

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

    printf("\nUpdated elements are : ");
    display(head);
}
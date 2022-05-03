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
struct node *delete_at_last(struct node *head);

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
    delete_at_last(head);
    return 0;
}
struct node *delete_at_last(struct node *head)
{
    struct node *p = head;
    struct node *q = head->next;

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
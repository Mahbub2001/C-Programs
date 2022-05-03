#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};
struct node *head;
int display();
int reverse(struct node *head);

int main()
{
    int n, i, j;
    struct node *p, *prev;
    printf("NUMBER OF ELEMENTS : ");
    scanf("%d", &n);

    head = NULL;

    for (i = 0; i < n; i++)
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
    display();
    reverse(head);

    return 0;
}
int reverse(struct node *head)
{
    struct node *prev, *current, *next_node;
    prev = NULL;
    current = next_node = head;
    while (next_node != 0)
    {
        next_node = next_node->next;
        current->next = prev; // breaking
        prev = current;
        current = next_node;
    }
    head = prev;

    printf("\nUpdated : ");
    display(head);
}
int display()
{
    struct node *p = head;

    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }

    return 0;
}



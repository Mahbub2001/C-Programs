#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

int display(struct node *head);
struct node* sorting(struct node *head);

int main()
{
    int n, i, j;
    struct node *head, *p, *prev;
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
    sorting(head);
    display(head);

    return 0;
}
int display(struct node *head)
{
    struct node *p = head;

    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }

    return 0;
}
struct node* sorting(struct node *head)
{
    struct node *i, *j;
    int temp;
    i = head;
    for (i = head; i!= NULL; i = i->next)
    {
        for (j = i->next; j!= NULL; j = j->next)
        {
            if (i->data > j->data)
            {
                temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
        }
    }
}

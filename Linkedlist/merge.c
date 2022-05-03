#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *creatLinkedList(int arr[], int size);
int sorting(struct node *head);
int display(struct node *head);
struct node *mergeLinkedList(struct node *LLOne, struct node *LLTwo);

int main()
{
    struct node *head1, *head2;
    int a1[50], size1, a2[50], size2;

    printf("Enter the size for Linkedlist - 1 : ");
    scanf("%d", &size1);
    printf("Enter the size for Linkedlist - 2 : ");
    scanf("%d", &size2);

    printf("\ninput the elements : \n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &a1[i]);
    }

    printf("\ninput the elements : \n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &a2[i]);
    }

    printf("\nPrinting Number-1 Linkedlist : ");
    head1 = creatLinkedList(a1, size1);
    sorting(head1);
    display(head1);

    printf("\nPrinting Number-2 Linkedlist : ");
    head2 = creatLinkedList(a2, size2);
    sorting(head2);
    display(head2);

    printf("\nThe merged Linkedlist is : ");
    mergeLinkedList(head1, head2);

    return 0;
}

struct node *creatLinkedList(int arr[], int size)
{
    struct node *head, *newnode, *prev;
    head = NULL;
    int i;
    for (i = 0; i < size; i++)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = arr[i];
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            prev->next = newnode;
        }
        prev = newnode;
    }
    return head;
}
int sorting(struct node *head)
{
    struct node *i, *j;
    int temp;
    i = head;
    for (i = head; i != NULL; i = i->next)
    {
        for (j = i->next; j != NULL; j = j->next)
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

int display(struct node *head)
{
    struct node *p = head;
    while (p != NULL)
    {
        printf("%d\t", p->data);
        p = p->next;
    }
}

struct node *mergeLinkedList(struct node *head1, struct node *head2)
{
    struct node *resultHead, *resultTail, *temp;
    resultHead = resultTail = NULL;
  
    while (1)
    {
        if (head1 == NULL)
        {
            resultTail->next = head2;
            break;
        }

        if (head2 == NULL)
        {
            resultTail->next = head2;
            break;
        }

        /* Check whether current node of
        which Linked list is smaller*/
        if (head1->data <= head2->data)
        {
            temp = head1;
            head1 = head1->next;
        }
        else
        {
            temp = head2;
            head2 = head2->next;
        }
        /*Add smaller node to result linked list  */
        if (resultHead == NULL)
        {
            resultHead = resultTail = temp;
        }
        else
        {
            resultTail->next = temp;
            resultTail = temp;
        }
        resultTail->next = NULL;
    }

    display(resultHead);
}

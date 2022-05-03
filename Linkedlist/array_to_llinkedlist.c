#include <stdio.h>
#include <stdlib.h>

struct node *creatLinkedList(int arr[], int size);

struct node
{
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    int a[50], size;
    printf("Enter the size that you want : ");
    scanf("%d", &size);

    printf("\ninput the elements : \n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }

    head = creatLinkedList(a, size);
    while (head != NULL)
    {
       printf("%d\t",head -> data);
       head = head -> next;
    }
    

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
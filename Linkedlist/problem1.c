#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node* createNode(int,int);

struct node {
    int data, posi;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;


struct node * createNode(int data, int pos)
{
    struct node *ptr = malloc(sizeof(*ptr));
    ptr->data = data;
    ptr->posi = pos;
    ptr->next = NULL;
    return ptr;
}

void insertAtPos(int pos, int data)
{
    struct node *ptr = head, *prev = NULL;
    while (ptr && ptr->posi < pos)
    {
        prev = ptr;
        ptr = ptr->next;
    }

    // make sure we have a node.
    if (ptr)
    {
        // Case 1: update existing element.
        if (ptr->posi == pos)
        {
            // update in place
            ptr->data = data;
        }

        // Case 2: insert new element
        else if (prev)
        {
            prev->next = createNode(data, pos);
            prev->next->next = ptr;
        }

        // Case 3: new list head.
        else
        {
            head = createNode(data, pos);
            head->next = ptr;
        }
    }
    else if (prev)
    {
        // means we hit the end of the list.
        prev->next = createNode(data, pos);
    }

    else
    {   // means empty list. new head.
        head = createNode(data, pos);
    }
}

void print()
{
    struct node *p = head;
    while (p)
    {
        printf("list[%d] = %d\n", p->posi, p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int i = 0;
    srand((unsigned)time(NULL));

    // fill our list with some elements
    for (i=0;i<10;++i)
        insertAtPos(rand() % 20 + 1, rand() % 100);
    print();

    // add or update element
    insertAtPos(15, 100000);
    print();

    // update element at location 20;
    insertAtPos(15, 200000);
    print();

    // prove we can add an element at beginning of list
    insertAtPos(0, 1000);
    print();

    // prove we can add an element at end of list
    insertAtPos(100, 2000);
    print();

    return 0;
}
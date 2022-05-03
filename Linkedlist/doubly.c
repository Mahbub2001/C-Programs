#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
};
struct Node *head, *tail;
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^FUNCTIONS^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int display(struct Node *head);
struct Node *insert_at_first(struct Node *head);
struct Node *insert_at_end(struct Node *head);
struct Node *insert_at_location(struct Node *head);
struct Node *insert_after_location(struct Node *head);
struct Node *delete_at_first(struct Node *head);
struct Node *delete_at_end(struct Node *head);
struct Node *delete_at_location(struct Node *head);
int searchNode(struct Node *head);
struct Node *delete_any_value(struct Node *head);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^FUNCTIONS^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

int main()
{

    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    head = NULL;

    struct Node *newnode;

    for (int i = 0; i < n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &newnode->data);
        newnode->prev = 0;
        newnode->next = 0;

        if (head == NULL)
        {
            head = tail = newnode;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            tail = newnode;
        }
    }

    display(head);

    int choose;
    printf("\n**************CHOOSE THAT YOU WANT**************");
    printf("\nNO 1. INSERTION AT BEGINNING");
    printf("\nNO 2. INSERTION AT END");
    printf("\nNO 3. INSERTION AT POSITION");
    printf("\nNO 4. INSERTION AFTER POSITION");
    printf("\nNO 5. DELETION AT BEGINNING");
    printf("\nNO 6. DELETION AT END");
    printf("\nNO 7. DELETION AT POSITION");
    printf("\nNO 8. DELETION AT KEY\n");
    scanf("%d", &choose);

    switch (choose)
    {
    case 1:
        insert_at_first(head);
        break;
    case 2:
        insert_at_end(head);
        break;
    case 3:
        insert_at_location(head);
        break;
    case 4:
        insert_after_location(head);
        break;
    case 5:
        delete_at_first(head);
        break;
    case 6:
        delete_at_end(head);
        break;
    case 7:
        delete_at_location(head);
        break;
    case 8:
        delete_any_value(head);
        break;
    default:
        printf("WRONG INPUT");
        break;
    }

    return 0;
}

int display(struct Node *head)
{
    struct Node *ptr;
    ptr = head;
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }

    return 0;
}
//*****************************************************************************INSERTION AT BEGINNING**************************************************
struct Node *insert_at_first(struct Node *head)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter the value that you want to insert : ");
    scanf("%d", &newnode->data);

    newnode->prev = 0;
    newnode->next = 0;

    head->prev = newnode;
    newnode->next = head;
    head = newnode; // newnode take head banay dilam

    printf("\nUpdated elements : ");
    display(head);
}

//**********************************************************************INSERTION AT END*************************************************************
struct Node *insert_at_end(struct Node *head)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("\nEnter the value that you want to insert : ");
    scanf("%d", &newnode->data);

    newnode->prev = 0;
    newnode->next = 0;

    // while loop lagbe na cz tail pointer ase age thekei
    tail->next = newnode;
    newnode->prev = tail;
    tail = newnode; // newnode tail pointer korar jnno

    printf("\nUpdated elements : ");
    display(head);
}

//**************************************************************************INSERTION AT POSITION************************************************************
struct Node *insert_at_location(struct Node *head)
{
    int i = 1, loc;

    printf("\nEnter the location after which you want to insert ");
    scanf("\n%d", &loc);

    if (loc < 1)
    {
        printf("invalid position");
    }
    else if (loc == 1)
    {
        insert_at_first(head);
    }
    else
    {
        struct Node *temp = head;
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);

        while (i < loc - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->prev = temp;       // previos er sathe link korar jnno
        newnode->next = temp->next; // next tar satehe link korar jnno
        temp->next = newnode;       // ager node notun take link krlo
        newnode->next->prev = newnode;                 
    }

    printf("\nUpdated elements : ");
    display(head);
}

//***************************************************************************************************insert_after_location******************************************************************************
struct Node *insert_after_location(struct Node *head)
{
    int i = 1, loc;

    printf("\nEnter the location after which you want to insert ");
    scanf("%d", &loc);

    if (loc < 1)
    {
        printf("invalid position");
    }
    else
    {
        struct Node *temp = head;
        struct Node *newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);

        while (i < loc)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next; // next tar satehe link korar jnno
        temp->next = newnode;       // ager node notun take link krlo
        newnode->next->prev = newnode;
    }

    printf("\nUpdated elements : ");
    display(head);
}

//*******************************************************************DELETION AT BEGINNING*****************************************************************
struct Node *delete_at_first(struct Node *head)
{
    struct Node *temp;
    if (head == NULL)
    {
        printf("List is empty");
    }
    else
    {
        temp = head;
        head = head->next; // haed k soray dilam
        head->prev = NULL; // link broken
        free(temp);
    }
    printf("\nUpdated elements : ");
    display(head);
}

//*********************************************************************************DELETION AT END************************************************************
struct Node *delete_at_end(struct Node *head)
{
    // no need traversal for tail pointer.
    struct Node *temp;
    if (tail == NULL)
    {
        printf("Invalide");
    }
    else
    {
        temp = tail;
        tail->prev->next = NULL; // link broken ...
        tail = tail->prev;
        free(temp);
    }

    printf("\nUpdated elements : ");
    display(head);
}

//******************************************************************************DELETION AT POSITION*************************************************************
struct Node *delete_at_location(struct Node *head)
{
    int pos;
    printf("Enter the position where you want to delete : ");
    scanf("%d", &pos);
    int i = 1;
    struct Node *temp;
    temp = head;

    if (pos == 1)
    {
        delete_at_first(head);
    }
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }

    printf("\nUpdated elements : ");
    display(head);
}

//**************************************************************************DELETION AT KEY******************************************************************
struct Node *delete_any_value(struct Node *head)
{
    int pos = searchNode(head);
    int i = 1;
    struct Node *temp;
    temp = head;

    if (pos == 1)
    {
        delete_at_first(head);
    }
    else
    {
        while (i < pos)
        {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;//ager tar next link change 
        temp->next->prev = temp->prev;//porer tar prev link change 
        free(temp);
    }

    printf("\nUpdated elements : ");
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
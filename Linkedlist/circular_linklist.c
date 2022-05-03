#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head, *tail;
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^FUNCTIONS^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^
int display(struct Node *head);
struct Node *insert_at_first(struct Node *head);
struct Node *insert_at_end(struct Node *head);
struct Node *insert_at_location(struct Node *head, int length);
struct Node *delete_at_first(struct Node *head);
struct Node *delete_at_end(struct Node *head);
struct Node *delete_at_location(struct Node *head);
int searchNode(struct Node *head);
struct Node *delete_any_value(struct Node *head);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^FUNCTIONS^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

int main()
{
    struct Node *newnode;
    int n;

    printf("NUMBER OF ELEMENTS:");
    scanf("%d", &n);

    head = NULL;

    for (int i = 0; i < n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &newnode->data);

        newnode->next = NULL;

        if (head == NULL)
        {
            head = tail = newnode;
            //  tail->next = newnode;
        }

        else
        {
            tail->next = newnode;
            tail = newnode;
            //   tail->next = head;
        }
        tail->next = head; // this is for circular linklist
    }

    display(head);

    int choose;
    printf("\n**************CHOOSE THAT YOU WANT**************");
    printf("\nNO 1. INSERTION AT BEGINNING");
    printf("\nNO 2. INSERTION AT END");
    printf("\nNO 3. INSERTION AT POSITION");
    printf("\nNO 4. DELETION AT BEGINNING");
    printf("\nNO 5. DELETION AT END");
    printf("\nNO 6. DELETION AT POSITION");
    printf("\nNO 7. DELETION AT KEY\n");
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
        insert_at_location(head, n);
        break;
    case 4:
        delete_at_first(head);
        break;
    case 5:
        delete_at_end(head);
        break;
    case 6:
        delete_at_location(head);
        break;
    case 7:
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
    struct Node *temp;
    if (tail == NULL)
    {
        printf("empty");
    }
    else
    {
        temp = tail->next;
        do
        {
            printf("%d\t", temp->data);
            temp = temp->next;

        } while (temp != tail->next); // do while na dile print hto na..dhakka diye print kora hyece.....
    }

    return 0;
}
//*****************************************************************************INSERTION AT BEGINNING**************************************************
struct Node *insert_at_first(struct Node *head)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter value that you want to add : ");
    scanf("%d", &newnode->data);

    newnode->next = 0;

    if (tail == 0)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
    }

    printf("\nUpdated elements : ");
    display(head);
}

//**********************************************************************INSERTION AT END*************************************************************
struct Node *insert_at_end(struct Node *head)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter the data that you want to add : ");
    scanf("%d", &newnode->data);

    if (tail == NULL)
    {
        tail = newnode;
        tail->next = newnode;
    }
    else
    {
        newnode->next = tail->next;
        tail->next = newnode;
        tail = newnode;
    }

    printf("\nUpdated elements : ");
    display(head);
}

//**************************************************************************INSERTION AT POSITION************************************************************
struct Node *insert_at_location(struct Node *head, int length)
{
    struct Node *newnode, *temp;
    int i = 1, pos;

    printf("\nEnter the location after which you want to insert ");
    scanf("%d", &pos);

    if (pos < 1 || pos > length)
    {
        printf("Invalide Position");
    }
    else if (pos == 1)
    {
        insert_at_first(head);
    }
    else
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data that you want to insert : ");
        scanf("%d", &newnode->data);
        temp = tail->next;

        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }

    printf("\nUpdated elements : ");
    display(head);
}

//*******************************************************************DELETION AT BEGINNING*****************************************************************
struct Node *delete_at_first(struct Node *head)
{
    struct Node *temp;
    temp = tail->next;

    if (tail == NULL)
    {
        printf("LIST IS EMPTY");
    }
    else if (temp->next == temp) // if only one node in the list
    {
        tail = NULL;
        free(temp);
    }
    else
    {
        tail->next = temp->next;
        free(temp);
    }

    printf("\nUpdated elements : ");
    display(head);
}

//*********************************************************************************DELETION AT END************************************************************
struct Node *delete_at_end(struct Node *head)
{
    struct Node *current, *previous;
    current = tail->next;

    if (tail == 0)
    {
        printf("LIST IS EMPTY");
    }
    else if (current->next == current)
    {
        tail = 0;
        free(current);
    }
    else
    {
        while (current->next != tail->next)
        {
            previous = current;
            current = current->next;
        }
        previous->next = tail->next;
        tail = previous;
        free(current);
    }

    printf("\nUpdated elements : ");
    display(head);
}

//******************************************************************************DELETION AT POSITION*************************************************************
struct Node *delete_at_location(struct Node *head)
{
    struct Node *current, *nextnode;

    int pos, i = 1, l;
    current = tail->next;

    printf("Enter the position : ");
    scanf("%d", &pos);

    if (pos < 1)
    {
        printf("Invalide input");
    }
    else if (pos == 1)
    {
        delete_at_first(head);
    }
    else
    {
        while (i < pos - 1)
        {
            current = current->next;
            i++;
        }
        nextnode = current->next;
        current->next = nextnode->next;
        free(nextnode);
    }

    printf("\nUpdated elements : ");
    display(head);
}

//**************************************************************************DELETION AT KEY******************************************************************
struct Node *delete_any_value(struct Node *head)
{
    int pos = searchNode(head);

    struct Node *current, *nextnode;

    int i = 1, l;
    current = tail->next;

    if (pos < 1)
    {
        printf("Invalide input");
    }
    else if (pos == 1)
    {
        delete_at_first(head);
    }
    else
    {
        while (i < pos - 1)
        {
            current = current->next;
            i++;
        }
        nextnode = current->next;
        current->next = nextnode->next;
        free(nextnode);
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
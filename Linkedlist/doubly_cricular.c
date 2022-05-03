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
int display();
struct Node *insert_at_first(struct Node *head);
struct Node *insert_at_end(struct Node *head);
struct Node *insert_at_location(struct Node *head);
struct Node *delete_at_first(struct Node *head);
struct Node *delete_at_end(struct Node *head);
struct Node *delete_at_location(struct Node *head, int n);
int searchNode(struct Node *head);
struct Node *delete_any_value(struct Node *head, int n);
//^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^FUNCTIONS^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^

int main()
{
    struct Node *newnode;
    head = NULL;
    int n;
    printf("Enter the number of elements : ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        scanf("%d", &newnode->data);

        if (head == NULL)
        {
            head = tail = newnode;
            head->next = head;
            head->prev = head;
        }
        else
        {
            tail->next = newnode;
            newnode->prev = tail;
            newnode->next = head; // 1st er sathe point korar jnno
            head->prev = newnode;
            tail = newnode;
        }
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
        insert_at_location(head);
        break;
    case 4:
        delete_at_first(head);
        break;
    case 5:
        delete_at_end(head);
        break;
    case 6:
        delete_at_location(head, n);
        break;
    case 7:
        delete_any_value(head, n);
        break;
    default:
        printf("WRONG INPUT");
        break;
    }

    return 0;
}

int display()
{
    struct Node *temp = head;
    do
    {
        printf("%d\t", temp->data);
        temp = temp->next;

    } while (temp != head); // do while na dile print hto na..dhakka diye print kora hyece.....

    return 0;
}
//*****************************************************************************INSERTION AT BEGINNING**************************************************
struct Node *insert_at_first(struct Node *head)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data : ");
    scanf("%d", &newnode->data);

    if (head == NULL)
    {
        head = tail = newnode;
        newnode->prev = tail;
        newnode->next = head;
    }
    else
    {
        newnode->next = head;
        head->prev = newnode;
        newnode->prev = tail;
        tail->next = newnode;
        head = newnode;
    }

    printf("\nUpdated elements : ");
    display();
}

// //**********************************************************************INSERTION AT END*************************************************************
struct Node *insert_at_end(struct Node *head)
{
    struct Node *newnode;
    newnode = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the data : ");
    scanf("%d", &newnode->data);

    if (head == NULL)
    {
        head = tail = newnode;
        newnode->prev = tail;
        newnode->next = head;
    }
    else
    {
        newnode->prev = tail;
        tail->next = newnode;
        newnode->next = head;
        head->prev = newnode;
        tail = newnode;
    }

    printf("\nUpdated elements : ");
    display(head);
}

// //**************************************************************************INSERTION AT POSITION************************************************************
struct Node *insert_at_location(struct Node *head)
{
    int loc, i = 1;

    printf("\nEnter the location after which you want to insert ");
    scanf("\n%d", &loc);

    struct Node *newnode, *temp;
    temp = head;

    if (loc < 1)
    {
        printf("Invalide position ");
    }
    else if (loc == 1)
    {
        insert_at_first(head);
    }
    else
    {
        newnode = (struct Node *)malloc(sizeof(struct Node));
        printf("Enter the data : ");
        scanf("%d", &newnode->data);

        while (i < loc - 1)
        {
            temp = temp->next;
            i++;
        }
        // pointing
        newnode->prev = temp;
        newnode->next = temp->next;
        // linking
        temp->next->prev = newnode;
        temp->next = newnode;
    }

    printf("\nUpdated elements : ");
    display(head);
}

// //*******************************************************************DELETION AT BEGINNING*****************************************************************
struct Node *delete_at_first(struct Node *head)
{
    struct Node *temp;
    temp = head;

    if (head == NULL)
    {
        printf("List is empty");
    }
    else if (head->next == head) // sudhu ekta node thakle
    {
        head = tail = NULL;
        free(temp);
    }
    else
    {
        head = head->next;
        head->prev = tail;
        tail->next = head;

        free(temp);
    }

    printf("\nUpdated elements : ");
    display(head);
}

// //*********************************************************************************DELETION AT END************************************************************
struct Node *delete_at_end(struct Node *head)
{
    struct Node *temp;
    temp = tail;

    if (head == NULL)
    {
        printf("empty");
    }
    else if (head->next == head) // sudhu ekta node thakle
    {
        head = tail = NULL;
        free(temp);
    }
    else
    {
        tail = tail->prev;
        tail->next = head;
        head->prev = tail;
        free(temp);
    }

    printf("\nUpdated elements : ");
    display(head);
}

// //******************************************************************************DELETION AT POSITION*************************************************************
struct Node *delete_at_location(struct Node *head, int n)
{
    int pos, i = 1;
    printf("Ennter the position that you want : ");
    scanf("%d", &pos);

    struct Node *temp;
    temp = head;

    if (pos < 1 || pos > n)
    {
        printf("Invalide position");
    }
    else if (pos == 1)
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
        if (temp->next == head) // jodu last ta delete hoy tkhn tail ta change korte hbe
        {
            tail = temp->prev;
            free(temp);
        }
        else
        {
            free(temp);
        }
    }

    printf("\nUpdated elements : ");
    display(head);
}

// //**************************************************************************DELETION AT KEY******************************************************************
struct Node *delete_any_value(struct Node *head, int n)
{
    int pos = searchNode(head);

    int i = 1;

    struct Node *temp;
    temp = head;

    if (pos < 1 || pos > n)
    {
        printf("Invalide position");
    }
    else if (pos == 1)
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
        if (temp->next == head) // jodu last ta delete hoy tkhn tail ta change korte hbe
        {
            tail = temp->prev;
            free(temp);
        }
        else
        {
            free(temp);
        }
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
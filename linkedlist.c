// linked list all opeartions
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};

struct node *root = NULL;
int len;
void append();
void addAtBeginning();
void addAtLocation();
void delete();
void display();
int length();

void main()
{
    int choice;
    while (1)
    {
        printf("\n1.add at the end.\n");
        printf("2.add at the beginning.\n");
        printf("3.add at a particuar location.\n");
        printf("4.delete a node.\n");
        printf("5.display the list.\n");
        printf("6.To find list length.\n");
        printf("7.Quit.\n");
        printf("Enter your choice: \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            append();
            break;
        case 2:
            addAtBeginning();
            break;
        case 3:
            addAtLocation();
            break;
        case 4:
            delete ();
            break;
        case 5:
            display();
            break;
        case 6:
            length();
            break;
        case 7:
            exit(0);
        default:
            printf("Invalid Input");
            break;
        }
    }
}

void append()
{
    struct node *newNode, *last;
    newNode = (struct node *)malloc(sizeof(struct node));
    newNode->next = NULL;
    printf("Enter the node data: ");
    scanf("%d", &newNode->data);

    if (root == NULL)
    {
        root = newNode;
    }
    else
    {
        last = root;
        while (last->next == NULL)
        {
            last = last->next;
        }
        last->next = newNode;
    }
}

void addAtBeginning()
{
    struct node *newNode;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the node data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    if (root == NULL)
    {
        root = newNode;
    }
    else
    {
        newNode->next = root;
        root = newNode;
    }
}

void addAtLocation()
{
    int location;
    printf("Enter the location at which you want to enter: ");
    scanf("%d", &location);

    struct node *newNode, *itr;
    newNode = (struct node *)malloc(sizeof(struct node));
    printf("Enter the node data: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;

    int i = 1;
    itr = root;
    while (i < location)
    {
        itr = itr->next;
        i++;
    }
    newNode->next = itr->next;
    itr->next = newNode;
}

void delete()
{
    int location;
    printf("Enter the location at which you want to enter: ");
    scanf("%d", &location);

    if (location > length())
    {
        printf("Empty list.");
    }
    else if (location == 1)
    {
        struct node *temp;
        temp = root;
        root = temp->next;
        temp->next = NULL;
        free(temp);
    }
    else
    {
        int i = 1;
        struct node *delprev = root, *del;
        while (i < location - 1)
        {
            delprev = delprev->next;
            i++;
        }
        del = delprev->next;
        delprev->next = del->next;
        del->next = NULL;
        free(del);
    }
}

void display()
{
    if (root == NULL)
    {
        printf("List is empty.");
    }
    else
    {
        struct node *temp;
        temp = root;
        while (temp->next != NULL)
        {
            printf("%d-->", temp->data);
        }
    }
}

int length()
{
    if (root == NULL)
    {
        return 0;
    }
    else
    {
        int count = 0;
        struct node *temp;
        temp = root;
        while (temp->next == NULL)
        {
            count++;
        }
        return count;
    }
}

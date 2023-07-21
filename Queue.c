#include <stdio.h>
#include <stdlib.h>
#define MAX 5
int queue[MAX];
int front = 0, rear = 0;
void insert();
void delete();
void display();

void main()
{
    int choice;
    while (1)
    {
        printf("\n1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;

        case 2:
            delete ();
            break;

        case 3:
            display();
            break;

        case 4:
            exit(0);
            break;

        default:
            printf("Invalid input.");
            break;
        }
    }
}

void insert()
{
    if (rear == MAX)
    {
        printf("Queue is full.");
    }
    else
    {
        printf("Enter the data: ");
        scanf("%d", &queue[rear]);
        rear++;
    }
}

void delete()
{
    if (front == rear)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("Deleted - %d", queue[front]); // always first element is deleted coz queue follows f-i-f-o
        for (int i = front; i < rear; i++)
        {
            queue[i] = queue[i + 1];
        }
        rear--;
    }
}

void display()
{
    if (front == rear)
    {
        printf("Queue is empty.");
    }
    else
    {
        printf("The queue is as follows: "); // always first element is deleted coz queue follows f-i-f-o
        for (int i = front; i < rear; i++)
        {
            printf("%d ", queue[i]);
        }
    }
}

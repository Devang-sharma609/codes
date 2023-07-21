// stack implementation usong static array
#include <stdio.h>
#include <stdlib.h>
#define CAPACITY 5
int stack[CAPACITY], top = -1, item; // CAPACITY is a pre-processor macro
void push(int ele);
void pop();
void peek();
void display();
int isFull();
int isEmpty();

void main()
{
    int choice;
    printf("1.Push\n");
    printf("2.Pop\n");
    printf("3.Peek\n");
    printf("4.Print\n");
    printf("5.Quit\n");

    do
    {
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            printf("Enter the element you want to push: ");
            scanf("%d", item);
            push(item);
            break;
        }

        case 2:
        {
            pop();
            break;
        }

        case 3:
        {
            peek();
            break;
        }

        case 4:
        {
            display();
            break;
        }

        case 5:
        {
            exit(0);
        }

        default:
        {
            printf("Invalid Input");
        }
        }
    } while (choice);
}

void push(int ele)
{
    if (isFull())
    {
        printf("Stack overflow");
    }
    else
    {
        stack[++top] = ele;
        printf("%d pushed successfully.", stack[top]);
    }
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack underflow");
    }
    else
    {
        printf("%d popped successfully.", stack[top]);
        top--;
    }
}

void peek()
{
    if (isEmpty())
    {
        printf("Stack underflow");
    }
    else
    {
        printf("The peeked element is: %d", stack[top]);
    }
}

void display()
{
    if (isEmpty())
    {
        printf("Stack is empty.");
    }
    else
    {
        printf("The stack elements are:\n");
        for (int i = top; i >= 0; i--)
        {
            printf("%d\n", stack[top]);
        }
    }
}

int isFull()
{
    if (top == (CAPACITY - 1))
        return 1;
    else
        return 0;
}

int isEmpty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}

void printList()
{
    printf("The list is as follows:\n");
    struct node *p;
    p = root;
    while(p->right = NULL)
    {
        p = p->right;  
    }
    printf("%d->", p->data);
}

void length()
{
    struct node *p;
    p = root;
    int count = 0;
    while(p->right = NULL)
    {
        p = p->right;
        count++;  
    }
}

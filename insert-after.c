void addAfter()
{
    int location;
    printf("Enter the location you wanto to enter:");
    scanf("%d", &location);

    struct node *temp, *p;
    p = root;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->right = NULL;
    temp->left = NULL;
    printf("\nEnter the node data: ");
    scanf("%d", &temp->data);

    if (location > length)
    {
        printf("Invalid location entered.");
    }
    else if (location == 1)
    {
        addAtFirst();
    } 
    else
    {
        int i = 1;
        while (i < location)
        {
            p = p->right;
            i++;
        }
        temp->right = p->right;     //temp connected to next node
        p->right->left = temp;      //next node connected to temp
        temp->left = p;     //temp connected to location node
        p->right = temp;    //location node connected to temp
    }
}

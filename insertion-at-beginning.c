void addAtBeginning()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->right = NULL;
    temp->left = NULL;
    printf("\nEnter the node data: ");
    scanf("%d", &temp->data);

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp->right = root; // right connection
        root->left = temp;  // left connection
        root = temp;
    }
    printf("%d is inserted", temp->data);
}

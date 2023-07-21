//Doubly linked list 
void append()
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
        struct node *p;
        p = root;
        while (p->right != NULL)
        {
            p = p->right;
        }
        p->right = temp;
        temp->left = p;
    }
    printf("%d is inserted", temp->data);
}

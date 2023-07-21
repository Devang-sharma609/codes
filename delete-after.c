void deleteAfter()
{
    struct node *p, *temp;
    p = root;

    int location;
    printf("Enter the location after which you want to delete: ");
    scanf("%d", &location);

    int i = 1;
    while(i<location)
    {
        p = p->right;
    }
    temp = p;
    temp = temp->right;
    p->right = temp->right;
    temp->right->left = p;
    temp->right = NULL;
    temp->left = NULL;
    free(temp);
}
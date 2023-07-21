void deleteFirst()
{
    struct node *temp;
    temp = root;
    root = temp->right;
    temp->right = NULL;
    free(temp);
}

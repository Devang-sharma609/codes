void deleteLast()
{
    int i = 1;
    struct node *temp, *p;
    root = temp;
    while (i<size-1)
    {
        temp = temp->right;
        i++;
    }
    p = temp;
    p = p->right;   //points to the node that is being deleted.
    temp->right = NULL;
    free(p);
}
void reverse()
{
    int i = 0;
    int j = len - 1;

    struct node *p, *q, *temp;
    p = root;
    q = root;

    while (i < j)
    {
        int k = 0;
        while (k < j)
        {
            q = q-> next;
        }
        
        temp->data = p->data;
        p->data = q->data;
        q->data = temp->data;
    }
}

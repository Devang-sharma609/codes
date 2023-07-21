Void divide_half()
{
    struct node *p, *q;
    p = root;
    for(int i=0; i<len/2; i++)
    {
        p = p->root;
    }
    q = p->next;
    p->next = NULL;
}

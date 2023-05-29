void inorder(struct node *n)
{
    if (n == NULL)
        return;

    inorder(n->lnext);
    printf("%d ", n->data);
    inorder(n->rnext);
}
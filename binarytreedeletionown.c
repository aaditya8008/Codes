#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *rnext;
    struct node *lnext;

} *n, *prev, *extra, *succ, *pre, *m, *rootextra;

void inorder(struct node *n)
{ // 10,8,13,7,9
    if (n == NULL)
        return;

    inorder(n->lnext);
    printf("%d", n->data);
    inorder(n->rnext);
}

struct node *search(struct node *n, int key)
{
    if (n == NULL)
    {
        printf("Not found\n");
        return 0;
    }
    if (n->data == key)
    {
        printf("Found :%d", key);
        return n;
    }

    else if (n->data > key)
        search(n->lnext, key);
    else if (n->data < key)
        search(n->rnext, key);
    else
        printf("Not Found");
}
struct node *succesor(struct node *n)
{
    extra = n;
    extra = extra->rnext;
    while (extra->lnext != NULL)
    {
        extra = extra->lnext;
    }
    printf("\nSuccesor is %d\n", extra->data);
    return extra;
}
struct node *predecessor(struct node *n)
{
    extra = n;
    extra = extra->lnext;
    while (extra->rnext != NULL)
    {
        extra = extra->rnext;
    }
    printf("\nPredecessor is %d\n", extra->data);
    return extra;
}
struct node *delete(struct node *rootextra, int key)
{
    m = rootextra;
    n = search(rootextra, key);

    if (n != 0)
    {
        if (n == NULL)
            return NULL;
        else if (n->rnext != NULL)
        {
            extra = n;
            succ = succesor(extra);

            n->data = succ->data;
            n->rnext = delete (n->rnext, succ->data);
        }
        else if (n->lnext != NULL)
        {
            extra = n;
            pre = predecessor(extra);

            n->data = pre->data;
            n->lnext = delete (n->lnext, pre->data);
        }
        else if (n->lnext == NULL && n->rnext == NULL)
        {
            free(n);
            return NULL;
        }
    }
    return rootextra;
}

struct node *create()
{
    n = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &n->data);
    n->rnext = NULL;
    n->lnext = NULL;
    return n;
}

int main()
{
    struct node *root = create();
    struct node *p1 = create();
    struct node *p2 = create();
    struct node *p3 = create();
    struct node *p4 = create();
    root->lnext = p1;
    root->rnext = p2;
    p1->lnext = p3;
    p1->rnext = p4;
    int x;

    printf("\nEnter element to delete\n");
    int key;
    scanf("%d", &key);
    n = root;
    root = delete (n, key);
    n = root;
    printf("Inorder\n");
    inorder(n);
}
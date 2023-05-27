#include <stdio.h>
#include <stdlib.h>
struct node
{
    int key;
    struct node *lnext;
    struct node *rnext;
    int height;
} *n, *extra, *prev;
int max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}
int getheight(struct node *n)
{
    if (n == NULL)
        return 0;
    return n->height;
}

struct node *create(int key)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->key = key;
    n->lnext = NULL;
    n->rnext = NULL;
    n->height = 1;
    return n;
}

int getbalancefactor(struct node *n)
{
    if (n == NULL)
        return 0;

    return (getheight(n->lnext) - getheight(n->rnext));
}

struct node *rightrotate(struct node *y)
{
    struct node *x = y->lnext;
    struct node *t2 = x->rnext;
    x->rnext = y;
    y->lnext = t2;
    y->height = max(getheight(y->lnext), getheight(y->rnext)) + 1;
    x->height = max(getheight(x->lnext), getheight(x->rnext)) + 1;
    return x;
}
struct node *leftrotate(struct node *x)
{
    struct node *y = x->rnext;
    struct node *t2 = y->lnext;
    y->lnext = x;
    x->rnext = t2;
    y->height = max(getheight(y->lnext), getheight(y->rnext)) + 1;
    x->height = max(getheight(x->lnext), getheight(x->rnext)) + 1;
    return y;
}

struct node *insert(struct node *n, int key)
{
    if (n == NULL)
    {
        printf("New node:\n");
        return create(key);
    }

     if (n->key > key)
    
        n->lnext = insert(n->lnext, key);
    
    else if (n->key < key)
    
        n->rnext = insert(n->rnext, key);
    
    return n;
    n->height = max(getheight(n->lnext), getheight(n->rnext)) + 1;
    int bf = getbalancefactor(n);

    // left left case
    if (bf > 1 && key < n->lnext->key)
    {
        return rightrotate(n);
    }

    // right right case
    if (bf < -1 && key > n->rnext->key)
    {
        return leftrotate(n);
    }

    // left right case
    if (bf > 1 && key > n->lnext->key)
    {
        n->lnext = leftrotate(n->lnext);
        return rightrotate(n);
    }

    // right left case
    if (bf < -1 && key < n->rnext->key)
    {
        n->rnext = rightrotate(n->rnext);
        return leftrotate(n);
    }
    return n;
}


void preorder(struct node*n){
if(n==NULL)
return ;
printf("%d ",n->key);
preorder(n->lnext);
preorder(n->rnext);
}
int main()
{
    struct node *root = NULL;
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 6);
    root = insert(root, 3);

    preorder(root);
    return 0;
}

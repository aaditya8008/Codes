#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *rnext;
    struct node *lnext;
} *n, *prev, *extra;

struct node *create(struct node *n)
{
    n = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &n->data);
    n->rnext = NULL;
    n->lnext = NULL;
    return n;
}

int insert(struct node *n, int key)
{
    if(n->data==key){
        printf("Duplicate \n");
        return 0;
    }
    if (n->lnext == NULL && key < n->data)
    {
        printf("Enter confirm new node:\n");
        struct node *new = create(extra);

        n->lnext = new;

        return new->data;
    }
    if (n->rnext == NULL && key > n->data)
    {
        printf("Enter confirm new node:\n");
        struct node *new = create(extra);
        n->rnext = new;
        return new->data;
    }

    else if (key > n->data)
    {
        insert(n->rnext, key);
    }
    else if (key < n->data)
    {
        insert(n->lnext, key);
    }
}
void inorder(struct node *n)
{
    if (n == NULL)
        return;

    inorder(n->lnext);
    printf("%d ", n->data);
    inorder(n->rnext);
}

int main()
{
    struct node *root = create(n);
    struct node *p1 = create(n);
    struct node *p2 = create(n);
    root->lnext = p1;
    root->rnext = p2;
    struct node *p3 = create(n);
    struct node *p4 = create(n);
    p1->lnext = p3;
    p1->rnext = p4;

    n = root;
    int key;
    printf("Enter key :\n");
    scanf("%d", &key);
    n = root;
    inorder(n);
    printf("\n");
    n = root;
    insert(n, key);
    n = root;
    inorder(n);
}
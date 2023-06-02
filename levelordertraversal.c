#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *rnext;
    struct node *lnext;
} *n, *root, *p1, *p2, *p3, *p4, *extra, *s, *p, *prev;

struct node *create(int x)
{
    n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->lnext = NULL;
    n->rnext = NULL;
    return n;
}
int height(struct node *n)
{
    if (n == NULL)
        return 0;
    int lheight = height(n->lnext);
    int rheight = height(n->rnext);
    if (lheight > rheight)
        return (lheight + 1);
    else
        return (rheight + 1);
}
void printcurrentlevel(struct node *n, int level)
{
    if (n == NULL)
        return;
    if (level == 1)
    {
        printf("%d ", n->data);
    }
    else if (level > 1)
    {
        printcurrentlevel(n->lnext, level - 1);
        printcurrentlevel(n->rnext, level - 1);
    }
}

void printlevelorder(struct node *n)
{
    int h = height(n);
    for (int i = 1; i <= h; i++)
    {
        printcurrentlevel(n, i);
        printf("\n");
    }
}

int main()
{

    root = create(12);
    p1 = create(9);
    p2 = create(14);
    p3 = create(7);
    p4 = create(10);
    root->lnext = p1;
    root->rnext = p2;
    p1->lnext = p3;
    p1->rnext = p4;
    n = root;
    printlevelorder(n);
}
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *rnext;
    struct node *lnext;
} *n, *root, *p1, *p2, *p3, *p4, *extra, *s, *p,*prev;

struct node *create(int x)
{
    n = (struct node *)malloc(sizeof(struct node));
    n->data = x;
    n->lnext = NULL;
    n->rnext = NULL;
    return n;
}

struct node *binarysearch(struct node *n, int key)
{
    if (n == NULL)
    {
        printf("Not Found");
        return NULL;
    }
    else if (n->data == key)
    {
        return n;
    }

    else if (n->data < key)
    {
        binarysearch(n->rnext, key);
    }
    else if (n->data > key)
    {
        binarysearch(n->lnext, key);
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
struct node *insert(struct node *n, int key)
{

    if (n == NULL)
    {
        printf("Can,t Insert");
        return NULL;
    }
    else if (n->data == key)
    {
        printf("Duplicte Key");
        return NULL;
    }
    else if (n->lnext == NULL && key < n->data)
    {
        extra = create(key);
        n->lnext = extra;
        return n;
    }
    else if (n->rnext == NULL && key > n->data)
    {
        extra = create(key);
        n->rnext = extra;
        return n;
    }
    else if (n->data < key)
    {
        insert(n->rnext, key);
    }
    else if (n->data > key)
    {
        insert(n->lnext, key);
    }
    return root;
}
struct node *succ(struct node *n)
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
struct node *pred(struct node *n)
{
    n=n->lnext;
while(n->rnext!=NULL)
n=n->rnext;
return n;
}

struct node *delete(struct node *n, int key)
{if (n == NULL)
    {
        printf("Not Found");
        return NULL;
    }
   if(n->rnext==NULL&&n->lnext==NULL){
free(n);
return NULL;
   }
    else if (n->data < key)
    {
       n->rnext= delete(n->rnext, key);
    }
    else if (n->data > key)
    {
        n->lnext=delete(n->lnext, key);
    }
else{
if(n->lnext!=NULL){
p=pred(n);

n->data=p->data;
n->lnext=delete(n->lnext,p->data);}
else if(n->rnext!=NULL){
p=succ(n);
n->data=p->data;
n->rnext=delete(n->rnext,p->data);
}
}
    return n;
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
    printf("Inorder:\n");
    inorder(n);
    printf("\nEnter Key :\n");
    int key;
    scanf("%d", &key);
    n = root;
    printf("Found : %d", binarysearch(root, key)->data);
    printf("\nEnter Key to insert :\n");
    scanf("%d", &key);
    n = root;
    root = insert(n, key);
    n = root;
    printf("Inserted:\n");
    inorder(n);
    printf("\nEnter Key to delete :\n");
    scanf("%d", &key);
    n = root;
   delete (n, key);
    printf("Deleted:\n");
    n = root;
    inorder(n);
}
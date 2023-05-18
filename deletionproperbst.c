#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *rnext;
    struct node *lnext;
} *n, *prev, *extra,*pred;

struct node *create(struct node *n)
{
    n = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &n->data);
    n->rnext = NULL;
    n->lnext = NULL;
    return n;
}

struct node *inorderpred(struct node *n){
n=n->lnext;
while(n->rnext!=NULL)
n=n->rnext;
return n;


}


struct node * delete(struct node *n, int key){
if(n==NULL)
return NULL;
if(n->rnext==NULL&&n->lnext==NULL){
free(n);
return NULL;}
     if (key > n->data)
    {
         n->rnext=delete (n->rnext, key);
    }
    else if (key < n->data)
    {
       n->lnext= delete (n->lnext, key);
    }
    else{
        pred=inorderpred(n);
        n->data=pred->data;
        n->lnext= delete(n->lnext,pred->data);
    }
    return n;
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
    delete (n, key);
    n = root;
    inorder(n);
}
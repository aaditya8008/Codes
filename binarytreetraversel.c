      #include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *rnext;
    struct node *lnext;
}*n,*prev,*extra;

struct node *create(struct node *n){
n=(struct node *)malloc(sizeof(struct node));
scanf("%d",&n->data);
n->rnext=NULL;
n->lnext=NULL;
return n;
}
void preorder(struct node*n){
    if(n==NULL)
    return;
    printf("%d ",n->data);
preorder(n->lnext);

preorder(n->rnext);

}
void inorder(struct node*n){
    if(n==NULL)
    return;
    
inorder(n->lnext);
printf("%d ",n->data);
inorder(n->rnext);
}
void postorder(struct node*n){
    if(n==NULL)
    return;
    
postorder(n->lnext);

postorder(n->rnext);
printf("%d ",n->data);
}

int main(){
struct node *root=create(n);
struct node *p1=create(n);
struct node *p2=create(n);
root->lnext=p1;
root->rnext=p2;
struct node *p3=create(n);
struct node *p4=create(n);
p1->lnext=p3;
p1->rnext=p4;
n=root;
preorder(n);
printf("\n");
n=root;
postorder(n);
printf("\n");
n=root;
inorder(n);
}
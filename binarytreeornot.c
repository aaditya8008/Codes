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


int isbst(struct node*n){
    static struct node  *prev=NULL;
    if(n==NULL)
    return 1;
    
if(!isbst(n->lnext))
return 0;
if(prev!=NULL&&n->data<=prev->data){
    return 0;
}
prev=n;
return isbst(n->rnext);
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
printf("%d",isbst(n));
}
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*rnext;
struct node*lnext;

}*n,*prev,*extra;

void preorder(struct node*n){
if(n==NULL)
return ;
printf("%d",n->data);
preorder(n->lnext);
preorder(n->rnext);
}
void inorder(struct node*n){
if(n==NULL)
return ;

inorder(n->lnext);
printf("%d",n->data);
inorder(n->rnext);
}

void postorder(struct node*n){
if(n==NULL)                        //10,8,13,7,9,1
return ;

postorder(n->lnext);
postorder(n->rnext);
printf("%d",n->data);
}


struct node *create(){
n=(struct node*)malloc(sizeof(struct node));
scanf("%d",&n->data);
n->rnext=NULL;
n->lnext=NULL;
return n;
}


int main(){
struct node *root=create();
struct node *p1=create();
struct node *p2=create();
struct node *p3=create();
struct node *p4=create();
root->lnext=p1;
root->rnext=p2;
p1->lnext=p3;
p1->rnext=p4;
int x;
scanf("%d",&x);
switch(x){


 case 1:{n=root;
 printf("Preorder\n");
preorder(n);
break;}
case 2:{n=root;
printf("Inorder\n");
inorder(n);
break;}
case 3:{n=root;
printf("Postorder\n");
postorder(n);
break;}
}
}
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





int search(struct node *n,int key){
while(n!=NULL){
if(n->data==key)
return n->data;
else if(n->data<key)
n=n->rnext;
else if(n->data>key)
n=n->lnext;

}
return 0;

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
int key;
printf("Enter key :\n");
scanf("%d",&key);
int x=search(n,key);
if(x!=0)
printf("Found : %d",x);
else
printf("Not Found");
}
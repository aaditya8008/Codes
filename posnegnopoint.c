#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;

}*head,*pos,*neg,*n,*prev,*curr,*ext;

struct node*create(struct node**head,int i){
n=(struct node*)malloc(sizeof(struct node));
scanf("%d",&n->data);
if(i==0){
*head=n;
prev=n;
}
prev->next=n;
prev=n;
n->next=NULL;
return *head;

}
struct node*sepcreate(struct node*head,int i,struct node*curr){
n=(struct node*)malloc(sizeof(struct node));
n->data=(curr)->data;
if(i==0){
head=n;
prev=n;
}
prev->next=n;
prev=n;
n->next=NULL;
return head;

}


int main(){
int x;
printf("Enter size:\n");
scanf("%d",&x);
printf("Enter elements:\n");
for(int i=0;i<x;i++){
    create(&head,i);
}
n=head;
printf("Original List:\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}
ext=head;
for(int i=0;ext!=NULL; ){
    if((ext->data)>0){
    pos=sepcreate(pos,i,ext);
    i++;
    }
    ext=ext->next;
}
printf("Positive List:\n");
while(pos!=NULL){
    printf("%d\n",pos->data);
    pos=pos->next;
}
ext=head;
for(int i=0;ext!=NULL; ){
    if((ext->data)<0){
    neg=sepcreate(neg,i,ext);
    i++;
    }
    ext=ext->next;
}
printf("Negative List:\n");
while(neg!=NULL){
    printf("%d\n",neg->data);
    neg=neg->next;
}

}
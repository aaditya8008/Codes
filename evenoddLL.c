#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
}*s,*n,*prev,*head,*tail,*head1,*head2,*prev1,*prev2,*ex;

void create(struct node **head,int i,int size){
n=(struct node*)malloc(sizeof(struct node));
scanf("%d",&n->data);
if(*head==NULL){
    *head=n;
    n->prev=NULL;
    n->next=NULL;
    prev=*head;
}
else{
n->prev=prev;
prev->next=n;
n->next=NULL;
prev=n;
}
if(i==size-1)
tail=n;

}
void sepcreate(struct node *ex,struct node **head){
 n=(struct node*)malloc(sizeof(struct node));
n->data=(ex)->data;

if(*head==NULL){
    *head=n;
    n->prev=NULL;
    n->next=NULL;
    prev=*head;
}
else{
n->prev=prev;
prev->next=n;
n->next=NULL;
prev=n;
}

}

int main(){
int size;

printf("Enter size :\n");
scanf("%d",&size);
printf("Enter data :\n");
head=NULL;
head1=NULL;
head2=NULL;
for(int i=0;i<size;i++){
    create(&head,i,size);
}
n=head;
printf("Data :\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}
ex=head;
while(ex!=NULL){
    if(ex->data%2==0)
    sepcreate(ex,&head1);
    ex=ex->next;
}
ex=head;
while(ex!=NULL){
    if(ex->data%2!=0)
    sepcreate(ex,&head2);
    ex=ex->next;
}
n=head1;
printf("Even data :\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}
n=head2;
printf("Odd data :\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}


}

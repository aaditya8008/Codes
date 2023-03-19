#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;         
}*n,*head,*current,*next,*prev;
struct node*delsort(struct node*head){
current=head;

while(current->next!=NULL){
next=current->next;
if(current->data==next->data){
current->next=next->next;
free(next);
}
else
current=current->next;
}
return head;
}
struct node *create(struct node *n,int num,int i){
n=(struct node*)malloc(sizeof(struct node));
scanf("%d",&n->data);
if(i==0){
    head=n;
    prev=head;
}
prev->next=n;
n->next=NULL;
prev=n;
return head;
}
int main(){
int num;
scanf("%d",&num);
printf("Enter Data :\n");
for(int i=0;i<num;i++){
    create(n,num,i);
}
head=delsort(head);

while(head!=NULL){
printf("%d\n",head->data);
head=head->next;
}
}
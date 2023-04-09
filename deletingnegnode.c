#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;

}*head,*n,*prev,*curr;

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

struct node *delete(struct node *n){
prev=head;
curr=head;
while(curr!=NULL){
if(head->data<0){
    prev=head;
    head=head->next;
free(prev);
prev=head;
curr=head;
}
else if(curr->data<0){
    prev->next=curr->next;
    free(curr);
    curr=prev->next;
}
else{
    prev=curr;
    curr=curr->next;
}



}

    return head;
}
int main(){
int x;
printf("Enter size:\n");
scanf("%d",&x);
for(int i=0;i<x;i++){
    create(&head,i);
}
n=head;
printf("Original List:\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}



head=delete(head);

while(head!=NULL){
    printf("%d\n",head->data);
    head=head->next;
}
}
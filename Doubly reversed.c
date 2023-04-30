#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
}*n,*prev,*s,*head,*new,*temp,*head1,*head2,*curr,*next;
void print(struct node *head){
n=head;
printf("From front :\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}
n=head;
while(n->next!=NULL){
  
    n=n->next;
}
printf("From tail :\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->prev;
}
}
void create(struct node **head){
n=(struct node *)malloc(sizeof(struct node));
scanf("%d",&n->data);
if (*head==NULL){
    *head=n;
    n->next=NULL;
    n->prev=NULL;
    prev=n;
}
else{
prev->next=n;
n->next=NULL;
n->prev=prev;
prev=n;

}

}
void rev(struct node **head){
prev=NULL;
curr=*head;
while(curr!=NULL){
next=curr->next;
curr->next=prev;
if(prev!=NULL)
prev->prev=curr;
prev=curr;
curr=next;

}
*head=prev;
(*head)->prev=NULL;
}
int main(){
int x;
printf("Enter data:\n");
scanf("%d",&x);
for(int i=0;i<x;i++)
create(&head);
printf("Data is:\n");
print(head);
rev(&head);
printf("Data is reversed:\n");
print(head);
}
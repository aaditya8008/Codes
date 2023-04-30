#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;

}*n,*prev,*s,*head,*new,*temp,*head1,*head2,*curr,*next;
void print(struct node *head){
n=head;
printf("Data is :\n");
do{
    printf("%d\n",n->data);
    n=n->next;
}while(n!=head);
}
void create(struct node **head){
n=(struct node *)malloc(sizeof(struct node));
scanf("%d",&n->data);
if (*head==NULL){
    *head=n;
    n->next=NULL;
    prev=n;
}
else{
prev->next=n;
n->next=*head;
prev=n;

}

}
void createal(struct node **head1,int x){
n=(struct node *)malloc(sizeof(struct node));
n->data=x;
if (*head1==NULL){
    *head1=n;
    n->next=NULL;
    prev=n;
}
else{
prev->next=n;
n->next=*head1;
prev=n;
}

}






int main(){
int x;
printf("Enter size:\n");
scanf("%d",&x);
printf("Enter data:\n");
for(int i=0;i<x;i++)
create(&head);
print(head);
int i=0;
next=head;
do{
    if(i%2==0)
createal(&head1,head->data);
head=head->next;
i++;
}while(next!=head);
print(head1);
}
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*s,*n,*head1,*head2,*head,*prev;
void create(struct node **head){
n=(struct node *)malloc(sizeof(struct node));
scanf("%d",&n->data);
if(*head==NULL){
*head=n;
prev=*head;
n->next=NULL;
}
else{
prev->next=n;
n->next=NULL;
prev=n;
}
}
void push(struct node **head,int x){
n=(struct node *)malloc(sizeof(struct node));
n->data=x;
if(*head==NULL){
*head=n;
prev=*head;
n->next=NULL;
}
else{
prev->next=n;
n->next=NULL;
prev=n;
}
}
struct node* compare(struct node *head,struct node*head1,struct node *head2){
int i=1;
while(head1!=NULL&&head2!=NULL){
if(i%2!=0){
push(&head,head1->data);
head1=head1->next;
i=i+1;
}
else{
push(&head,head2->data);
head2=head2->next;
i=i+1;
}
}
while(head1!=NULL){
push(&head,head1->data);
head1=head1->next;
}
while(head2!=NULL){
push(&head,head2->data);
head2=head2->next;
}
return head;
}

void print(struct node * head){
    n=head;
    printf("Data :\n");
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
    }
}


int main(){
int n;
printf("ENTER SIZE:\n");
scanf("%d",&n);
printf("Enter LL-1:\n");
for(int i=0;i<n;i++)
create(&head1);
printf("Enter LL-2:\n");
for(int i=0;i<n;i++)
create(&head2);
printf("LL FIRST:\n");
print(head1);
printf("LL SECOND:\n");
print(head2);

head=compare(head,head1,head2);
print(head);
}
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
}*n,*prev,*s,*head,*new,*temp,*head1,*head2;
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
void del(struct node **head){
    
int x;
printf("Enter node :\n");
scanf("%d",&x);
n=*head;

while(n->data!=x&&n!=NULL){
    n=n->next;
}
temp=n;

n->prev->next=n->next;
n->next->prev=n->prev;
free(temp);
    
    
}
void add(struct node **head){
    new=(struct node *)malloc(sizeof(struct node));
    printf("Enter new node :\n");
scanf("%d",&new->data);
int x;
printf("Enter node :\n");
scanf("%d",&x);
n=*head;

while(n->data!=x&&n!=NULL){
    n=n->next;
}
new->next=n->next;
new->prev=n->next->prev;
n->next->prev=new;
    n->next=new;
    
    
}
void push(struct node **head,int x){
    n=(struct node *)malloc(sizeof(struct node));
    n->data=x;
    if(*head==NULL){
*head=n;
n->next=NULL;
n->prev=NULL;
prev=n;
    }
    else{
prev->next=n;
n->prev=prev;
prev=n;
n->next=NULL;

    }
}
int main(){
int x;
printf("Enter data:\n");
scanf("%d",&x);
for(int i=0;i<x;i++)
create(&head);
printf("Data is:\n");
print(head);
add(&head);
printf("Added data :\n");
print(head);
del(&head);
printf("Deleted data :\n");
print(head);
s=head;
while(s!=NULL){
    if(s->data%2==0){
        push(&head1,s->data);
    }
    s=s->next;
}
s=head;
while(s!=NULL){
    if(s->data%2!=0){
        push(&head2,s->data);
    }
    s=s->next;
}
printf("Even :\n");
print(head1);
printf("odd :\n");
print(head2);
}
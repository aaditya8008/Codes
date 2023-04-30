#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;

}*n,*prev,*s,*head,*new,*temp,*head1,*head2,*curr,*next;
void print(struct node *head){
n=head;
printf("From front :\n");
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
void add(struct node **head){
n=(struct node *)malloc(sizeof(struct node));
printf("Enter new data:\n");
scanf("%d",&n->data);
temp=*head;

while(temp->next!=*head){
    temp=temp->next;
}
n->next=temp->next;
temp->next=n;
*head=n;
}
void addl(struct node **head){
n=(struct node *)malloc(sizeof(struct node));
printf("Enter new data:\n");
scanf("%d",&n->data);
temp=*head;

while(temp->next!=*head){
    temp=temp->next;
}
n->next=temp->next;
temp->next=n;

}
void del(struct node**head){
printf("Enter value to be deleted :\n");
int x;
scanf("%d",&x);
curr=*head;
next=curr->next;
while(next->data!=x){
    curr=curr->next;
    next=next->next;
}
temp=next;
curr->next=next->next;
free(temp);

}



int check(int arr[],int n,int x){    
for(int i=0;i<x;i++){
    if(arr[i]==n)
    return 1;
}
return 0;   //check(arr,n->data,x)

}



void dupdel(struct node **head,int x){
    int k=0;
    int arr[x];
n=*head;
curr=*head;

do{
    
if(check(arr,n->data,x)){
curr=*head;
next=curr->next;
while(next->data!=n->data){
    curr=curr->next;
    next=next->next;
}
temp=next;
curr->next=next->next;
free(temp);
}
else{
arr[k]=n->data;
k++;
}
curr=curr->next;
n=n->next;
}while(n!=*head);

}



int main(){
int x;
printf("Enter data:\n");
scanf("%d",&x);
for(int i=0;i<x;i++)
create(&head);
printf("Deleted is:\n");
dupdel(&head,x);
print(head);
}
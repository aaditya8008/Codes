#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
}*head,*n,*head1,*head2,*prev;

struct node *create(struct node *head,int i){
    n= (struct node*)malloc(sizeof(struct node));
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
struct node *merge(struct node**head1,struct node**head2,struct node**head,int i){

n= (struct node*)malloc(sizeof(struct node));

while(*head1!=NULL&&*head2!=NULL){
    if((*head1)->data>(*head2)->data){
        n->data=(*head1)->data;
        (*head1)=(*head1)->next;
    }
    else if((*head1)->data<=(*head2)->data){
        n->data=(*head2)->data;
        *head2=(*head2)->next;
    }if(i==0){
        *head=n;
        prev=*head;

    }
    i++;
    }
    while((*head1!=NULL)){
         n->data=(*head1)->data;
        (*head1)=(*head1)->next;
    }printf("Yes\n");
    while((*head2!=NULL)){
         n->data=(*head2)->data;
        (*head2)=(*head2)->next;
    }
    
    
    prev->next=n;
    n->next=NULL;
    prev=n;
    

}
int main(){
int s;
scanf("%d",&s);
printf("Enter first linked list :\n");
for(int i=0;i<s;i++)
head1=create(head1,i);
printf("Enter second linked list :\n");
for(int i=0;i<s;0)
head2=create(head2,i);
int  i=0;

merge(&head1,&head2,&head,i++);
while(head!=NULL){
    printf("%d\n",head->data);
    head=head->next;
}

}
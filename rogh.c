#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;
}*head,*head1,*head2,*head3,*n,*new,*prev,*n1,*n2,*n3;
struct node *create(struct node*n,int num,int i){
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
struct node *merge(struct node *head1,struct node *head2){
int i=0;
while(head2!=NULL&&head1!=NULL){
n=(struct node*)malloc(sizeof(struct node));
if(i=0){
head=n;
prev=head;}
if(head1==NULL){
    n=head2;
    
    head2=head2->next;
    break;
}
else if(head2==NULL){
    n=head1;
    head1=head1->next;
    break;
}

if(head2->data<head1->data){
n->data=head2->data;
head2=head2->next;

}
else {
n=head1;
head1=head1->next;

}

i++;



prev->next=n;

n->next=NULL;

prev=n;
}
return head;

}
int main(){
    int num;
    printf("Enter size :\n");
    scanf("%d",&num);
    printf("Enter data of Linked list :\n");
    
    for(int i=0;i<num;i++){
        create(n,num,i);
    }head1=head;
    printf("Enter data of Linked list :\n");
    for(int i=0;i<num;i++){
        create(n,num,i);
    }head2=head;
    head=merge(head1,head2);
    printf("Merged list :\n");
    while(head!=NULL){
    printf("%d\n",head->data);
    head=head->next;}
    
    
}

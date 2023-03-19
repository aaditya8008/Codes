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
n1=head1;
n2=head2;
int i=0;

while(n1!=NULL&&n2!=NULL){
n=(struct node*)malloc(sizeof(struct node));
if(i=0){
head3=n;
prev=head3;}
if(n2->data<n1->data){
n=n2;
n2=n2->next;
}
else {
n=n1;
n1=n1->next;
}

i++;



prev->next=n;

n->next=NULL;

prev=n;
printf("YES\n");}
return head3;
    

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
    head3=merge(head1,head2);
    printf("Merged list :\n");
    while(head3!=NULL){
    printf("%d\n",head3->data);
    head3=head3->next;}
    
    
}

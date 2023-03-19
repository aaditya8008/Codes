#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
}*prev,*next,*current,*head,*n;
struct node*rev(struct node*head){
prev=NULL;
current=head;
while(current!=NULL){
next=current->next;
current->next=prev;
prev=current;
current=next;

}
head=prev;
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
head=rev(head);
while(head!=NULL){
printf("%d\n",head->data);
head=head->next;
}
}
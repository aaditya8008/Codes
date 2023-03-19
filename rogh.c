#include<stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node*next;
}*n1,*n2,*n3,*head,*head1,*head2,*n,*merg;
struct node *insert(struct node *n){
 
n=(struct node*)malloc(sizeof(struct node));

scanf("%d",&n->data);
n->next=head;
head=n;
return head;
}

struct node *merge(struct node*head1,struct node *head2,struct node*merg){
    n1=head1;
    n2=head2;
    
    
    while(n1!=NULL&&n2!=NULL){
        n3=(struct node*)malloc(sizeof(struct node));
if(n1->data<=n2->data){
n3->data=n1->data;
n1=n1->next;
}
if(n1->data >= n2->data){
n3->data=n2->data;
n2=n2->next;
}
n3->next=merg;
merg=n3;
}
return merg;
}




int main(){
for(int i=0;i<5;i++)
head1=insert(n1);
for(int i=0;i<5;i++){
    printf("%d",head1->data);
    head1=head1->next;
}
for(int i=0;i<5;i++)
head2=insert(n2);
for(int i=0;i<5;i++){
    printf("%d",head2->data);
    head2=head2->next;
}


merg=NULL;

merg=merge(head1,head2,merg);
for(int i=0;i<10;i++){
    printf("%d\n",merg->data);
    merg=merg->next;
}
}
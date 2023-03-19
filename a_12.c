#include<stdio.h>
#include<stdlib.h>
struct node{
int num;                           //insertion in start
struct node *next;
}*n1,*n2,*n3,*n4;
struct node * insert(struct node*head){
struct node *n=head;
printf("Enter Extra :\n");
struct node* ext;
scanf("%d",&ext->num);
ext->next=n;
head=ext;
return head;
}
int main(){
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
n4=(struct node*)malloc(sizeof(struct node));
printf("Enter Data :\n");
scanf("%d%d%d%d",&n1->num,&n2->num,&n3->num,&n4->num);
n1->next=n2;
n2->next=n3;
n3->next=n4;
n4->next=NULL;
printf("Data is :\n");
struct node *n=n1;
while(n!=NULL){
printf("Num : %d\n",n->num);
n=n->next;

}

n=insert(n1);
while(n!=NULL){
printf("Num : %d\n",n->num);
n=n->next;

}

}
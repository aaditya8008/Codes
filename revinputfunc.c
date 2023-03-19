#include<stdio.h>
#include <stdlib.h>
struct node{
int data;
struct node*next;
}*n1,*head,*n;
struct node *insert(struct node *n){
 
n=(struct node*)malloc(sizeof(struct node));

scanf("%d",&n->data);
n->next=head;
head=n;
return head;
}

int main(){
for(int i=0;i<5;i++)
insert(n1);
for(int i=0;i<5;i++){
    printf("%d",head->data);
    head=head->next;
}

}
#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
}*n1,*n2,*n3,*n4,*n5,*n,*nextof,*current,*prev,*head,*temp,*new;
 struct node *insert(struct node *head){
   prev=NULL;
   current=head;
   nextof=current->next;
   while(current!=NULL&&nextof!=NULL){
    if(current==NULL)
    return 0;
   if(current->data==nextof->data){
n=nextof;
current->next=nextof->next;
free(n);

   }
   else{
    current=current->next;
    
   }
   nextof=current->next;
printf("running\n");
   }

    return head;
 }








int main(){
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
n4=(struct node*)malloc(sizeof(struct node));
n5=(struct node*)malloc(sizeof(struct node));
scanf("%d%d%d%d%d",&n1->data,&n2->data,&n3->data,&n4->data,&n5->data);
n1->next=n2;
n2->next=n3;
n3->next=n4;
n4->next=n5;
n5->next=NULL;
n=insert(n1);
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}



}
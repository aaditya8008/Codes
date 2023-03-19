#include<stdio.h>
#include<stdlib.h>
struct node{
int num;
struct node *next;         
}*n1,*n2,*n3,*n4,*p,*q;
int cycle(struct node *head){
p=q=head;
while(q!=NULL){
p=p->next;
q=q->next->next;
if(q==p){
    printf("Cycle\n");
    return 0;
}
}               //coldgdm.com
printf("No loop\n");
return 1;
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
cycle(n1);
}


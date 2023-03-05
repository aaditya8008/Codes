#include <stdio.h>
#include<stdlib.h>
struct node{
char name[10];
int rollno;
struct node *next;
}*n1,*n2,*extra,*n3;
struct node *del(struct node *n,int index){
    int i=0;

struct node *p=n;
struct node *q=p->next;
while(i!=index-1){
p=p->next;
q=q->next;
i++;
}

p->next=q->next;
free(q);
return n;

    }
void print(struct node *n){
    while(n!=NULL){
printf("%s\t%d\n",n->name,n->rollno);
n=n->next;


    }
}
int main(){
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
printf("Enter element\n");
scanf("%s%d",n1->name,&n1->rollno);
n1->next=n2;
printf("Enter element\n");
scanf("%s%d",n2->name,&n2->rollno);
n2->next=n3;
printf("Enter element\n");
scanf("%s%d",n3->name,&n3->rollno);
n3->next=NULL;
int i=0;
printf("Enter num:\n");
scanf("%d",&i);
print(n1);
n1=del(n1,i);    //After this element
print(n1);
}
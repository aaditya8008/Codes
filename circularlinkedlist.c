#include <stdio.h>
#include<stdlib.h>
struct node{
char name[10];
int rollno;
struct node *next;
}*n1,*n2,*extra,*n3;
struct node * insert(struct node *n){
    printf("Enter extra :\n");
extra=(struct node*)malloc(sizeof(struct node));
    scanf("%s%d",extra->name,&extra->rollno);
struct node *p=n->next;
while(p->next!=n1){
    p=p->next;
}
extra->next=p->next;
p->next=extra;
n=extra;          //head changed
return n;
}
void print(struct node *n){
    

do{
   
printf("%s\t%d\n",n->name,n->rollno);
 n=n->next;
}while(n!=n1);
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
n3->next=n1;
print(n1);
n1=insert(n1);
print(n1);
}
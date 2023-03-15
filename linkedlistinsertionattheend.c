#include <stdio.h>
#include<stdlib.h>
struct node{
char name[10];
int rollno;
struct node *next;
}*n1,*n2,*extra;
struct node *add(struct node *n){
    extra=(struct node*)malloc(sizeof(struct node));
printf("Enter extra\n");
scanf("%s%d",extra->name,&extra->rollno);
while(n->next!=NULL){
n=n->next;

}
n->next=extra;
extra->next=NULL;

    return extra;
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

printf("Enter element\n");
scanf("%s%d",n1->name,&n1->rollno);
n1->next=n2;
printf("Enter element\n");
scanf("%s%d",n2->name,&n2->rollno);
n2->next=NULL;


print(n1);
add(n1);
print(n1);
}
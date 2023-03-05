#include<stdio.h>
#include<stdlib.h>
struct node{
char name[10];
int rollno;
struct node *next;
}*s1,*s2,*s3,*in;
void print(struct node *s){
while(s!=NULL){
    printf("%s%d",s->name,s->rollno);
    s=s->next;
}
}
struct node * inserte(struct node *head){
in=(struct node*) malloc(sizeof(struct node));
struct node *p=head;
int i=0;
scanf("%s%d",in->name,&in->rollno);
while(p->next!=NULL){
    p=p->next;
    i++;
}
p->next=in;  
in->next=NULL;
return head;

}
int main(){
s1=(struct node*) malloc(sizeof(struct node));   //memory in heap
s2=(struct node*) malloc(sizeof(struct node));
s3=(struct node*) malloc(sizeof(struct node));

printf("Enter First element:\n");
scanf("%s%d",s1->name,&s1->rollno);
s1->next=s2;
printf("Enter second element:\n");
scanf("%s%d",s2->name,&s2->rollno);
s2->next=s3;
printf("Enter third element:\n");
scanf("%s%d",s3->name,&s3->rollno);
s3->next=NULL;

inserte(s1);
print(s1);


}
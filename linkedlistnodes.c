#include<stdio.h>
#include<stdlib.h>
struct student{
char name[10];
int class;
float cgpa;
struct student*next;

}*s1,*s2,*s3;
void print(struct student *nxt){
while(nxt!=NULL){
printf("%s\t%d\t%.2f\n",nxt->name,nxt->class,nxt->cgpa);
nxt=nxt->next;


}}


int main(){
    s1=(struct student*)malloc(sizeof(struct student));
    s2=(struct student*)malloc(sizeof(struct student));
    s3=(struct student*)malloc(sizeof(struct student));
    printf("Enter data of student 1: \n");
scanf("%s%d%f",s1->name,&s1->class,&s1->cgpa);
printf("Enter data of student 2: \n");
s1->next=s2;
scanf("%s%d%f",s2->name,&s2->class,&s2->cgpa);

s2->next=s3;
printf("Enter data of student 3: \n");
scanf("%s%d%f",s3->name,&s3->class,&s3->cgpa);
s3->next=NULL;
print(s1);
}
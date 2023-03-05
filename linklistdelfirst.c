#include<stdio.h>
#include<stdlib.h>
struct student{
    char name[10];
    int rollno;
    struct student *next;
}*s1,*s2;
void print(struct student *s){
while(s!=NULL){
printf("%s   %d\n",s->name,s->rollno);
s=s->next;

}

}
int main(){
    s1=(struct student*)malloc(sizeof(struct student));
    s2=(struct student*)malloc(sizeof(struct student));
printf("Enter elements : \n");
scanf("%s%d",s1->name,&s1->rollno);
s1->next=s2;
printf("Enter elements : \n");
scanf("%s%d",s2->name,&s2->rollno);
s2->next=NULL;
print(s1);
return 0;
}
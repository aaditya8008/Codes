#include<stdio.h>
#include<string.h>
struct student{
char name[10];
int class;
float cgpa;
struct student*ptr;

}s1,s2;
int main(){
strcpy(s1.name,"Aaditya");

s1.ptr=&s2;
strcpy(s1.ptr->name,"Ashiya");
printf("Enter data of student 1: \n");
scanf("%d%f",&s1.class,&s1.cgpa);
printf("Enter data of student 2: \n");
scanf("%d%f\n",&s1.ptr->class,&s1.ptr->cgpa);
printf("Data of student 1: \n");
printf("%s\n%d\n%.2f\n",s1.name,s1.class,s1.cgpa);
printf("Data of student 2: \n");
printf("%s\n%d\n%.2f",s1.ptr->name,s1.ptr->class,s1.ptr->cgpa);
}
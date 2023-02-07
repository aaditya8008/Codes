#include<stdio.h>
struct student{
char name[10];
int rollno;
float cgpa;


};
int main(){
int n;
printf("Enter number of students:\n");
scanf("%d",&n);
struct student s[n];
for(int i=0;i<n;i++){
printf("Enter Data of Student %d\n",i+1);
scanf("%s%d%f",s[i].name,&s[i].rollno,&s[i].cgpa);
printf("Data of student %d\n",i+1);
printf("Name=%s\nRoll No=%d\nCgpa=%.2f\n",s[i].name,s[i].rollno,s[i].cgpa);


}
return 0;


}
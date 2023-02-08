#include<stdio.h>
struct student{
char name[10];
int rollno ;
float cgpa;
};
int main(){
int n;
printf("Number of students:\n");
scanf("%d",&n);
struct student s[n];
for(int i=0;i<n;i++){
printf("Enter Data of student %d\n",i);
scanf("%s%d%f",s[i].name,&s[i].rollno,&s[i].cgpa);


}
for(int i=0;i<n;i++){
printf("Data of student %d\n",i);
printf("%s\n%d\n%.2f\n2",s[i].name,s[i].rollno,s[i].cgpa);

}

}
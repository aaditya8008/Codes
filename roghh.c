#include<stdio.h>
struct student{
char name[10];
int rollno;
};

int main(){
    printf("Enter size:\n");
    int n;
    scanf("%d",&n);
    struct student s[n];
    for(int i=0;i<n;i++){
printf("Enter Data of student :%d\n",i);
   scanf("%s%d",s[i].name,&s[i].rollno);
    }
for(int i=0;i<n;i++)
printf("%s\t%d\n",s[i].name,s[i].rollno);

}
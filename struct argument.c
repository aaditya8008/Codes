#include<stdio.h>
struct student{
int rollno;
char Name[10];
};
int data(struct student s,int n){
    for(int i=0;i<n;i++){
scanf("%d%s",&s[i].rollno,s[i].Name);
}
for(int i=0;i<n;i++){
printf("%d%s\n",s[i].rollno,s[i].Name);
}
}
int main(){
    
printf("Enter Number of students\n");
int n;
scanf("%d",&n);
struct student s[n];

data(s,n);


}
#include<stdio.h>
typedef struct student{
int rollno;
char name[10];
}st;
void data(st *ptr,int n){
    for(int i=0;i<n;i++){
printf("Enter data %d\n",i+1);
scanf("%d%s",&(*ptr).rollno,ptr->name);

    }
    for(int i=0;i<n;i++){
printf("print data %d\n",i+1);
printf("%d\n%s\n",(*ptr).rollno,ptr->name);

}}
int main(){
    int n ;
    printf("Enter size\n");
    scanf("%d",&n);
st s[n],*ptr;
ptr=s;
data(ptr,n);



}
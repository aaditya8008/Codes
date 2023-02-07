#include<stdio.h>
struct student1{
    int roll;
    char name[10];
    float cgpa;
};
union student2{
    int roll;
    char name[4];
    float cgpa;
};
int main(){
struct student1 s1;
union student2 s2;
printf("Structure\n");
scanf("%d%s%f",&s1.roll,s1.name,&s1.cgpa);
printf("Union\n");
scanf("%d%s%f",&s1.roll,s1.name,&s1.cgpa);
printf("size of struct =%ld\nsize of union=%ld",sizeof(s1),sizeof(s2));
return 0;
}
//struct size =20,union=4


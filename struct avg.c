#include<stdio.h>
struct book{
char name[100];
int price;
int pages;

};
int main(){
struct book b1,b2,b3;
printf("Enter name of books\n");
scanf("%s%s%s",b1.name,b2.name,b3.name);
printf("Enter price of three books\n");
scanf("%d%d%d",&b1.price,&b2.price,&b3.price);
printf("Enter no. of pages\n");
scanf("%d%d%d",&b1.pages,&b2.pages,&b3.pages);
float avg1=(b1.price+b2.price+b3.price)/3;
float avg2=(b1.pages+b2.pages+b3.pages)/3;

printf("Avg price = %.2f\n",avg1);
printf("Avg pages = %.2f",avg2);


}
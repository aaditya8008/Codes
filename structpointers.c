#include<stdio.h>
struct cp{
float r;
float i;

}c1,c2,*ptr;
void sum(struct cp *ptr,struct cp c2){
printf("%.2f + i %.2f",(ptr->r*c2.r)-(ptr->i*c2.i),(ptr->r*c2.r)+(ptr->i*c2.i));

}
int main(){
ptr=&c1;
printf("Enter first complex\n");
scanf("%f%f",&ptr->r,&ptr->i);
printf("Enter second complex\n");
scanf("%f%f",&c2.r,&c2.i);

sum(ptr,c2);


}
#include<stdio.h>
struct cp{
float r;
float i;

}c1,c2;
void sum(struct cp c1,struct cp c2){
printf("%.2f + i %.2f",(c1.r*c2.r)-(c1.i*c2.i),(c1.r*c2.r)+(c1.i*c2.i));

}
int main(){
printf("Enter first complex\n");
scanf("%f%f",&c1.r,&c1.i);
printf("Enter second complex\n");
scanf("%f%f",&c2.r,&c2.i);
sum(c1,c2);


}
#include<stdio.h>
struct cp{
float r;
float i;

}c1,c2,*ptr;
int sum(struct cp *ptr,struct cp *ptr2){
printf("%.2f + i %.2f",((*ptr).r*(*ptr2).r)-((*ptr).i*(*ptr2).i),((*ptr).r*(*ptr2).r)+(*ptr).i*(*ptr2).i);


}
int main(){
    struct cp *ptr2;
    ptr = &c1;
    ptr2=&c2;
printf("Enter first complex\n");
scanf("%f%f",&(*ptr).r,&(*ptr).i);
printf("Enter second complex\n");
scanf("%f%f",&(*ptr2).r,&(*ptr2).i);
sum(ptr,ptr2);

}
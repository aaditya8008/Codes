#include <stdio.h>
struct cp1{
    float r1;
    float i1;
};
struct cp2{
    float r2;
    float i2;
};
int main(){
struct cp1 c1;
struct cp2 c2;
printf("Enter cp1:\n");
scanf("%f%f",&c1.r1,&c1.i1);
printf("Enter cp2:\n");
scanf("%f%f",&c2.r2,&c2.i2);
printf("Sum is = %.0f + i %.2f",(c1.r1*c2.r2-c1.i1*c2.i2),(c1.r1*c2.r2+c1.i1*c2.i2));
return 0;


}
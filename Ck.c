#include<stdio.h>
struct com1{
    double r1;
    double i1;
};
struct com2{
    double r2;
    double i2;
};
int main(){
struct com1 c1;
struct com2 c2;
printf("Enter first complexes:\n");
scanf("%lf%lf",&c1.r1,&c1.i1);
printf("Enter second complexes:\n");
scanf("%lf%lf",&c2.r2,&c2.i2);
printf("Sum = %.0lf + i %.2lf\n",(c1.r1*c2.r2)-(c1.i1*c2.i2),(c1.r1*c2.r2)+(c1.i1*c2.i2));
}

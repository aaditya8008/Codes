#include<stdio.h>
#include<math.h>

int avg(int a,int b,int h,int *area,int *peri)
{
*area=(b * h)/2;


*peri= a+b+h;
 
 return *area&&*peri;
}

int main()
{
    int a,b,h;
    int area;
    int peri;
    scanf("%d%d%d",&a,&b,&h);
    avg(a,b,h,&area,&peri);
    printf("Area = %d\n",area);
    printf("Perimeter = %d",peri);
    return 0;
}
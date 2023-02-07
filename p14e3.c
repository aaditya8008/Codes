#include<stdio.h>
#include<math.h>

int swap(int *a,int *b)
{
*a=*a+*b;
*b=*a-*b;
*a=*a-*b;
 return *a&&*b;
}

int main()
{
    int a,b;
    
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    swap(&a,&b);
    printf("A = %d\n",a);
    printf("B = %d\n",b);
    return 0;
}
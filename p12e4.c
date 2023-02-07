#include<stdio.h>
#include<math.h>

int op(int a,int b,int c)
{float d=((b*b)-(4*a*c));
    float root1 = (-b + sqrt(d)) / (2 * a);
float  root2 = (-b - sqrt(d)) / (2 * a);
printf("root1=%f\n root2=%f",root1,root2);
return 0;
}

int main()
{
    int a,b,c;
    
    scanf("%d%d%d",&a,&b,&c);
    op(a,b,c);
    return 0;
}
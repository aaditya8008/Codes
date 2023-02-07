#include<stdio.h>
#include<math.h>

int avg(int a,int b,int c,int *av)
{*av=(a+b+c)/3;

 return *av;
}

int main()
{
    int a,b,c;
    int av;
    
    scanf("%d%d%d",&a,&b,&c);
    avg(a,b,c,&av);
    printf("Average = %d",av);
    return 0;
}
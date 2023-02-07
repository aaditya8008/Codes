#include<stdio.h>
#include<math.h>
int op(int a,int b,int *add,int *sub,int*mul,int*div)
{
*add=a+b;
*sub=a-b;
*mul=a*b;
*div=a/b;
 return *add&&*sub&&*mul&&*div;
}

int main()
{
    int a,b,add,sub,mul,div;
    
    printf("Enter A:");
    scanf("%d",&a);
    printf("Enter B:");
    scanf("%d",&b);
    op(a,b,&add,&sub,&mul,&div);
    printf("add = %d\n",add);
    printf("sub = %d\n",sub);
    printf("mul = %d\n",mul);
    printf("div = %d\n",div);
    return 0;
}
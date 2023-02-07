#include<stdio.h>
#include<math.h>

int fib(int n)
{
if(n==0)
return 0;
else if(n==1)
return 1;
else
 return n+fib(n-1);
}

int main()
{
    int n,sum=0;
    
    scanf("%d",&n);

    
    printf("%d",fib(n));
    return 0;
}
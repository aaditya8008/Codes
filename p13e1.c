#include<stdio.h>
#include<math.h>

int abs_value(int a)
{if(a<0)
return abs(a);
else 
return a;
}

int main()
{
    int a;
    
    scanf("%d",&a);
    abs_value(a);
    printf("%d\n",abs_value(a));
    return 0;
}
#include<stdio.h>
#include<math.h>

int pr(int a)
{int rem;

    
    while(a>1){
        
        rem=a%10;
        a=a/10;
    }

  
return rem;
}

int main()
{
    int a;
    
    scanf("%d",&a);
    pr(a);
    printf("first digit = %d\n",pr(a));
    return 0;
}
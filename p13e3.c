#include<stdio.h>
#include<math.h>

int pr(int a)
{int c=0;
for(int i=1;i<=9;i++){
    if(a%i==0)
    c++;
}
    if(c==2)
return 0;
else 
return 1;
}

int main()
{
    int a;
    
    scanf("%d",&a);
    pr(a);
    printf("%d\n",pr(a));
    return 0;
}
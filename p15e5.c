#include<stdio.h>

int sm(int n)
{if(n==0)
return 0;
else if(n==1)
return 1;
else
return n%10+sm(n/10);

  }
    

int main()
{
    int n,i=1,sum;
    scanf("%d",&n);
    sm(n);
    printf("Sum=%d",sm(n));
    return 0;
}
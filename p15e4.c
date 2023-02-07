#include<stdio.h>

int pr(int n,int i,int *sum)
{if(i<=n){
    int fact=1;
    for(int j=1;i<=i;j++){
        fact=fact*j;
    }
    *sum=i/fact+*sum;
    pr(n,i+1,sum);
}
    
  else if(n==0){
    *sum=0;
  }
  return *sum;
  }
    

int main()
{
    int n,i=1,sum;
    scanf("%d",&n);
    pr(n,i,&sum);
    printf("Sum=%f\n",sum);
    return 0;
}
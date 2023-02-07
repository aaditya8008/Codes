#include<stdio.h>

int pr(int n,int i,int *count)
{
    if(i<=10){
        if(n%i==0)
        *count=*count+1;

        pr(n,i+1,count);
        
    }
    return *count;}
    

int main()
{
    int n,sum=0;
    int i=1,count=0;
    scanf("%d",&n);
    pr(n,i,&count);
    printf("count=%d\n",count);
     if(count==2)
        printf("Prime\n");

        else 
        printf("Not Prime\n");
   
    return 0;
}
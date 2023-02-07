#include<stdio.h>
int main()
{
    int n,count=0,rem,sum=0;
    scanf("%d",&n);
    int m=n;
    for(int i=0;i<=9;i++){
        count =0;
        m=n;
        while(m!=0){
        rem=m%10;
        sum=sum+rem;
        m=m/10;
        if(rem==i)
        count++;
        }
        if(count>0)
        printf("Frequency of %d =%d\n",i,count);
    }return 0;
}
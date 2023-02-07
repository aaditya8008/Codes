#include<stdio.h>
int op(int n){int m;
    for(int i=2;i<=9;){
        m=i;
        if(n%i==0){
            printf("%d\n",i);
            n=n/i;
        }if(n%i==0)
        i=m;
        else
        i++;
    }
}

int main()
{
    int n;
    
    scanf("%d",&n);
    op(n);
    return 0;
}
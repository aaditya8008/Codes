#include<stdio.h>
#include<math.h>
int op(int sum,int avg,int sd){
    int i,j,k,l,n;
    scanf("%d%d%d%d%d",&i,&j,&k,&l,&n);
    sum=i+j+k+l+n;
    avg=(i+j+k+l+n)/5;
    sd=0;
    for(int c=1;c<=5;c++){
        sum=(i-avg)/(n-1);
    }
    sd=sqrt(sum);
}

int main()
{
    float f;
    int i;
    scanf("%f",&f);
    scanf("%d",&i);
    printf("%d",pro(f,i));
    return 0;
}
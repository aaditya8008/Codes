#include<stdio.h>
int main(){
int n;
float elem,fact=1,sum=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
    fact=1;
for(int j=1;j<=i;j++){
    fact=fact*j;
}
elem=i/fact;
sum=sum+elem;
printf("digit %d=%f\n",i,elem);
}
printf("total sum=%f\n",sum);
}
#include<stdio.h>
#include<math.h>
int main(){
float x;
scanf("%f",&x);
float sum=0,lg,j;
j=((x-1)/x);
for(int i=1;i<=7;i++){
lg=0.5*(pow(j,i));
sum=sum+lg;
printf("%f\n",lg);
}printf("Total=%f\n",sum);
return 0;
}
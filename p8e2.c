#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
if(n<=5)
printf("Fine= 50 paise\n");
else if(n>=6&&n<=10)
printf("Fine= 1 rupee\n");
else if(n>=10&&n<=30)
printf("Fine= 5 rupees\n");
else if(n>30)
printf("Membership cancelled\n");
else
printf("On time\n");

return 0;}
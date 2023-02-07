#include<stdio.h>
int main(){
int stock,quantity;
int credit;
scanf("%d%d",&stock,&quantity);
if(quantity<=stock)
credit='ok';
if(quantity<=stock&&credit=='ok')
printf("Supply his requirement\n");
else if(credit!='ok')
printf("Send intimation\n");
else if(stock<quantity&&credit=='ok')
printf("Supply what in stock\n");

return 0;}
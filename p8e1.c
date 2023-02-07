#include<stdio.h>
int main(){
char c;
scanf("%c",&c);
if(c>=65&&c<=90)
printf("Capital\n");
else if(c>=97&&c<=122)
printf("Smaller\n");
else if(c>=48&&c<=57)
printf("Digit\n");
else
printf("Symbols\n");

return 0;}
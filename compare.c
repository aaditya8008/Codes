#include<stdio.h>
#include<string.h>
int main(){
char str[100];
char str1[100];
printf("Enter First:\n");
gets(str);
printf("Enter Second:\n");
gets(str1);
for(int i=0;(str[i]!='\0'&&str1!='\0');i++){
if(str[i]!=str1[i]){
printf("Not equal\n");
return 0;}

}
printf("Equal\n");




}
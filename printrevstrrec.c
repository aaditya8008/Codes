#include<stdio.h>
char rev(char *str,int n){
    if(*str){
    rev((str+1),n);

printf("%c",*(str) );
    }
   

}

int main(){
int n;
printf("Enter size\n");
scanf("%d",&n);
char str[n];
printf("Enter string\n");
scanf("%s",&str);
printf("%s\n",str);
char *ptr=str;
int s=0,e=n-1;
rev(&str[0],n);
}
#include<stdio.h>

int main(){
char str1[10];
char str2[10];
int j=0;
scanf("%s%s",str1,str2);
for(int i=0;str2[i]!='\0';i++){
j++;

}
printf("Count=%d\n",j);
int n;
printf("Enter limits\n");
scanf("%d",&n);
for(int i=0;i<n;i++){
    str2[j]=str1[i];
    j++;}
    str2[j]='\0';
    printf("%s",str2);
return 0;


}
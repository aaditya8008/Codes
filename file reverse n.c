#include<stdio.h>
#include<stdlib.h>
int main(){
FILE *ptr;
ptr=fopen("name.txt","r");
if(ptr==NULL){
printf("FILE doesn't exists\n");
exit(0);
}
int n;
char c;
printf("Enter n\n");
scanf("%d",&n);
char ch[n];
c=fgetc(ptr);
int j=0;
for(int i=0;i<n;i++){
ch[i]=c;
c=fgetc(ptr);
j++;
}
ch[j]='\0';
printf("%s",ch);

ptr=fopen("name.txt","w");
for(int i=n-1;i>=0;i--){
    c=ch[i];
fprintf(ptr,"%c",c);

}



}
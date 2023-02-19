#include<stdio.h>
int main(){
FILE *ptr;
ptr=fopen("tt.txt","r");
int n=10,j=0;
char str[n];
char c=fgetc(ptr);
for(int i=0;i<n;i++){
str[i]=c;
c=fgetc(ptr);
j++;
}
str[j]='\0';
printf("%s",str);
ptr=fopen("name.txt","a");
for(int i=n-1;i>=0;i--){
c=str[i];
fprintf(ptr,"%c",c);

}

}





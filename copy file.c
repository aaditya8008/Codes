#include<stdio.h>
int main(){
FILE *ptr,*ptr2;
ptr=fopen("name.txt","r");
ptr2=fopen("tt.txt","w");
char ch=fgetc(ptr);
while(ch!=EOF){
fputc(ch,ptr2);
ch=fgetc(ptr);

}
fclose(ptr);
fclose(ptr);

}
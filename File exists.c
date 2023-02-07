#include <stdio.h>

int main(){
FILE *fptr;
fptr=fopen("name.txt","r");
if(fptr==NULL)
printf("NULL");
else{
printf("It exists");
fclose(fptr);}
return 0;
}
#include <stdio.h>

int main(){
FILE *fptr;
fptr=fopen("name.txt","r");
int ch;
fscanf(fptr,"%d",&ch);
printf("%d",ch);


fclose(fptr);
return 0;
}
//prints 1234
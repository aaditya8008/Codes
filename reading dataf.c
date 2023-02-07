#include <stdio.h>

int main(){
FILE *fptr;
fptr=fopen("name.txt","r");
char ch;
fscanf(fptr,"%c",&ch);
printf("%c",ch);
fscanf(fptr,"%c",&ch);
printf("%c",ch);
fscanf(fptr,"%c",&ch);
printf("%c",ch);
fscanf(fptr,"%c",&ch);
printf("%c",ch);

fclose(fptr);
return 0;
}
//o/p aadi
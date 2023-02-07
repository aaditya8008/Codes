#include <stdio.h>

int main(){
FILE *fptr;
fptr=fopen("name.txt","r");
printf("%c",fgetc(fptr));
printf("%c",fgetc(fptr));
printf("%c",fgetc(fptr));
printf("%c",fgetc(fptr));

return 0;
}
//will =Aadi
#include <stdio.h>

int main(){
FILE *fptr;
fptr=fopen("name.txt","w");
fputc('A', fptr);
fputc('a',fptr);
fputc('d',fptr);
fputc('i',fptr);
fclose(fptr);
return 0;
}
//will write =Aadi
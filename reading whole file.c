#include <stdio.h>

int main(){
FILE *fptr;
fptr=fopen("name.txt","r");
char ch;
ch=fgetc(fptr);
while(ch!= EOF){
    printf("%c",ch);
    ch=fgetc(fptr);
}
fclose(fptr);
return 0;
}
//willprint whole file=Aadi is there
#include <stdio.h>

int main(){
FILE *fptr;
fptr=fopen("name.txt","w");
char ch[100]="AAditya";
fprintf(fptr,"%s\n",ch);
//for char
fprintf(fptr,"%c",'m');
fprintf(fptr,"%c",'a');
return 0;
}
//will =Aaditya
//      ma
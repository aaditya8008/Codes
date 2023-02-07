#include <stdio.h>

int main(){
FILE *fptr;
fptr=fopen("name.txt","w");
int ch=69;
fprintf(fptr,"%d",ch);
return 0;
}
//delete , file=69
//if "w"="a"(append)=6969
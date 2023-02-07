#include<stdio.h>
int main(){
FILE *fptr;
fptr=fopen("name.txt","r");
char c;
int count=0,countt=0,countn=0,countc=0;
c=fgetc(fptr);

while(c!=EOF){
if(c=='\n')
countn++;
else if(c=='\t')
countt++;
else if(c==' ')
count++;
else if(c>=65||c<=122)
countc++;

c=fgetc(fptr);
}
printf("%d\n%d\n%d\n",countc,countn,count,count);
fclose(fptr);

}
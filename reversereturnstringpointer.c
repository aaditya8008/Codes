#include<stdio.h>
char rev(char *ptr,int s,int e,int j){
    char temp;
    if(s<e){
temp=*(ptr+s);
*(ptr+s)=*(ptr+e);
*(ptr+e)=temp;
j++;
    rev(ptr,s=s+1,e=e-1,j);
    }
    else {
     j=j*2;
    *(ptr+(j))='\0';}
   return *ptr;

}

int main(){
int n;
printf("Enter size\n");
scanf("%d",&n);
char str[n];
printf("Enter string\n");
scanf("%s",&str);
printf("%s\n",str);
char *ptr=str;
int s=0,e=n-1,j=0;
rev(ptr,s,e,j);
for(int i=0;i<n;i++){
printf("%c",*(ptr+i));}
}
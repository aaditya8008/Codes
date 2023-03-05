#include<stdio.h>
int rev(char *ptr,int n){
int s=0,e=n-1;
int temp,j=0;
while(s<e){
temp=*(ptr+s);
*(ptr+s)=*(ptr+e);
*(ptr+e)=temp;
s++;e--;
j++;
}
j=j*2;
*(ptr+j)='\0';
return *ptr;
}
int main(){
int n;
scanf("%d",&n);
char arr[n];
scanf("%s",arr);
char *ptr=arr;
rev(ptr,n);
  printf("%s",arr);
}







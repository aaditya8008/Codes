#include<stdio.h>
int rev(char *ptr,int n){
int s=0,e=n-1;
int temp,j=0;
for(int i=0;i<=n;i++){
    scanf("%c",&*(ptr+i));
    j++;
}
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
#include<stdio.h>
int rev(char *ptr,int n){
int s=0,e=n-1;
int temp;
while(s<e){
if(*(ptr+s)!=*(ptr+e)){
    return -1;
}
s++;e--;
}
return 1;

}
int main(){
int n;
scanf("%d",&n);
char arr[n];
scanf("%s",arr);
char *ptr=arr;
rev(ptr,n);
  printf("%d",rev(ptr,n));
}







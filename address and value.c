#include<stdio.h>
int main(){
int arr[10];
for(int i=0;i<10;i++){
scanf("%d",&arr[i]);

}
int*ptr=arr;

for(int i=0;i<10;i++){
printf("%d\t%u\n",*(ptr+i),ptr+i);

}


}
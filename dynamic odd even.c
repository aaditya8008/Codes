#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
int *ptr,i=0,j=1;
ptr=(int*)malloc(n*sizeof(int));
while(i<10){
    if((j)%2==0){
        ptr[i]=j;
        i++;
    }
    j++;
}
for(int i=0;i<n;i++){
printf("%d\n",ptr[i]);
}
ptr=realloc(ptr,n*sizeof(int));
i=0,j=1;
while(i<10){
    if((j)%2!=0){
        ptr[i]=j;
        i++;
    }
    j++;
}
for(int i=0;i<n;i++){
printf("%d\n",ptr[i]);
}
free(ptr);
}
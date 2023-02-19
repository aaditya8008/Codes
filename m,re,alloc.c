#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr;
ptr=(int*)malloc(5*sizeof(int));
for(int i=0;i<5;i++){
    scanf("%d",&ptr[i]);
}
ptr=realloc(ptr,2);
for(int i=0;i<5;i++){
    printf("%d\n",ptr[i]);
}
free(ptr);
return 0;
}
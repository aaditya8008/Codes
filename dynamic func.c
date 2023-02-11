#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
float *ptr;
ptr=(float*)calloc(n,sizeof(int));
for(int i=0;i<n;i++){
scanf("%f",&ptr[i]);
}
for(int i=0;i<n;i++){
printf("%.2f\n",ptr[i]);
}
ptr=realloc(ptr,8*sizeof(int));
free(ptr);



}
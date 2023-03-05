#include<stdio.h>
#include<stdlib.h>
struct myarray{
char total_size;
int used_size;
int *ptr;
};
void createarray(struct myarray *p){
p->ptr=(int*)malloc(sizeof(p));
for(int i=0;i<sizeof(p);i++){
scanf("%d\n",&p->ptr[i]);
}
for(int i=0;i<sizeof(p);i++){
printf("%d\n",p->ptr[i]);
}
}
int main(){
struct myarray marks;
createarray(&marks);
}
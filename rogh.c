#include<stdio.h>
#include<stdlib.h>
struct queue{
    int data;
    struct queue*next;
}*q,*n;
struct queue *r=NULL;
struct queue *f=NULL;
int isfull(struct queue*q){
    n=(struct queue* )malloc(sizeof(struct queue));
    if(n==NULL)
    return 1;
    return 0;
}

int isempty(struct queue*q){
    if(r==f)
    return 1;
    return 0;
}
void enqueue(struct queue*q){
if(isfull((q))){
    printf("Over Full\n");
return ;
}
n=(struct queue* )malloc(sizeof(struct queue));
scanf("%d",&n->data);

n->next=NULL;
if(f==NULL)
f=r=n;
else{
    r->next=n;
r=n;
}
}
void dequeue(struct queue*q){
n=f;
int x=f->data;
f=f->next;
free(n);
}
void print(struct queue*q){
n=f;
printf("DATA :\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}

}
int main(){
int size;
printf("Enter size:\n");
scanf("%d",&size);
printf("Enter Data:\n");
for(int i=0;i<size;i++)
enqueue(q);
print(q);
dequeue(q);
print(q);

}
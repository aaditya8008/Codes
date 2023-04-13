#include<stdio.h>
#include<stdlib.h>
struct queue{
int data;
struct queue * next;
}*q,*n;
struct queue*f=NULL;
struct queue*r=NULL;
int isempty(struct queue *q){
if(f==r)
return 1;
return 0;
}
int isfull(struct queue *q){
struct queue *n=(struct queue*)malloc(sizeof(struct queue));
if(n==NULL)
return 1;
return 0;
}
void enqueue(int i){
   if(isfull(q)) {
    printf("FULL\n");
    return ;
   }
   struct queue *n=(struct queue*)malloc(sizeof(struct queue));
scanf("%d",&n->data);
n->next=NULL;
if(f==NULL){
    f=r=n;
}
else{
r->next=n;
r=n;}



}
int dequeue(struct queue *q){
    if(isempty(q)){
        printf("EMPTY\n");
        return 0;
    }
    n=f;
    int x=f->data;
    f=f->next;
    free(n);
return x;

    }


int main(){
    printf("Enter elements :\n");
for(int i=0;i<5;i++)
enqueue(10);
n=f;
printf("Original :\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}
printf("After deque :\n");
dequeue(q);
n=f;
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}

return 0;


}
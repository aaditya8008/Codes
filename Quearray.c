#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int size;
    int *arr;
    int f;
    int r;
}Q;
int isfull(Q*q){
if(q->r==q->size-1)
return 1;
return 0;
}
int isempty(Q*q){
if(q->r==q->f)
return 1;
return 0;
}
void enqueue(Q*q){
if(isfull(q)){
    printf("Over Flow\n");
    return ;
}
q->r++;
scanf("%d",&q->arr[q->r]);
if(q->f==-1)
q->f=q->r;
return;

}
int dequeue(Q*q){
if(isempty(q)){
    int x=q->arr[q->f];
q->f++;
printf("Under Flow\n");
return x;   
}
int x=q->arr[q->f];
q->f++;

return x;

}
void print(Q*q){
int f=q->f;
int r=q->r;
printf("From Front :\n");
for(int i=f;i<=r;i++)
printf("%d\n",q->arr[i]);
printf("From Rear :\n");
for(int i=r;i>=f;i--)
printf("%d\n",q->arr[i]);

}

int main(){
Q*q=(Q*)malloc(sizeof(Q));
printf("Enter size:\n");
scanf("%d",&q->size);
q->arr=(int*)malloc(sizeof(int)*q->size);
q->f=-1;
q->r=-1;
printf("Enter data:\n");
for(int i=0;i<=q->size-1;i++)
enqueue(q);
print(q);
dequeue(q);
print(q);
dequeue(q);
dequeue(q);
dequeue(q);
dequeue(q);
print(q);
printf("Re-Enter data:\n");
for(int i=0;i<=q->size-1;i++)
enqueue(q);
}
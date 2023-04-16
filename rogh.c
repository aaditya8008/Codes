#include<stdio.h>
#include<stdlib.h>
struct queue{
int size;
int f;
int r;
int *arr;

}*q;
int isfull(struct queue*q){
    if((q->r+1)%q->size==q->size-1)
    return 1;
    return 0;
}
int isempty(struct queue*q){
    if(q->r==q->f)
    return 1;
    return 0;
}
void enqueue(struct queue*q){
    
q->r=(q->r+1)%q->size;
scanf("%d",&q->arr[q->r]);
}
int dequeue(struct queue*q){
    int a=-1;
    if(isempty(q))
    return a ;
    else{
q->f=(q->f+1)%q->size;
a=q->arr[q->f];
    }
    return a;

}
int main(){
    q=(struct queue*)malloc(sizeof(struct queue));
    printf("Enter Size :\n");
    scanf("%d",&q->size);
    q->f=q->r=-1;
    q->arr=(int*)malloc(sizeof(struct queue)*q->size);
    printf("Enter data:\n");
    for(int i=0;i<q->size;i++)
    enqueue(q);
printf("Data is :\n");
int x=q->f;
while(x!=q->r){
    x++;
printf("%d\n",q->arr[x]);
}
    
printf("Data dleted is :\n");
for(int i=0;i<3;i++){
    
printf("%d\n",dequeue(q));

}
printf("Enter data:\n");
    for(int i=0;i<3;i++)
    enqueue(q);
printf("Data is :\n");

while(x!=q->r){
    q->r++;
printf("%d\n",q->arr[q->r]);
}

}
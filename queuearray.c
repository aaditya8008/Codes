#include<stdio.h>
#include<stdlib.h>
struct queue{
int size;
int f;              //front
int r;              //ray
int *arr;

}*q;
int isempty(struct queue *q){
    if(q->f==q->r)
    return 1;
    return 0;
}
int isfull(struct queue *q){
    if(q->r==(q->size-1))
    return 1;
    return 0;
}
void enqueue(struct queue* q,int i){
    if(isfull(q)){
        printf("Over flow :\n");
        return ;
    }
    q->r++;
    scanf("%d",&q->arr[i]);
    
}
int dequeue(struct queue *q){
    int a=-1;
    if(q->f==q->r){
    printf("Empty\n");
    return 0;}
    else{

a=q->arr[q->f];
q->f++;
return a;
    }
}

int main(){

q=(struct queue*)malloc(sizeof(struct queue));
printf("Enter  size:\n");
scanf("%d",&q->size);
q->arr=(int*)malloc(q->size*sizeof(int));
q->r=q->f=-1;
printf("Enter  data:\n");
for(int i=0;i<q->size;i++){
    enqueue(q,i);
}
while(q->f<q->size-1){
    q->f++;
printf("%d\n",q->arr[q->f]);


}

}
#include<stdio.h>
#include<stdlib.h>
struct queue{
    int size;
    int*arr;
    int r;
    int f;
}*q,*n;
int isempty(struct queue *q){
    if(q->r==q->f){
    
    printf("Empty \n");
    return 1;}
    return 0;
}
int isfull(struct queue *q){
    if((q->r+1)% q->size==q->f){       //1=2,2=3
    printf("Full\n");
    return 1;}
    return 0;
}
void enqueue(struct queue* q){
    if(isfull(q))
    return ;
    q->r=(q->r+1)%q->size;
    scanf("%d",&q->arr[q->r]);

}
int dequeue(struct queue* q){
    
    if(isempty(q))
    return 0;
    q->f=(q->f+1)%q->size;
int x=q->arr[q->f];
return x;

}
int main(){
q=(struct queue*)malloc(sizeof(struct queue));
printf("Enter size :\n");
scanf("%d",&q->size);
q->r=q->f=0;          //for full q=f
q->arr==(int*)malloc(sizeof(int)*q->size);
printf("Enter elements :\n");
for(int i=0;i<q->size;i++)
enqueue(q);
printf("Elements  are :\n");
dequeue(q);
while(q->f!=q->r){
       q->f=(q->f+1)%q->size;
    printf("%d\n",q->arr[q->f]);
     

}

}
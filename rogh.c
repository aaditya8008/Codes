#include <stdio.h>
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
void enqueue(struct queue* *q,int i){
    if(isfull(q)){
        printf("Over flow :\n");
        return ;
    }
    q->r++;
    scanf("%d",&q->arr[i]);
    
    
}
int dequeue(struct queue **q){
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
q->size=400;
q->arr=(int*)malloc(q->size*sizeof(int));
q->r=q->f=-1;
// BFS implementation

int u;
int i=0;
int visited[7]={0,0,0,0,0,0,0};
int a[7][7]={
{0,1,1,1,0,0,0},
{1,0,1,0,0,0,0},
{1,1,0,1,1,0,0},
{1,0,1,0,1,0,0},
{0,0,1,1,0,1,1},
{0,0,0,0,0,1,0},
{0,0,0,0,0,1,0}
};
printf("Starting from : %d\n",i);
visited[i]=1;
enqueue(&q,i);
while(!isempty(&q)){
int node=dequeue(&q);
for(int j=0;j<7;j++){
    if(a[node][j]==1&&visited[j]==0){
        printf("%d",j);
        visited[j]=1;
        enqueue(&q,i);
    }
}

}
}


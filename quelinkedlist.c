#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
    int data;
    struct queue *next;
}Q;
Q*f=NULL;
Q*r=NULL;
Q*n;
int isfull(Q*q){
    n=(Q*)malloc(sizeof(Q));
    if(n==NULL){
        printf("Over flow:\n");
        return 1;
    }
    return 0;
}
int isempty(Q*q){
   
    if(f==r){
        printf("Under flow:\n");
        return 1;
    }
    return 0;
}
void enqueue(Q*q){
if(isfull(q)){
    return ;
}
n=(Q*)malloc(sizeof(Q));
scanf("%d",&n->data);
if(f==NULL){
f=n;
r=n;

}
else{
    r->next=n;
    r=n;
    
}

n->next=NULL;


}
int  dequeue(Q**q){
    if(isempty((*q))){
        if(f==NULL&&r==NULL)
        return 0;
        n=f;
int x=f->data;
f=f->next;
free(n);
return x;
    }
n=f;
int x=f->data;
f=f->next;
free(n);
return x;
}
void print(Q*q){
    n=f;
    printf("Data :\n");
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
    }
}

int main(){
Q*q;

int size;
printf("Enter size:\n");
scanf("%d",&size);
printf("Enter Data :\n");
for(int i=0;i<size;i++){
    enqueue(q);
}
print(q);
printf("Dequeued : %d\n",dequeue(&q));
printf("Dequeued : %d\n",dequeue(&q));
printf("Dequeued : %d\n",dequeue(&q));
printf("Dequeued : %d\n",dequeue(&q));
printf("Dequeued : %d\n",dequeue(&q));
print(q);
}
#include<stdio.h>
#include<stdlib.h>
typedef struct queue{
int size;
int f,r;
int i;
int *arr;
}Q;
int isfull(Q*q){
    if(q->r==q->size-1){
        printf("Over flow\n");
        return 1;
    }
    return 0;
}
int isempty(Q*q){
    if(q->r==q->f){
        printf("Under flow\n");
        return 1;
    }
    return 0;
}
void print(Q*q){
int f=q->f;
int r=q->r;
printf("From front :\n");
for(f;f<q->size;f++){
    printf("%d\n",q->arr[f]);
}
printf("From rear :\n");
for(r;r>=q->f;r--){
    printf("%d\n",q->arr[r]);
}


}
Q*enqueue(Q*q){
   
    for((q)->r;(q)->r<(q)->size-1;){
        if(isfull(q))
   return 0;

(q)->r++;

scanf("%d",&(q)->arr[(q)->r]);

}

    }

int dequeue(Q*q){
    if(isempty(q)){
        return 0;
    }
q->f=q->f++;
return (q)->arr[q->f];
}
int main(){
 Q *q=(Q*)malloc(sizeof(Q));
printf("Enter size:\n");
scanf("%d",&q->size);
q->r=q->f=-1;
q->arr=(int*)malloc(sizeof(int)*q->size);
printf("Enter data:\n");
enqueue(q);
print(q);

printf("Dequeued : %d\n",dequeue(q));
print(q);
}
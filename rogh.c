#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};
int isempty(struct stack*s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
    

}
int isfull(struct stack*s){
        if(s->top==s->size-1)
        return 1;
        else
        return 0;

    }
int create(struct stack *s){
    
    if(isfull(s)){
    printf("stack overflow:\n");
    return 0;}
    printf("Enter Elements:\n");
for(int i=0;i<s->size;i++){
        s->top++;
    scanf("%d",&s->arr[s->top]);
    
    }
}
int peek(struct stack *s){
    int i;
    printf("Enter element num:\n");
    scanf("%d",&i);
    if((s->top-i+1)<0){
    printf("Invalid Index\n");
    return 0;
    }

    printf("%d",s->arr[s->top-i+1]);

}



int main(){
    struct stack*s=(struct stack*)malloc(sizeof(struct stack));
     s->top=-1;
    printf("Enter size :\n");
    scanf("%d",&(s->size));
    s->arr=(int*)malloc(s->size*sizeof(int));
   create(s);
    
    printf("Elements are:\n");
    for(int i=0;i<s->size;i++){
        
    printf("%d\n",s->arr[i]);
    
    }
    realloc(s->arr,s->size+sizeof(int));
    s->size++;
    peek(s);

}
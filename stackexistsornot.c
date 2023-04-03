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
    int isfull(struct stack*s){
        if(s->top==s->size-1)
        return 1;
        return 0;

    }

}
int main(){
    struct stack*s;
    s->arr=(int*)malloc(s->size*sizeof(int));
    
    printf("Enter size ,top:\n");
    scanf("%d%d",&(s->size),&(s->top));
    s->arr[0]=5;
    s->top++;
    
    if(isempty(s))
    printf("Not exists:\n");
    else
    printf("Exists\n");

}
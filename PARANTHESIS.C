#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    char *arr;
}*top,*n;
int isfull(struct stack *s){
    n=(struct stack*)malloc(sizeof(struct stack));
    if(s->top==s->size)
    return 1;

    return 0;
}
int isempty(struct stack *s){
    if(s->top==-1)
    return 1;
    return 0;

}
int push(struct stack *n,char data){
    if(isfull(n)){
        printf("Full stack\n");
    return 0;
    }
    
n->top=n->top+1;
n->arr[n->top]=data;

}
int pop(struct stack *s){
    if(isempty(s)){
    printf("Stack underflow:\n");
    return 0;
    }
    int temp=s->arr[s->top];
s->top--;
return temp;
}
struct stack * create(struct stack *s){
    if(isfull(s)){
        printf("Full stack\n");
    return 0;
    }
s->top++;
scanf("%s",&s->arr[s->top]);

}
int parenmatch(struct stack *s){
     struct stack *n=(struct stack*)malloc(sizeof(struct stack));
n->top=-1;
n->size=s->size;
n->arr=(char *)malloc(sizeof(char)*s->size);
for(int i=0;i<s->arr[i]!='\0';i++){
    printf("N- top=%d\n",n->top);
if(s->arr[i]=='('||s->arr[i]=='{'||s->arr[i]=='['){
    char ch=s->arr[i];
push(n,ch);

}

else if(s->arr[i]==')'||s->arr[i]=='}'||s->arr[i]==']')
if(s->arr[i]==)
pop(n);
}
if(isempty(n))
return 1;
return 0;
}
int main(){
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));

printf("Enter Size :\n");
scanf("%d",&s->size);
s->top=-1;
s->arr=(char *)malloc(sizeof(char)*s->size);
printf("Enter data :\n");
for(int i=0;i<s->size;i++)
create(s);
printf("Data is :\n");

printf("%s\n",s->arr);

if(parenmatch(s))
printf("Balanced\n");

else
printf("Un-balanced\n");

}
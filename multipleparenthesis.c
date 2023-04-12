#include<stdio.h>
#include<stdlib.h>
struct stack{
int top;
int size;
char*arr;


}*s,*n;
int isfull(struct stack *s){
    n=(struct stack*)malloc(sizeof(struct stack));
    if(s->top==s->size)
    return 1;

    return 0;
}
void push(struct stack *n,char c){
n->top++;
n->arr[n->top]=c;
}
void pop(struct stack *n){
    n->top--;

}
int isempty(struct stack *s){
    if(s->top==-1)
    return 1;
    return 0;

}
struct stack *create(struct stack *s){
    s->top++;
    scanf("%s",&s->arr[s->top]);
    
}
int match(char c,struct stack *n){
    if(c=='('||n->arr[n->top]==')')
    return 1;
    if(c=='{'||n->arr[n->top]=='}')
    return 1;
    if(c=='['||n->arr[n->top]==']')
    return 1;
}

int parenthisis(struct stack*s){
n=(struct stack*)malloc(sizeof(struct stack));
n->size=n->size;
n->top=-1;
n->arr=(char*)malloc(n->size*sizeof(char));
for(int i=0;s->arr[i]!='\0';i++){
   
    if(isempty(s))
    return 0;
if(s->arr[i]=='('||s->arr[i]=='{'||s->arr[i]=='[')
push(n,s->arr[i]);
else if(s->arr[i]==')'||s->arr[i]=='}'||s->arr[i]==']'){
if(match(s->arr[i],n))
pop(n);
else 
return 0;
}
  printf("TOP :%d\n",n->top);
}
printf("%d\n",n->top);
if(isempty(n))
return 1;
return 0;


}

int main(){
s=(struct stack*)malloc(sizeof(struct stack));
s->top=-1;

printf("Enter size :\n");
scanf("%d",&s->size);
s->arr=(char*)malloc(s->size*sizeof(char));

for(int i=0;i<s->size;i++){
    create(s);

}


    printf("%s\n",s->arr);
if(parenthisis(s))
printf("Balanced\n");
else
printf("Un-Balanced\n");


}
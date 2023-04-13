#include<stdio.h>
#include<stdlib.h>
struct stack{
int size;
int top;
char *arr;

}*s,*n;
void *create(struct stack*s){
s->top++;
scanf("%s",&s->arr[s->top]);

}
int isfull(struct stack *x){
   x=(struct stack*)malloc(sizeof(struct stack));
   if(x==NULL)
   return 1;
   return 0;

}
int isempty(struct stack *x){
   
   if(x->top==-1)
   return 1;
   return 0;

}
void push(char c,struct stack*n){
n->top++;
n->arr[n->top]=c;

}
void pop(struct stack*n){
n->top--;

}
int verify(char x,char y){
if(x=='('&&y==')')
return 1;
if(x=='{'&&y=='}')
return 1;
if(x=='['&&y==']')
return 1;
return 0;

}

int check(struct stack*s){
    n=(struct stack*)malloc(sizeof(struct stack));
    n->top=-1;
    n->arr=(char*)malloc(sizeof(char)*s->size);
for(int i=0;s->arr[i]!='\0';i++){
    
    if(s->arr[i]=='('||s->arr[i]=='{'||s->arr[s->top]=='['){
      
     push(s->arr[i],n);
    }
     else if(s->arr[i]==')'||s->arr[i]=='}'||s->arr[s->top]==']'){
       if(verify(s->arr[i],n->arr[n->top]));
        pop(n);
    }printf("TOP :%d\n",n->top);
    
}
if(isempty(n))
return 1;

return 0;

}
int main(){
s=(struct stack*)malloc(sizeof(struct stack));
s->top=-1;
printf("Enter size :\n");
scanf("%d",&s->size);
s->arr=(char*)malloc(sizeof(char)*s->size);
for(int i=0;i<s->size;i++){
    create(s);
}
printf("Elements are :\n");
int i=s->top;
while(i>=0){
    
printf("%c\n",s->arr[i]);
i--;
}

if(check(s))
printf("balanced");
else
printf(" un-balanced");

}
#include<stdio.h>
#include<stdlib.h>

struct stack{
    int size;
    int top;
    char * arr;
};
int isempty(struct stack*s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
    

}
int pop(struct stack *s){
    if(isempty(s)){
    printf("Stack underflow:\n");
    return 0;
    }
    printf("Removed Element:\n");
    char temp=s->arr[s->top];
s->top--;
return temp;
}

int isfull(struct stack*s){
        if(s->top==s->size-1)
        return 1;
        else
        return 0;

    }
char create(struct stack *s){
  printf("Enter elements :\n");
  for(int i=0;i<s->size;i++){
        s->top++;
    scanf("%s",&s->arr[s->top]);
    
}}
char pushed(struct stack *s,char x){
  
        s->top++;
    s->arr[s->top]=x;
    
}
int paranthesis(struct stack * s){
  struct stack*new=(struct stack*)malloc(sizeof(struct stack));
  new->top=-1;
  for(int i=0;i<s->size;i++){
    if(s->arr[i]=='(')
    pushed(new,'(');
    else if(s->arr[i]==')'){
if(isempty(new))
return 0;
pop(new);

    }
  }
  if(isempty(new))
return 1;
}
int main(){
  struct stack *s=(struct stack*)malloc(sizeof(struct stack));
  s->top=-1;
  printf("Enter size :\n");
  scanf("%d",&s->size);
s->arr=(char*)malloc(2*s->size*sizeof(char));
create(s);
if(paranthesis(s))
printf("Good\n");
else 
printf("Check");
}
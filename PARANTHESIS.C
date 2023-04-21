#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    char *arr;
    int top;
}*s,*n;
int match(char a,char b){
if(a=='{'&&b=='}')
return 1;
else if(a=='('&&b==')')
return 1;
else if(a=='['&&b==']')
return 1;
return 0;

}

int isfull(struct stack*s){
    if(s->top==s->size-1){
        printf("FULL\n");
        return 1;
    }
    return 0;
}
int isempty(struct stack*s){
    if(s->top==-1){
        printf("EMPTY\n");
        return 1;
    }
    return 0;
}
void create(struct stack*s){
    if(isfull(s))
    return;
s->top++;
scanf("%s",&s->arr[s->top]);
}
void push(struct stack*s,char c){
    if(isfull(s))
    return;
s->top++;
s->arr[s->top]=c;
}
char pop(struct stack*s){
    if(isfull(s))
    return 0;
s->top--;
return s->arr[s->top+1];
}
int parenmatch(struct stack *s){
    n=(struct stack*)malloc(sizeof(struct stack));
n->size=s->size;
n->top=-1;
n->arr=(char*)malloc(sizeof(char)*(n->size));
    for(int i=0;s->arr[i]!='\0';i++){
       
        if(s->arr[i]=='('||s->arr[i]=='{'||s->arr[i]=='['){
        push(n,s->arr[i]);
        }
else if(s->arr[i]==')'||s->arr[i]=='}'||s->arr[i]==']'){
if(!(match(n->arr[n->top],s->arr[i])))
return 0;
pop(n);
}
 printf("%d\n",n->top);
}
if(isempty(n))
return 1;
else 
return 0;

}

int main(){
s=(struct stack*)malloc(sizeof(struct stack));
printf("Enter size :\n");
scanf("%d",&s->size);
s->top=-1;
s->arr=(char*)malloc(sizeof(char)*(s->size));
printf("Enter Data :\n");
for(int i=0;i<s->size;i++)
create(s);
printf("Value\n");
printf("%s\n",s->arr);
if(parenmatch(s))
printf("Balanced\n");
else
printf("Un-Balanced\n");

}
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
int stacktop(struct stack *n){
    return n->arr[n->top];
}
int isempty(struct stack *x){
   
   if(x->top==-1)
   return 1;
   return 0;

}
void push(char c,struct stack*sp){
sp->top++;
sp->arr[sp->top]=c;

}
char pop(struct stack*sp){
    char x=sp->arr[sp->top];
sp->top--;
return x;
}

int precedence(char ch){
if(ch=='*'||ch=='/')
return 3;
else if(ch=='+'||ch=='-')
return 2;
return 0;

}
int isoperator(char ch){
    if(ch=='*'||ch=='/'||ch=='+'||ch=='-')
    return 1;
    return 0;
}


char *infixtopostfix(char *infix){
    
struct stack *sp=(struct stack*)malloc(sizeof(struct stack));

sp->size=10;
sp->top=-1;
sp->arr=(char*)malloc(sizeof(char)*sp->size);

char *postfix=(char*)malloc((strlen(infix)+1)*sizeof(char));
int i=0;   // infix traversal
int j=0;   // postfix traversal

while(infix[i]!='\0'){

    if(!isoperator(infix[i])){
        postfix[j]=infix[i];
        j++;i++;
        
    }
    else{
        if(precedence(infix[i])>precedence(stacktop(sp))){
            push(infix[i],sp);          //greater precedence
            i++;

        }
        else{
            postfix[j]=pop(sp);        //equal or greater precedence removed
            j++;
        }

    }
}

while(!isempty(sp)){

    postfix[j]=pop(sp);
    j++;
}
postfix[j]='\0';
return postfix;
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
printf("infix fix expression is :%s\n",s->arr);
printf("Post fix expression is :%s\n",infixtopostfix(s->arr));
}

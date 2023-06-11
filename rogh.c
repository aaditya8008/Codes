#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct stack{
    int top;
    int*arr;
    int size;
}*s,*n;

int isoperator(char c)
{
    if ((c == '^' || c == '*' || c == '/' || c == '+' || c == '-'))
        return 1;
    return 0;
}
void push(struct stack*n,int c){
    n->top++;
n->arr[n->top]=c;

}
int pop(struct stack*n){
    int c=n->arr[n->top];
    n->top--;
    return c;
}
int isempty(struct stack *n){
    if(n->top==-1)
    return 1;
    return 0;
}
int postfixevaluation(char *postfix){
n=(struct stack*)malloc(sizeof(struct stack));
n->top=-1;
n->size=strlen(postfix);
n->arr=(int*)malloc(sizeof(int)*strlen(postfix));

int i=0;
int j=0;

while(postfix[i]!='\0'){
    printf("HELLO : %d \n",postfix[i]-'0');
    
 if(!isoperator(postfix[i])&&postfix[i]!=' '){
push(n,postfix[i]-'0');

}
else if(postfix[i]!=' '){
int var2=pop(n);
int var1=pop(n);
printf("Var 1:%d\n Var 2:%d\n",var1,var2);
switch(postfix[i]){
case '+':{
    push(n,(var1)+(var2));
    break;
}
case '-':{
    push(n,(var1)-(var2));break;
}
case '/':{
    push(n,(var1)/(var2));break;
}
case '^':{
    push(n,(var1)^(var2));break;
}
}

}
i++;
}
return n->arr[n->top];
}
int main(){
    int size=10;


char postfix[size];

printf("Enter Expression :\n");
fgets(postfix,size-1,stdin);
printf("aNSWER :%d",postfixevaluation(postfix));


}
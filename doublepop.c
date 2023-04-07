#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *next;
}*s,*n;
void print(struct node *top){
  printf("Elements are:\n");
    while(top!=NULL){
    printf("%d\n",top->data);
    top=top->next;}
}
int isempty(struct node *top){
  if(top==NULL){
  return 1;
  printf("Its Empty\n");
  }
  return 0;
    
}
int isfull(struct node *top){
  struct node *test=(struct node*)malloc(sizeof(struct node*));
  
  if(test==NULL){
    printf("Is Full :\n");
    return 1;
  }
  return 0;
    
}
struct node* push(struct node *top,int i){
    struct node *p=(struct node *)malloc(sizeof(struct node));
    scanf("%d",&p->data);
    p->next=top;
    top=p;
return top;
}
int pop(struct node ** top){
  if(isempty(*top))
  return 0;
struct node *extra=*top;
int x=extra->data;
*top=(*top)->next;
free(extra);
return x;
}
int peek(int pos,struct node *top){
  n=top;
  for(int i=0;(i<pos-1&&n!=NULL);i++){
    n=n->next;
  }
if(n!=NULL){
printf("Element is :\n");
return n->data ;}
else
return -1;
}

int main(){
struct node *top=NULL;
int x;
printf("Enter size:\n");
scanf("%d",&x);
printf("Enter elements to push:\n");
for(int i=0;i<x;i++)
top=push(top,i);
print(top);

printf("popped element is %d\n",pop(&top));
print(top);
printf("Enter position to acces:\n");
int y;
scanf("%d",&y);

printf("%d",peek(y,top));
}
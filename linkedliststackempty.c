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
struct node *pop(struct node * top){
  if(isempty(top)){
    printf("EMPTY\n");
  return 0;}
struct node *extra=top;
top=top->next;
free(extra);
return top;
}
void peek(struct node * top){
  printf("Enter elment you want to access:\n");
  int x;
  scanf("%d",&x);
  n=top;
  while(n->data!=x){
    n=n->next;
  }

printf("Element is :\n");
printf("%d",n->data);
return ;
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
for(int i=0;i<=5;i++)
top=pop(top);
print(top);
peek(top);
}
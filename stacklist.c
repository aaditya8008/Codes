#include<stdio.h>
#include<stdlib.h>
struct stack
{
  int data;
  struct stack *next;
} *s, *n, *top;

int
push (struct stack **top)
{
n = (struct stack *) malloc (sizeof (struct stack));
       scanf ("%d", &n->data); n->next = *top; *top = n;}
     int isfull (struct stack *top)
     {
     n = (struct stack *) malloc (sizeof (struct stack)); if (n == NULL)
	  {
	  printf ("Stack overflow\n"); return 1;}
	  return 0;}

	  int isempty (struct stack *top)
	  {

	  if (top == NULL)
	  {
	  printf ("Stack underflow\n"); return 1;}
	  return 0;}

	  void pop (struct stack **top)
	  {
	  n = *top; *top = (*top)->next; free (n);}

	  void peek (struct stack *top)
	  {
	  printf ("Peeked: %d\n", (top)->data);}
void print (struct stack *top){
    n=top;
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
    }
    
}
	  int main ()
	  {
	  int x;
	  printf ("Enter size:\n");
	  scanf ("%d", &x);
	  top = NULL;
	  printf ("Enter data:\n");
	  for (int i = 0; i < x; i++)
	  push (&top);
	 printf("Data is :\n");
      print(top);
      printf("Want to operate:\n");
          int y;
          scanf("%d",&y);
          while(y){
      printf("Enter operation:\n");
      int str;
      
      scanf("%d",&str);
      switch(str){
          while(y)
          case 1:{
              printf("Ënter new data\n");
              push(&top);
              printf("Pushed data:\n");
              print(top);
              break;
          }
          case 2:{
              pop(&top);
              printf("Poped data:\n");
              print(top);
              break;
          }
          case 3:{
              peek(top);
             
              break;
          }
          
          
      }
       printf("Want to re-operate:\n");
          scanf("%d",&y);
	  }
	  }
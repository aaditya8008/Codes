#include<stdio.h>
#include<stdlib.h>
struct stack
{
  int size;
  int top;
  int *arr;
} *s, *n;
void
print (struct stack *s)
{
  for (int i = s->top; i >= 0; i--)
    printf ("%d\n", s->arr[i]);
}

void
peek (struct stack *s)
{

  printf ("%d\n", s->arr[s->top]);
}

int
create (struct stack *s)
{
  for (int i = 0; i < s->size; i++)
    {
      s->top++;
      scanf ("%d", &s->arr[s->top]);
    }
}

int
isfull (struct stack *s)
{
  if (s->top == s->size - 1)
    {
      printf ("stack overflow\n");
      return 1;
    }
  return 0;
}

int
isempty (struct stack *s)
{
  if (s->top == -1)
    {
      printf ("stack underflow\n");
      return 1;
    }
  return 0;
}

void
push (struct stack *s)
{
  if (isfull (s))
    return;
  s->top++;
  printf ("Enter new value:\n");
  scanf ("%d", &s->arr[s->top]);

}

int
pop (struct stack *s)
{
  if (isempty (s))
    return 0;
  int x = s->arr[s->top];
  s->top--;
  return x;
}

int
main ()
{
  s = (struct stack *) malloc (sizeof (struct stack));
  int size;
  s->top = -1;
  printf ("Enter size:\n");
  scanf ("%d", &s->size);
  s->arr = (int *) malloc (sizeof (int) * size);
  printf ("Enter data :\n");
  create (s);
  printf ("Enter data:\n");
  print (s);

  int n;
  printf ("Wanted to operate :\n");
  scanf ("%d", &n);
  while (n)
    {
      printf ("Enter op:\n");
      int op;
      scanf ("%d", &op);
      switch (op)
	{

	case 1:
	  {
	    push (s);
	    printf ("Pushed:\n");
	    print (s);
	    break;
	  }
	case 2:
	  {
	    pop (s);
	    printf ("Poped:\n");
	    print (s);
	    break;
	  }
	case 3:
	  {
	    peek (s);
	    printf ("Peeked:\n");
	    print (s);
	    break;
	  }



	}
      printf ("Wanted to re-operate :\n");
      scanf ("%d", &n);
    }

}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int size;
    char *arr;
    int top;
} *s, *n, *infix, *postfix;
int isfull(struct stack *s)
{
    if (s->top == s->size - 1)
    {
        printf("FULL\n");
        return 1;
    }
    return 0;
}
int isempty(struct stack *s)
{
    if (s->top == -1)
    {
        printf("EMPTY\n");
        return 1;
    }
    return 0;
}
void create(struct stack *s)
{
    if (isfull(s))
        return;
    s->top++;
    scanf("%s", &s->arr[s->top]);
}
void push(struct stack *s, char c)
{
    if (isfull(s))
        return;
    s->top++;
    s->arr[s->top] = c;
}
char pop(struct stack *s)
{
    if (isfull(s))
        return 0;
    s->top--;
    return s->arr[s->top + 1];
}
int precedence(char c)
{
    if (c == '^')
        return 3;
    else if (c == '*' || c == '/')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    return 0;
}
int isoperator(char c)
{
    if ((c == '^' || c == '*' || c == '/' || c == '+' || c == '-'))
        return 1;
    return 0;
}

char *infixtopostfix(char *infix)
{
    n = (struct stack *)malloc(sizeof(struct stack));
    n->top = -1;
    n->size = 100;

    n->arr = (char *)malloc(sizeof(char));

    char *postfix = (char *)malloc((strlen(infix) + 1) * sizeof(char));
    int i = 0; // tracks infix
    int j = 0; // tracks postfix

    while (infix[i] != '\0')
    {
printf("%s",postfix);
        if (!isoperator(infix[i])&&infix[i]!='('&&infix[i]!=')')
        {
            postfix[j] = infix[i];
            i++;
            j++;
        }
        else if(infix[i]=='('){
            push(n, infix[i]);
                i++;
        }
         else if(infix[i]==')'){
   
          while(n->arr[n->top]!='('){
            char c=pop(n);
            postfix[j++]=c;
            printf("Popped :%c",c);
          }
         char c=pop(n);
          printf("Popped :%c",c);
          i++;
         }

        else
        {

            if (precedence(infix[i]) > precedence(n->arr[n->top]))
            {
                push(n, infix[i]);
                i++;
            }
            else
            {
                postfix[j] = pop(n);
                j++;
            }
        }
    }

    while (!isempty(n))
    {
        postfix[j] = pop(n);
        j++;
    }
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    int size;
    printf("Enter size :\n");
    scanf("%d", &size);
    char infix[size];
    printf("Enter data :\n");
    scanf("%s", infix);

    printf("Data is :\n");
    printf("%s\n", infix);
    printf("Post Fix expression is :\n");
    printf("%s", infixtopostfix(infix));
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct stack
{
    int top;
    char *arr;
    int size;

} *n, *temp;
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
int pop(struct stack *n)
{
    int x = n->arr[n->top];
    n->top--;
    return x;
}
void push(struct stack *s, char c)
{
    if (isfull(s))
        return;
    s->top++;
    s->arr[s->top] = c;
}
int postevaluate(char *str, int size)
{size=strlen(str);

    n = (struct stack *)malloc(sizeof(struct stack));
    n->arr = (char *)malloc(sizeof(char) * size);
    n->top = -1;
    for (int i = 0; i < size; ++i)
    {
        if (n->top != -1)
            printf("%d\n", n->arr[n->top]);
        if (str[i] == ' ')
            push(n,' ');
        if (str[i] == '+' || str[i] == '-' || str[i] == '*' || str[i] == '/')
        {
            switch (str[i])
            {
                int var1 = pop(n);
                int var2 = pop(n);
            case '+':
            {
                push(n, var2 + var1);
                break;
            }
            case '*':
            {
                push(n, var2 * var1);
                break;
            }
            case '/':
            {
                push(n, var2 / var1);
                break;
            }
            case '-':
            {
                push(n, var2 - var1);
                break;
            }
            }
        }
        else
        {
            push(n, str[i] - '0');
        }
    }
    return pop(n);
}

int main()
{
    int size;
    printf("Enter size of expression");
    
    char str[20];
    char ch;
    fgets(str,20,stdin);
    printf("%s", str);
    printf("%d", postevaluate(str, size));
}
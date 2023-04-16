#include <stdio.h>
#include <stdlib.h>
struct stack
{
    int data;
    struct stack *next;

} *s, *n, *top, *prev, *curr, *next;

int isfull(struct stack *top)
{
    n = (struct stack *)malloc(sizeof(struct stack));
    if (n == NULL)
        return 1;
    return 0;
}
int isempty(struct stack *top)
{

    if (top == NULL)
        return 1;
    return 0;
}

struct stack *push(struct stack **top)
{
    if (isfull(*top))
    {
        printf("FULL \n");
        return 0;
    }
    n = (struct stack *)malloc(sizeof(struct stack));
    scanf("%d", &n->data);
    n->next = *top;
    *top = n;
}

struct stack *rev(struct stack **top)
{
    curr = *top;
    prev = NULL;
    next = NULL;
    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    *top = prev;
}

int main()
{
    int size;
    printf("Enter size :\n");
    scanf("%d", &size);
    printf("Enter elements :\n");
    for (int i = 0; i < size; i++)
    {
        push(&top);
    }
    n = top;
    printf("Original :\n");
    while (n != NULL)
    {
        printf("%d\n", n->data);
        n = n->next;
    }
    rev(&top);
    n = top;
    printf("Reversed :\n");
    while (n != NULL)
    {
        printf("%d\n", n->data);
        n = n->next;
    }
}
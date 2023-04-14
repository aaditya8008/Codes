#include <stdio.h>
#include <stdlib.h>
struct queue
{
    int data;
    struct queue *next;
} *q, *n;
struct queue *f = NULL;
struct queue *r = NULL;
int isempty(struct queue *q)
{
    if (f == r)
    {
        printf("Empty \n");
        return 1;
    }
    return 0;
}
int isfull(struct queue *q)
{
    n = (struct queue *)malloc(sizeof(struct queue));
    if (n == NULL)
        return 1;
    return 0;
}
void enqueue(struct queue *q)
{
    if (isfull(q))
        return;
    n = (struct queue *)malloc(sizeof(struct queue));
    scanf("%d", &n->data);
    n->next = NULL;
    if (f == NULL)
    {
        r = n;
        f = n;
    }
    else
    {
        r->next = n;
        
        r = n;
    }
}
int dequeue(struct queue *q)
{
    int x;
    if (isempty(q))
        return 0;
    x = f->data;
    n = f;
    f = f->next;
    free(n);
    return x;
}
int main()
{

    int size;
    printf("Enter size :\n");
    scanf("%d", &size);

    printf("Enter elements :\n");
    for (int i = 0; i < size; i++)
        enqueue(q);
    printf("Elements  are :\n");
    n = f;
    while (n != NULL)
    {
        printf("enqueue :%d\n", n->data);
        n = n->next;
    }
    for (int i = 0; i < 3; i++)
        printf("dequeue :%d\n", dequeue(q));

    printf("Enter elements :\n");
    for (int i = 0; i < size; i++)
        enqueue(q);
    n = f;
    while (n != NULL)
    {
        printf("enqueue :%d\n", n->data);
        n = n->next;
    }
}
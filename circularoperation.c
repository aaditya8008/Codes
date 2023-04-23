#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *s, *n, *prev, *head, *tail, *headrev, *p, *c, *n, *ex;
void create(struct node **head, int i, int size)
{
    n = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &n->data);
    if (*head == NULL)
    {
        *head = n;
        n->prev = NULL;
        n->next = NULL;
        prev = *head;
    }
    else
    {
        n->prev = prev;
        prev->next = n;
        n->next = NULL;
        prev = n;
    }
    if (i == size - 1)
        n->next = *head;
}
void print(struct node *head)
{
    n = head;
    while (n->next != head)
    {
        printf("%d\n", n->data);
        n = n->next;
    }
    printf("%d\n", n->data);
}
void count(struct node *head)
{
    n = head;
    int count = 0;
    while (n->next != head)
    {
        count++;
        n = n->next;
    }
    count++;
    printf("Number of Nodes are = %d\n", count);
}
void insert(struct node **head)
{
    n = *head;
    int x;
    printf("Enter node :\n");
    scanf("%d", &x);
    ex = (struct node *)malloc(sizeof(struct node));
    printf("Enter new node:\n");
    scanf("%d", &ex->data);
    while (n->data != x)
    {
        n = n->next;
    }

    ex->next = n->next;
    ex->prev = n;
    n->next->prev = ex;
    n->next = ex;
}
void insertbeg(struct node **head)
{
    n = *head;
    int x;

    ex = (struct node *)malloc(sizeof(struct node));
    printf("Enter new node:\n");
    scanf("%d", &ex->data);
    while (n->next != *head)
    {
        n = n->next;
    }

    ex->next = *head;
    ex->prev = n;
    n->next->prev = ex;
    n->next = ex;
    *head = ex;
}
void append(struct node **head)
{
    n = *head;
    int x;

    ex = (struct node *)malloc(sizeof(struct node));
    printf("Enter new node:\n");
    scanf("%d", &ex->data);
    while (n->next != *head)
    {
        n = n->next;
    }

    ex->next = *head;
    ex->prev = n;
    n->next->prev = ex;
    n->next = ex;
}
void del(struct node **head)
{
    n = *head;
    int x;
    printf("Enter node to delete:\n");
    scanf("%d", &x);

    while (n->data != x)
    {
        n = n->next;
    }
    ex=n;
    n->next->prev = n->prev;
    n->prev->next = n->next;
    free(ex);
}

int main()
{
    int size;

    printf("Enter size :\n");
    scanf("%d", &size);
    printf("Enter data :\n");
    head = NULL;

    for (int i = 0; i < size; i++)
    {
        create(&head, i, size);
    }
    n = head;
    printf("Data :\n");
    print(head);
    count(head);

    insert(&head);
    printf("Inserted Data :\n");
    print(head);
    count(head);

    del(&head);
    printf("Deleted Data :\n");
    print(head);
    count(head);

    insertbeg(&head);
    printf("Inserted at start  :\n");
    print(head);
    count(head);

    append(&head);
    printf("Appended at last  :\n");
    print(head);
    count(head);
}

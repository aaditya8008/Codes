#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
} *s, *n, *prev, *head, *tail, *headrev, *p, *c, *n, *ex,*d;

int check(int arr[],int size,int x){
   
for(int i=0;i<size;i++){
 
if(arr[i]==x){
return 1;

}

}
return 0;
}


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
struct node* deldup(struct node *head,int size)
{
    ex= head;
    
    int j=0;
    int arr[size];
    
    while (ex->next!= head){
        
 if(check(arr,size,ex->data)){
d=ex;
ex->next->prev=ex->prev;
ex->prev->next=ex->next;
ex=ex->prev;
free(d);
 } 
 else{ 
arr[j]=ex->data;
j++;
 }

 ex= ex->next;
    }
    if(check(arr,size,ex->data)){
d=ex;
ex->next->prev=ex->prev;
ex->prev->next=ex->next;
ex=ex->prev;
free(d);
 } 
 else{ 
arr[j]=ex->data;
j++;
 }
   
return head;
    
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
int count(struct node *head)
{
    n = head;
    int count = 0;
    while (n->next != head)
    {
        count++;
        n = n->next;
    }
    count++;
   
    return count;
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

     printf("Duplicates deleted :\n");
    head=deldup(head,size);
    print(head);
    count(head);
}

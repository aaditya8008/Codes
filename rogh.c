#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head,*n,*extra,*tail,*curr,*prev,*next;
struct node *create(struct node *head,int i,int size){
    n=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&n->data);
    if(i==0){
        head=n;
        extra=n;
        n->prev=NULL;
        n->next=NULL;
    }
    else{
        extra->next=n;
        n->next=NULL;
        n->prev=extra;
        extra=n;
        if(i=size-1)
        tail=n;
    }
    return head;
}
void print(struct node* head){
    n=head;
    printf("From head :\n");
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
    }
   n=tail;
    printf("From tail:\n");
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->prev;
    }
    
}
void *insert(struct node**head){
    int x;
    printf("Enter add +1 node:\n");
    scanf("%d",&x);
    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter new node:\n");
    scanf("%d",&n->data);
    curr=*head;
    next=curr->next;
    while(curr->data!=x&&curr!=NULL){
        next=next->next;
        curr=curr->next;
    }
       n->prev=curr;
       curr->next=n;
       next->prev=n;
       n->next=next;
       n=*head;
    printf("Entered after node :\n");
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
    }
    
    
    
    
}
void *insertbeg(struct node**head){
    
    n=(struct node*)malloc(sizeof(struct node));
    printf("Enter big node:\n");
    scanf("%d",&n->data);
    n->next=*head;
    (*head)->prev=n;
    n->prev=NULL;
    *head=n;
}
void del(struct node **head){
    int x;
    printf("Enter delete  -1 node:\n");
    scanf("%d",&x);
    n=*head;
    curr=*head;
    while(curr->next->data!=x){
        prev=curr;
        curr=curr->next;
    }
    if(curr->next->data==x){
        prev->next=curr->next;
        free(curr);
        
    }
    else{
        printf("No node\n");
    }
    
    
}
int main()
{
    int x;
    printf("Enter size:\n");
    scanf("%d",&x);
    printf("Enter Data:\n");
    for(int i=0;i<x;i++){
        head=create(head,i,x);
    }
    print(head);
    del(&head);
    n=head;
    printf("Deleted before node :\n");
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
    }
    insertbeg(&head);
    n=head;
    printf("Inserted at start :\n");
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
    }
    insert (&head);
    
    return 0;
}
#include<stdio.h>
#include<stdlib.h>
struct node
{
  
int data;
   
struct node *next;
   
struct node *prev;
 
} *head, *n, *extra, *head1, *head2, *curr, *prev, *next, *ex;
int count=0;
void print(struct node *head){
    n=head;
    while(n->next!=head){
        printf("%d\n",n->data);
        n=n->next;
    }
    printf("%d\n",n->data);
    
}
void insert(struct node **head,int *sum){
    
    n=*head;
    while(n->next!=*head){
        *sum+=n->data;
        n=n->next;
    }
    *sum+=n->data;
    
}

void create(struct node **head,int i,int size){
    
    
    n=(struct node*)malloc(sizeof(struct node));
    count++;
    scanf("%d",&n->data);
    if(*head==NULL){
       *head=n;
         prev=n;
    }
    n->next=NULL;
    prev->next=n;
    prev=n;
    if(i==size-1)
    n->next=*head;
    
}
int main(){
    int x;
    head=NULL;
    printf("Enter size:\n");
    scanf("%d",&x);
    printf("Enter data:\n");
    for(int i=0;i<x;i++){
        create(&head,i,x);
    }
    printf("Original data:\n");
    print(head);
    int sum=0;
    insert(&head,&sum);
    
    printf("Sum of nodes : %d\n",sum);

}



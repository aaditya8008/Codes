#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*s,*n,*head1,*head2,*head,*prev;
void create(struct node **head){
n=(struct node *)malloc(sizeof(struct node));
scanf("%d",&n->data);
if(*head==NULL){
*head=n;
prev=*head;
n->next=NULL;
}
else{
prev->next=n;
n->next=NULL;
prev=n;
}
}
void negdel(struct node **head){
    
    n=*head;
    prev=NULL;
    while(n!=NULL){
      
if(n->data<0){
    if(prev==NULL){
        head1=n;
        n=n->next;
        *head=n;
        free(head1);
    }
    else{
        head1=n;
prev->next=n->next;
n=n->next;
free(head1);

    }

    }
    else{
prev=n;
n=n->next;}

    }
}


void print(struct node * head){
    n=head;
    printf("Data :\n");
    while(n!=NULL){
        printf("%d\n",n->data);
        n=n->next;
    }
}


int main(){
int n;
printf("ENTER SIZE:\n");
scanf("%d",&n);
printf("Enter LL:\n");
for(int i=0;i<n;i++)
create(&head);
printf("LL :\n");
print(head);
negdel(&head);
print(head);

}
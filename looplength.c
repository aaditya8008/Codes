#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*s,*n,*head1,*head2,*head,*prev,*prev1,*prev2,*slow,*fast;
void create(struct node **head){
n=(struct node *)malloc(sizeof(struct node));
scanf("%d",&n->data);
if(*head==NULL){
*head=n;
prev=*head;
n->next=prev;
}
else{
prev->next=n;
n->next=prev;
prev=n;
}
}
int loopexist(struct node* head){
slow=head;
fast=head;
while(fast!=NULL&&fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(slow==fast)
    return 1;
}
return 0;
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
int x;
printf("ENTER SIZE:\n");
scanf("%d",&x);
printf("Enter LL:\n");
for(int i=0;i<x;i++)
create(&head);
printf("LL:\n");

if(loopexist(head)){
    printf("Loop exists \n");
    slow=slow->next;;
    int count =0;
    while(slow!=fast){
        count++;
        slow=slow->next;
        
    }
    printf("Length is : %d\n",count);
}
else
printf("No Loop Exists\n");

}
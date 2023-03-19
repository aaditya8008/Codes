#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*n,*prev,*head,*temp,*new;

//insertion at start
struct node *insert(struct node *head){  
    temp=head;     
new=(struct node *)malloc(sizeof(struct node));
printf("Enter new Element :\n");
scanf("%d",&new->data);
new->next=temp;
head=new;
return head;

}
//creation
struct node*create(struct node *n,int num,int i){
n=(struct node*)malloc(sizeof(struct node));
scanf("%d",&n->data);
if(i==0){
    head=n;
    prev=head;
}
prev->next=n;
n->next=NULL;
prev=n;
return head;
}

int main(){
int num;
printf("Enter size of node :\n");
scanf("%d",&num);
printf("Enter Data :\n");
for(int i=0;i<num;i++){
    create(n,num,i);
}

head=insert(head);        //insertion call,head changed
temp=head;
printf("Data is :\n");
while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
}

}
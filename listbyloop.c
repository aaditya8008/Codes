#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*n,*prev,*head,*temp;

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
temp=head;
printf("Data is :\n");
while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
}

}
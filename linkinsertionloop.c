#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*head,*temp,*n;


struct node *input(struct node*n,int num){
    int i=0;
while(i!=num){
n=(struct node*)malloc(sizeof(struct node));
if(i==0){
head=n;
scanf("%d",&head->data);
temp=head;
i++;
}
else{
scanf("%d",&n->data);
temp->next=n;
temp=n;
i++;
}

}
n->next=NULL;


return head;
}



int main(){
    printf("Enter number of nodes :\n");
int num;
scanf("%d",&num);
input(n,num);
while(head!=NULL){
    printf("%d\n",head->data);
    head=head->next;
}

}
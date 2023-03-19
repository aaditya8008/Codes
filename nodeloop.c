#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*temp,*head,*n;

int main(){
int num,i=0;
scanf("%d",&num);
while(num){
n=(struct node*)malloc(sizeof(struct node));
if(i==0){
        head=n;
        scanf("%d",&head->data);
        temp=head;
    }
    else{
    scanf("%d",&n->data);
    temp->next=n;
    temp=n;
    }i++;
    printf("Want new node :\n");
scanf("%d",&num);
}
n->next=NULL;
while(head!=NULL){
    printf("%d\n",head->data);
    head=head->next;
}

}
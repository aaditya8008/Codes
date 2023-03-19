#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*next;
}*n,*temp,*head;

int main(){
    int num;
    printf("Enter number of nodes :\n");
    scanf("%d",&num);
    n=(struct node*)malloc(sizeof(struct node));
    for(int i=0;i<num;i++){
    if(i==0){
        head=n;
        scanf("%d",&head->data);
        temp=head;
    }
    else{
    n=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&n->data);
     temp->next=n;
     temp=n;

    }

    }
    
    for(int i=0;i<num;i++){
        printf("%d\n",head->data);
        head=head->next;
    }


}
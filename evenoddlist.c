#include<stdio.h>
#include<stdlib.h>
struct node{
int num;
struct node *next;         
}*n1,*n2,*n3,*n4,*n5,*n;
int evenodd(struct node*head){
    n=head;
    while(n&&n->next){
        n=n->next->next;}
        if(n){
            printf("Odd\n");
            return 0;
        }
        else{
            printf("Even\n");
        return 1;
        }
}

int main(){
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
n4=(struct node*)malloc(sizeof(struct node));
n5=(struct node*)malloc(sizeof(struct node));
n1->next=n2;
n2->next=n3;
n3->next=n4;
n4->next=n5;
n5->next=NULL;
evenodd(n1);
}


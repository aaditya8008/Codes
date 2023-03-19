#include<stdio.h>
#include<stdlib.h>
struct node{
int rollno;
struct node*move;
}*next,*current,*prev,*n1,*n2,*n3;
struct node*rev(struct node*head){
    
prev=NULL;
current=head;
next=NULL;
while(current!=NULL){
    next=current->move;
    current->move=prev;
    prev=current;
    current=next;
    
    printf("running.....!\n");
}
head=prev;
return head;

}

int main(){
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
printf("Enter Data :\n");
scanf("%d%d%d",&n1->rollno,&n2->rollno,&n3->rollno);
n1->move=n2;
n2->move=n3;
n3->move=NULL;
printf("Data is :\n");
struct node *n=n1;
while(n!=NULL){
printf("Num : %d\n",n->rollno);
n=n->move;
}
n=rev(n1);
printf("Data is Reversed :\n");

while(n!=NULL){
printf("Num : %d\n",n->rollno);
n=n->move;
}

}
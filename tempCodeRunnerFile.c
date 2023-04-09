#include<stdio.h>
#include<stdlib.h>
struct node{
int num;
struct node *next;         
}*n1,*n2,*n3,*n4,*p,*q;
int cycle(struct node *head){
    int exist=0,count;
p=q=head;
while(q&&q->next){
p=p->next;
q=q->next->next;
if(q==p){
    printf("Cycle\n");
    exist=0;
    break;
}
count=1;
}if(1){

while(q&&q->next){
    q=q->next;
    if(p==q){
        break;
    }
    
    count++;
    
}
printf("count=%d",count);
}
else{
    printf("No loop exists\n");
return 0;}
return 1;
}
int main(){
n1=(struct node*)malloc(sizeof(struct node));
n2=(struct node*)malloc(sizeof(struct node));
n3=(struct node*)malloc(sizeof(struct node));
n4=(struct node*)malloc(sizeof(struct node));
printf("Enter Data :\n");
scanf("%d%d%d%d",&n1->num,&n2->num,&n3->num,&n4->num);
n1->next=n2;
n2->next=n3;
n3->next=n4;
n4->next=n2;
cycle(n1);
}


#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
struct node *prev;
}*s,*n,*prev,*head,*tail,*headrev,*p,*c,*n;

void create(struct node **head,int i,int size){
n=(struct node*)malloc(sizeof(struct node));
scanf("%d",&n->data);
if(*head==NULL){
    *head=n;
    n->prev=NULL;
    n->next=NULL;
    prev=*head;
}
else{
n->prev=prev;
prev->next=n;
n->next=NULL;
prev=n;
}
if(i==size-1)
tail=n;

}
struct node * rev(struct node*p,struct node*c,struct node*n){
    if(c==NULL){
        head=p;
        return head;
    }
n=c->next;
c->prev=n;
c->next=p;
p=c;
c=n;

rev(p,c,n);


}

int main(){
int size;

printf("Enter size :\n");
scanf("%d",&size);
printf("Enter data :\n");
head=NULL;

for(int i=0;i<size;i++){
    create(&head,i,size);
}
n=head;
printf("Data :\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}
p=n=NULL;
c=head;
head=rev(p,c,n);
n=head;
printf("Reversed Data :\n");
while(n!=NULL){
    printf("%d\n",n->data);
    n=n->next;
}
}

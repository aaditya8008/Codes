void print(struct node *n){
    

while(n!=NULL){
   
printf("%s\t%d\n",n->name,n->rollno);
 n=n->next;
}
}
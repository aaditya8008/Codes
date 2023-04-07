int isempty(struct stack*s){
    if(s->top==-1){
        return 1;
    }
    else{
        return 0;
    }
    

}
int isfull(struct stack*s){
        if(s->top==s->size-1)
        return 1;
        else
        return 0;

    }
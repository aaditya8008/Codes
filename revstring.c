#include<stdio.h>
void rec(char *str,int i,int j){
    
if(i<j){
    
char c=*(str+i);
*(str+i)=*(str+j);
*(str+j)=c;
rec(str,i+1,j-1);
}
else
return ;

}
int main(){
    int n;
    printf("Enter size :\n");
    scanf("%d",&n);
    printf("Enter String:\n");
    char str[n];
    scanf("%s",str);
    
    rec(str,0,n-1);
    printf("%s",str);
}
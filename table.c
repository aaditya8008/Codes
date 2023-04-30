#include<stdio.h>
int rec(int n,int i){
if(i){
    
rec(n,i-1);
printf("%d * %d=%d\n",n,i,n*i);
}


else
return 0;

}
int main(){
    int n;
    printf("Enter Number :\n");
    scanf("%d",&n);
    int x=10;
    rec(n,10);
    
}
#include<stdio.h>
int rec(int n,int i){
if(n<1)
return  1;
else if(n%i==0){
printf("%d ",i);
return (rec(n/i,i));

}
else
return rec(n,i+1);

}
int main(){
    int n;
    printf("Enter Number :\n");
    scanf("%d",&n);
    int x=10;
    rec(n,2);
    
}
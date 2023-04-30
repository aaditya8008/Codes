#include<stdio.h>
float rec(int n){
    int rem=n%10;
if(n){
return rem+rec(n/10);

}
else
return 0;
}
int main(){
    int n;
    printf("Enter Number :\n");
    scanf("%d",&n);
    float sum=0;
   
    sum+=rec(n);
   
    printf("%.2f",sum);
}
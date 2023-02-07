#include<stdio.h>
int main(){
    int n,evensum=0,oddsum=0,i=1;
    scanf("%d",&n);
    while(i<=n){
     if(i%2==0){
        evensum=evensum+i;
     }
     else if(i%2!=0){
        oddsum=oddsum+i;
     }
     i++;

    }
    printf("Sum of odd numbers: %d\n",oddsum);
    printf("Sum of even numbers: %d\n",evensum);
        
    return 0;}
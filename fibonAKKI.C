#include<stdio.h>
int rec(int n){
if(n==0||n==1)
return 1;
else
return rec(n-1)+rec(n-2);

}
int main(){
    int n;
    printf("Enter Number :\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    printf("%d ",rec(i));
}
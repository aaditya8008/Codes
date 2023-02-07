#include<stdio.h>
int main(){
int n,count=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
for(int j=1;j<=n;j++){
for(int c=1;c<=n;c++){
    count++;
    printf("%d%d%d , ",i,j,c);

}}
}
return 0;}

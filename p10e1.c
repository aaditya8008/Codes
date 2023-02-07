#include<stdio.h>
int main(){
int n=4;
int m=4,k=0;
for(int i=1;i<=n;i++){
    n=4;
    for(int j=1;j<=i;j++){
        printf("%d",j);
    }printf("\n");
}printf("\n");

for(int i=n;i>=1;i--){
    
    for(int j=n;j>n-i;j--){
        printf("%d",m);
        m=m-1;
        
    }k++;
    m=4-k;
    
    
    printf("\n");
}
return 0;
}
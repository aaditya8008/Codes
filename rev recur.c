#include<stdio.h>
#include<math.h>
int rev(int n);
int main(){int n;
scanf("%d",&n);

printf("%d",rev(n));

return 0;
}
int rev(int n){
  int count=log10(n);
    if(n==0)
    return 0;
    else if(n==1)
 return 1; 
 else
 
 return (n%10)*pow(10,count)+rev(n/10);
 
}
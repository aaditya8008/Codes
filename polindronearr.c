#include<stdio.h>

    int reverse(int *ptr,int n){
int s=0,e=n-1,temp;
while(s<e){
if(*(ptr+s)!=*(ptr+e))
return 0;
s++;e--;
}

return 1;
}
int main(){
int n;
printf("Enter size:\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int *ptr=arr;
printf("Result\n");
printf("%d\n",reverse(ptr,n));
}
#include<stdio.h>
int main(){
    int reverse(int *ptr,int n){
int s=0,e=n-1,temp;
while(s<e){
temp=*(ptr+s);
*(ptr+s)=*(ptr+e);
*(ptr+e)=temp;
s++;e--;
}

return *ptr;
}
int n;
printf("Enter size:\n");
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int *ptr=arr;
reverse(ptr,n);

for(int i=0;i<n;i++){
    printf("%d\n",*(ptr+i));
}
}
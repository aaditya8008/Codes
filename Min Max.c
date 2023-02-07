#include<stdio.h>

int main(){int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);}
int c;
for(int i=0;i<n;i++){
for(int j=0;j<n;j++){
if(arr[i]>arr[j]){
c=arr[i];
arr[i]=arr[j];
arr[j]=c;

}

}

}
printf("Max = %d\nMin = %d",arr[0],arr[n-1]);

}
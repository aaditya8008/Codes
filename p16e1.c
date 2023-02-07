#include<stdio.h>
int main(){int n,max;
scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        
        if(arr[i]<arr[j]){
        max=arr[j];
        arr[j]=arr[i];
        arr[i]=max;}
    }
}
for(int i=0;i<n;i++){
    printf("%d,",arr[i]);
}
return 0;}
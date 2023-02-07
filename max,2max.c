#include<stdio.h>

int mx(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
mx(arr,n);

return 0;
}
int mx(int arr[],int n){
    int max;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        
        if(arr[i]<arr[j]){
        max=arr[j];
        arr[j]=arr[i];
        arr[i]=max;}
    }
}


    printf("First max =%d\n Second min=%d\n,",arr[n-1],arr[n-2]);



}
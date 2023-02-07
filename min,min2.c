#include<stdio.h>

int mn(int arr[],int n);
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
mn(arr,n);

return 0;
}
int mn(int arr[],int n){
int min;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(arr[i]>arr[j]){
        min=arr[j];
        arr[j]=arr[i];
        arr[i]=min;

        }
    }
}
printf("%d\n%d",arr[0],arr[1]);
}
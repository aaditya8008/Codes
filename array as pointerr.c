#include<stdio.h>
int conv(int *arr,int n){
    printf("Enter elements again\n");
for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    };


}
int main(){int n,max,min;
scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int *ptr=arr;
    
    conv(&arr[0],n);
    for(int c=0;c<n;c++){
      
            printf("%d",arr[c]);
        
       }

    return 0;}
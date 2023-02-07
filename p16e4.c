#include<stdio.h>
int main(){int n,max,min;
scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int c=0;c<n;c++){
       for(int k=0;k<n;k++){
        if(arr[c]==arr[k]&&k!=c){
            printf("Element %d is duplicate of element %d.\n",k,c);
        }
       }
    }return 0;}
#include<stdio.h>
int main(){int n;
scanf("%d",&n);
    int arr[n];
    int *ptr=arr;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        printf("%u\t%d\n",ptr+i,*(ptr+i));
    }
    

}
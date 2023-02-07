#include<stdio.h>
int main(){int n,max,min;
scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }max= 0;
    int i=0;int j=1;
    for(int c=1;c<n;c++){
        if(arr[i]<arr[j]&&arr[j]>max)
        max=arr[j];
        else if(arr[i]>arr[j]&&arr[i]>max)
        max=arr[i];
        i=j;
        j++;

    }printf("Max=%d\n",max);
    
    min= arr[0];
    i=0;
    j=1;
    for(int c=1;c<n;c++){
        if(arr[i]>arr[j]&&arr[j]<min)
        min=arr[j];
        else if(arr[i]<arr[j]&&arr[i]<min)
        min=arr[i];
        i=j;
        j++;

    }printf("Min=%d\n",min);
}
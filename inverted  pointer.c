#include<stdio.h>
void array(int *arr,int k,int *arr2){
    int j=k-1;
for(int i=0;i<k;i++){
    arr2[i]=arr[j];
    j--;
}

}
int main(){int n;
scanf("%d",&n);
printf("Enter No. of elements\n");
int arr[n],arr2[n];
for(int i=0;i!=n;i++){
    scanf("%d\n",&arr[i]);
}
int *p=arr;
array(p,n,&arr2[0]);
for(int i=0;i<n;i++){
    printf("%d\n",arr2[i]);
}
return 0;
}
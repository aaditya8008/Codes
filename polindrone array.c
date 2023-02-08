#include<stdio.h>
int  array(int *arr,int *arr2,int n){
    int s=0,e=n-1;
    while(s<e){
        arr2[s]=arr[s];
    if(arr[s++]!=arr[e--]){
        printf("Not a polindrone\n");
        return 0;
    }
    
     
    }
printf("Polindrone\n");
return 0;

}
int main(){
    int n;
    scanf("%d",&n);
    printf("Enter No. of elements\n");
int arr[n],arr2[n];
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int *p=arr,*g=arr2;
array(p,g,n);
for(int i=0;i<n/2;i++){
    printf("%d\n",arr2[i]);
}


}
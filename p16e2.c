#include<stdio.h>
int main(){int submission=0;

    int arr[10];
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<10;i++){
    submission=((arr[i])*(arr[i]))+submission;
}

    printf("%d\n",submission);

return 0;}
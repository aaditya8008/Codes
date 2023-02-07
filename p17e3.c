#include<stdio.h>
int main(){int r=10,c=10;

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        printf("\n");
        for(int j=0;j<r;j++){
            printf("%d ",arr[i][j]);
        }
    }
}
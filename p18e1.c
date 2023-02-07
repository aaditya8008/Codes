#include<stdio.h>
int main(){int r=2,c=2;

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int arr2[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr2[i][j]);
        }
    }
    int sub[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            sub[i][j]=arr[i][j]-arr2[i][j];
        }
    }int add[r][c];
for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            add[i][j]=arr[i][j]+arr2[i][j];
        }
    }printf("\nsubtraction");
    for(int i=0;i<r;i++){
        printf("\n");
        for(int j=0;j<r;j++){
            printf("%d ",sub[i][j]);
        }
    }printf("\n");
printf("\naadition");
    for(int i=0;i<r;i++){
        printf("\n");
        for(int j=0;j<r;j++){
            printf("%d ",add[i][j]);
        }
    }

}
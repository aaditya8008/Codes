#include<stdio.h>
int main(){int r=3,c=3;

    int arr[r][c];
    printf("Enter age:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }printf("Enter weight:\n");
    int arr2[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr2[i][j]);
        }
    }int count=0;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if((arr[i][j])>18&&(arr[i][j])<25&&(arr2[i][j])>=45&&(arr2[i][j])<=60)
            count++;
        }
    }
    printf("Number of Men satisfied condition:%d\n",count);
}
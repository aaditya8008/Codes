#include<stdio.h>
int main(){int r=3,c=3;

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
    
    int mul[r][c];
    for(int i=0;i<r;i++){k++;
    
        for(int j=0;j<r;j++){
            
            mul[i][j]=arr[i][j]*arr2[i][j];
        
        }
    }printf("\nMultiplication:");
    for(int i=0;i<r;i++){
        printf("\n");
        for(int j=0;j<r;j++){
            printf("%d ",mul[i][j]);
        }
    }printf("\n");}
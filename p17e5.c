#include<stdio.h>
int main(){int r=10,c=10;

    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            scanf("%d",&arr[i][j]);
        }
    }int count;
    for(int i=(r-1);i>=0;i--){count=0;
        printf("\n");
 
        for(int j=(c-1);j>=0;j--){
            
            printf("%d ",arr[j][i]);
            count++;
        }
    }
}
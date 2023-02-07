#include<stdio.h>
int main(){int r,c;
scanf("%d%d",&r,&c);
    int code[r][c];
    
    printf("Enter code numbrs:\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&code[i][j]);
        }
    }    printf("Enter balance:\n");
    int bal[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&bal[i][j]);
        }
    }printf("S.no    Code no.    balance\n");
    int count=1;
    for(int i=0;i<r;i++){
        
        for(int j=0;j<r;j++){
            printf("%d          %d           %d\n",count,code[i][j],bal[i][j]);
            ++count;
        }
    }
}
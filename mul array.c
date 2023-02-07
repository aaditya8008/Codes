#include<stdio.h>

int main(){
    int r,c;
    scanf("%d%d",&r,&c);
    int arr[r][c];
    int arr2[r][c];
printf("Enter first elements:\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
scanf("%d",&arr[i][j]);
    }
}
printf("Enter second elements:\n");
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){
scanf("%d",&arr2[i][j]);
    }
}
int mul[r][c];
for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){


mul[i][j]=0;
    
    }
}

for(int i=0;i<r;i++){
    for(int j=0;j<c;j++){

for(int k=0;k<c;k++){
mul[i][j]+=arr[i][k]*arr2[k][j];}
    
    }
}

 

for(int i=0;i<r;i++){
    printf("\n");
    for(int j=0;j<c;j++){
printf("%d ",mul[i][j]);
    }
}
return 0;
}


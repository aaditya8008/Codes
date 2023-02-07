#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ftr;
    int n,j=0;
    printf("Characters wanted to reverse\n");
    scanf("%d",&n);
    char str[n];
    ftr=fopen("name.txt","r");
    if(ftr==NULL){
        printf("Cant access file1\n");
        exit(0);
    }
    char c=fgetc(ftr);
    for(int i=0;i<n;i++){
        str[i]=c;
        c=fgetc(ftr);
        j++;
    }str[j]='\0';
    printf("%s",str);
    ftr=fopen("name.txt","w");
    
    for(int i=n-1;i>=0;i--){
        c=str[i];
    fprintf(ftr,"%c",c);}


    
    fclose(ftr);
    
    
}
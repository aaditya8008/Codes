#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *ftr,*ftr1;
    ftr=fopen("name.txt","r");
    if(ftr==NULL){
        printf("Cant access file1\n");
        exit(0);
    }

    ftr1=fopen("tt.txt","w");
if(ftr1==NULL){
        printf("Cant access file2\n");
        exit(0);
    }

    char c=fgetc(ftr);
     
    while(c!=EOF){
    fprintf(ftr1,"%c",c);
    c=fgetc(ftr);
    }
    fclose(ftr);
    fclose(ftr1);
}
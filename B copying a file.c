#include<stdio.h>
int main(){
    FILE *ftr,*ftr1;
    ftr=fopen("name.txt","r");
    ftr1=fopen("tt.txt","w");
    char c=fgetc(ftr);
     
    while(c!=EOF){
    fprintf(ftr1,"%c",c);
    c=fgetc(ftr);
    }
    fclose(ftr);
    fclose(ftr1);
}
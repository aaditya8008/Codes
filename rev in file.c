#include<stdio.h>
int main(){
    FILE *ftr,*ftr1;
    int n,j=0;
    scanf("%d",&n);
    char str[n];
    ftr=fopen("name.txt","r");
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
#include<stdio.h>
#include<string.h>
int main(){
    int n,i=0,j=1;
    char str[5][10];
    printf("Enter first string\n");
    for( i=0;i<5;i++){

    
scanf("%s",str[i]);
    
}
    char fine[20];
   
for(i=1; i<5; i++)
   {
      for(j=1; j<5; j++)
      {
        if(strcmp(str[j-1],str[j])>0){
            strcpy(fine,str[j-1]);
            strcpy(str[j-1],str[j]);
            strcpy(str[j],fine);
        }
      }}
    for( i=0;i<5;i++){
    
printf("%s\n",str[i]);
    
}
    
        

}

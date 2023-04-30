#include<stdio.h>
int rec(char *str,int i,int j,int n,char c){
    int k;
    if(j<n){
   if(*(str+i)==*(str+j)) {
    for( k=i;k<n;k++)
    *(str+k)=*(str+k+1);
    n--;
k--;
   }
   rec(str,i+1,j+1,n,c);
    }
}
int main(){
    int n;
    printf("Enter size :\n");
    scanf("%d",&n);
    printf("Enter String:\n");
    char str[n];
    scanf("%s",str);
    printf("Enter character to be removed :\n");
    char c;
    scanf("%s",&c);
   rec(str,0,1,n,c);
   printf("%s",str);
}
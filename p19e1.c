#include <stdio.h>

void displayString(char s[]);

int main(void) {
 
  char str1[100];
  
    scanf("%s",str1);

   displayString(str1);
 
  
  
  return 0;
}

void displayString(char str1[]) {
    int n;
    char str2[100];
    
    printf("Enter limit:\n");
    scanf("%d",&n);
    int j=0;
    for(int i=0;i<n;i++){
        str2[i]=str1[i];
        j++;
    }str2[j]='\0';
    
         printf("string =%s", str2);
    
    
    
  }

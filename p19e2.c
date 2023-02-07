#include <stdio.h>

void displayString(char str[],char str2[],int n);

int main(void) {char str[100];
scanf("%s",str);
int n;
printf("Enter Limit:\n");
scanf("%d",&n);
char str2[100];
displayString(str,str2,n);
 
  
  
  return 0;
}

void displayString(char str[],char str2[],int n) {
    int j=0,i=0;
    while(str[i]!=0&&i<n){
        str2[i]=str[i];
        i++;
        j++;
    }str2[j]='\0';
    printf("%s",str2);

    char str3[100];
    printf("Enter second str:\n");
    scanf("%s",str3);
    i=0;
    while (str3[i] != '\0') {
        str2[j] = str3[i];
        i++;
        j++;
    }
    str2[j] = '\0';

    printf("string :%s",str2);

    
    
    
  }

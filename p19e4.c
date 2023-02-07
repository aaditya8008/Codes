#include <stdio.h>

void displayString(char str[]);

int main(void) {char str[100];
printf("Enter string:\n");
scanf("%s",str);

displayString(str);
 
  
  
  return 0;
}

void displayString(char str[]) {
   char c;
   scanf("%s",&c);
   for(int i=0;str[i]!='\0';i++){
    str[i];
    if(str[i]==c){
        str[i]='s';
    }

   }printf("%s",str);

    
    
    
  }

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

  char str[100] ;
  char s[100];
  char *ptr, *ptr1 ;
  char letter ;

  printf("\nEnter string : ");
  scanf("%[^\n]%*c", str);


  printf("\nEnter Letter that you want to delete : ");
  scanf("%c",&letter);

  printf("\nString Entered : %s\n",str);
  printf("\nLetter wants to delete : %c\n",letter);

  

  ptr = str;
  ptr1 = s;
  int j = 0;

  for (int i=0; str[i]!='\0'; i++){
    if ( str[i] != letter ){
      *(ptr1+j) = *(ptr+i);
      j++;
    }
  }

  printf("\nNew string after deleting the letter %c : %s\n", letter, s);

  return 0;
}
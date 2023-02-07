#include<stdio.h>
int main(){int count=0,count1=0;
    char str[10];
    gets(str);
    for(int i=0;str[i]!='\0';i++){
if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
count++;
else
count1++;
    }
    printf("Voweles=%d\nConsonents=%d",count,count1);

}
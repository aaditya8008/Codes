#include<stdio.h>
int main(){int n;
scanf("%d",&n);
char str[n];
scanf("%s",str);
int count=0;
for(int i=0;str[i]!='\0';i++){
    count++;
}
printf("%d",count);

}



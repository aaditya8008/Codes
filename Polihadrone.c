#include<stdio.h>
int main(){int n,count;
scanf("%d",&n);
char str[n];
int len=0;
scanf("%s",str);
for(int i=0;str[i]!='\0';i++){
len++;

}
printf("Length is:%d\n",len);
int s=0,e=len-1;
while(e>s){
if(str[s++]!=str[e--]){
printf("Not polindrona\n");
return 0;
}
}
printf("Polihadrone\n");
return 0;
}
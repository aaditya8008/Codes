#include<stdio.h>
int main(){
    char c;
    scanf("%c",&c);
    int a,b,op;
    scanf("%d%d",&a,&b);
    switch(c){
       case 'a':
       op=a+b;
       printf("%d\n",op);
       break;
       case 's':
       op=a-b;
       printf("%d\n",op);
       break;
       case 'm':
       op=a*b;
       printf("%d\n",op);
       break;
       case 'd':
       op=a/b;
       printf("%d\n",op);
       break;
       case 'r':
       op=a%b;
       printf("%d\n",op);
       break;
       case 'w':
       if(a>b)
       printf("a is larger\n");
       else if(a<b)
       printf("b is larger\n");
       else
       printf("Equal\n");
       break;

    }return 0;}
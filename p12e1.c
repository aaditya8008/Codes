#include<stdio.h>
int pro(float f,int i){
    return f*i;
}

int main()
{
    float f;
    int i;
    scanf("%f",&f);
    scanf("%d",&i);
    printf("%d",pro(f,i));
    return 0;
}
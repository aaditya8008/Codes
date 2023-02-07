#include<stdio.h>
#define freq(int n){int fact=1;\
for(int i=1;i<=n;i++){\
fact=fact*i;\
printf("Frequency=%d",&fact);\
}


}

int main(){char n;
printf("Enter n\n");
scanf("%d",&n);
freq(n);




}
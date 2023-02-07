#include <stdio.h>
#define freq(n){\
    int fact=1;\
    for(int i=1;i<=n;i++){\
        fact=fact*i;\
    }\
    printf("Frequency=%d\n",fact);\
    }
int main()
{
    int n;
    scanf("%d",&n);
    freq(n);

    return 0;
}

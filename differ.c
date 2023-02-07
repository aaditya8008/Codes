#include<stdio.h>
 
int main()
{
    int arr[] = { 3, 5, 6, 7, 9 };
    int *p = arr;
    int (*ptr)[5] = &arr;
     
    printf("%d\n%d",*p,*(ptr));
    return 0;
}
//1=pointsto 0 element , 2=points to whole array
//3, 6422276
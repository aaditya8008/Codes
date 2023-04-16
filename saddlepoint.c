#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int arr[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int minrow = -1;

    for (int i = 0; i < 3; i++)
    {
        minrow = arr[i][0];
        int colind = 0;
        for (int j = 1; j < 3; j++)
        {
            if (minrow > arr[i][j])
            {
                minrow = arr[i][j];
                colind = j;
            }
        }
        for (int j = 0; j < 3; j++)
        {
            if (minrow < arr[j][colind])
            {
                minrow = -1;
                break;
            }
        }
    }
    printf("%d", minrow);
    return 0;
}
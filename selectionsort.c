#include <stdio.h>
#include <stdlib.h>

void printarr(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return;
}
void selectionsort(int *arr, int size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    return;
}
int main()
{
    printf("Enter Size :\n");
    int size;
    scanf("%d", &size);
    int arr[size];
    printf("Enter Elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    selectionsort(arr, size);
    printarr(arr, size);
}
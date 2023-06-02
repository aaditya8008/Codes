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
void insertionsort(int *arr, int size)
{
    int min;
    int j;
    for (int i = 0; i < size; i++)
    {
        int key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)    //sorted portion so compared from end.
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
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

    insertionsort(arr, size);
    printarr(arr, size);
}
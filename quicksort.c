#include <stdio.h>
#include <stdlib.h>
void create(int *arr, int size)
{
    printf("Enter %d Elements :\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    return;
}
void print(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}
int partition(int *arr, int s, int e)
{
    int pivot = arr[e];
    int i = s - 1; // to exchange smaller  elements
    for (int j = s; j < e; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    i++;
    int temp = pivot; // change pivot
    arr[e] = arr[i];
    arr[i] = temp;
    return i;
}
void quicksort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int pidx = partition(arr, s, e);
    quicksort(arr, s, pidx - 1);
    quicksort(arr, pidx + 1, e);
}

int main()
{
    printf("Enter size :\n");
    int size;
    scanf("%d", &size);
    int arr[size];
    create(arr, size);
    printf("Original array :\n");
    print(arr, size);
    quicksort(arr, 0, size - 1);
    printf("Sorted array :\n");
    print(arr, size);
}
#include <stdio.h>
void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return;
}
void bubblesort(int *arr, int size)
{
    int swap;
    for (int i = 0; i < size - 1; i++)
    {
        swap = 0;
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j + 1] < arr[j])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swap = 1;
            }
        }
        if (swap == 0)
            break;
    }
}

int main()
{
    int size;
    printf("Enter size:\n");
    scanf("%d", &size);
    int arr[size];
    printf("Enter data:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Original Array:\n");
    print(arr, size);
    bubblesort(arr, size);
    printf("Sorted Array:\n");
    print(arr, size);
}
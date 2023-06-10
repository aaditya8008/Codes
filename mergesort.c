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
void merge(int *arr, int f, int mid, int e)
{
    int i, j, k;
    int n1 = mid - f + 1;
    int n2 = e - mid;
    int F[n1], E[n2];
    for (int i = 0; i < n1; i++)
    {
        F[i] = arr[f + i];
    }
    for (int j = 0; j < n2; j++)
    {
        E[j] = arr[mid + 1 + j];
    }
    i = 0;
    j = 0;
    k = f;
    while (i < n1 && j < n2)
    {
        if (F[i] <= E[j])
        {
            arr[k] = F[i];
            i++;
        }
        else
        {
            arr[k] = E[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        arr[k] = F[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        arr[k] = E[j];
        j++;
        k++;
    }
}
void mergesort(int *arr, int f, int e)
{
    if (f < e)
    {
        int mid = f + (e - f) / 2;

        mergesort(arr, f, mid);
        mergesort(arr, mid + 1, e);

        merge(arr, f, mid, e);
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
    mergesort(arr, 0, size - 1);
    printf("Sorted Array:\n");
    print(arr, size);
}
#include <stdio.h>


void display(int arr[],int n)
{
    int i=0;
    while( i<=n)
    {
        printf("%d\t",arr[i]);
        i++;
    }
    printf("\n");
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partation(int arr[], int low, int high)
{
    int pivot = arr[low];
    int start = low+1;
    int end = high;
    while (start < end)
    {
        while (arr[start] <= pivot)
        {
            start++;
        }
        while (arr[end] > pivot)
        {
            end--;
        }
        if (start < end)
            swap(&arr[start], &arr[end]);
    }
    swap(&arr[low],&arr[end]);
    return end;
}

int quicksort(int arr[], int low, int high)
{
    int loc =partation(arr, low, high);
    quicksort(arr, low, loc - 1);
    quicksort(arr, loc + 1, high);
    return 0;
}
int main()
{
    int arr[] = {12, 9, 7, 15, 42, 35};
    int n = 6;
    quicksort(arr, 0, n-1);
    display(arr,n);
    return 0;
}
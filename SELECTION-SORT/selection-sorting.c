#include <stdio.h>

// Function to display the array
void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

// Function for selection sorting
void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_index = i, temp;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_index])
            {
                min_index = j;
            }
        }
        // Corrected swapping logic after finding the minimum element in the inner loop
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
}

int main()
{
    int n = 5;
    int arr[] = {2, 16, 34, 1, 7};

    printf("Original array:\n");
    display(arr, n);

    // Sorting the array using selection sort
    sort(arr, n);

    printf("Sorted array:\n");
    display(arr, n);

    return 0;
}

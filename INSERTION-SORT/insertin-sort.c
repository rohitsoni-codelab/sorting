#include<stdio.h>

void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void sort(int arr[],int n)
{
    for(int i=1;i<n;i++)//here we are initialising i with 1 as we have condisered the 0th element a sorted array
    {
        int j=i-1;
        int temp=arr[i];
        while(j>=0 && arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
}
int main()
{
    int n=6;
    int arr[]={13,62,2,32,5,10};
    display(arr,n);
    sort(arr,n);
    display(arr,n);    
}
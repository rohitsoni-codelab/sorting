#include<stdio.h>
//code for displaying the array
void display(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

//code for sorting
void sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int issort=1;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                issort=0;
            }
        }
        if(issort==1)
            break;
    }
}


int main()
{
    int n=6;
    int arr[]={4,6,14,52,62,12};
    display(arr,n);
    sort(arr,n);
    display(arr,n);
}
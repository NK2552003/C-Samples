//WAP to bubble sort
#include <stdio.h>
 
void swap(int* x, int* y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
// A function to implement bubble sort
void bubbleSort(int arr[], int n)
{
    int i, j;
    for (i = 0; i < n - 1; i++)
    {
        // Last i elements are already in place
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}
 
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main()
{
    int a,b,c,d,e,f,i;
    printf("Enter the numbers in the array: ");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int arr[]={a,b,c,d,e,f};
    int size = sizeof(arr)/sizeof(arr[0]);
    printf("Size of array is %d \n", size);
    printf("Entered array without sorting it is {");
    for (i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("}\n");
    bubbleSort(arr, size);
    printf("Sorted array: \n");
    printArray(arr, size);
    return 0;
}
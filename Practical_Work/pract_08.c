//make a program for sorting the arry the we inputed
#include <stdio.h>
/*Function for swaping the values*/
void swap(int* a, int* b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

/*Function for bubble sort*/
void bubblesort(int arr[], int size)
{
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
            }
        }
    }
}

/*Now making the function for output */

void opt(int arr[],int size)
{
    int i;
    printf("{");
    for (i=0;i<size;i++)
    {
        printf("%d, ",arr[i]);
    }
    printf("}\n");
}

//main body of the file that we made 
int main(void)
{
    int size,a,b,c,d,e,f;
    printf("Enter 6 numbers in an array(enter the numbers by giving space between them)\n");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    int arr[]={a,b,c,d,e,f};
    /*Now let us find the size of an array that we made*/
    size = sizeof(arr)/sizeof(arr[0]);
    /*Now we have to make the function that will sort the array in ascending order*/
    bubblesort(arr,size);
    printf("Sorted array will be: ");
    opt(arr,size);
    return 0;
}
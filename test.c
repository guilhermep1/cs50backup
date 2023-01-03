#include <cs50.h>
#include <stdio.h>

void sortarr(void);

int main(void)
{
    //defining array length and values
    int arr[10] = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10];
    //sorting array
    sortarr();
    //printing sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", arr[i]);
    }
}

void sortarr(void)
{
    
}

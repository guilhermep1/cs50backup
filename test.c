#include <cs50.h>
#include <stdio.h>

void sortarr(void);

int main(void)
{
    //defining array length and values
    int arr[10] = [0, 7, 8, 5, 4, 1, 2, 3, 9, 6];
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
    for (int i = 0; i < 10; i++)
    {
        int replace;
        int min = i;
        for (int j = i + 1; j < 10; j++)
        {
            if(arr[j] < arr[i])
            {
                min = arr[j];
            }
        }
        if (arr[i] != min)
        {
            replace = arr[i]
        }
    }
}

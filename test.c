#include <cs50.h>
#include <stdio.h>

//defining array length and values
int arr[10] = {0, 7, 8, 5, 4, 1, 2, 3, 9, 6};

//function prototype
void sortarr(void);

//main function
int main(void)
{
    //sorting array
    sortarr();
    //printing sorted array
    printf("Sorted array: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%i ", arr[i]);
    }
    printf("\n");
}

void sortarr(void)
{
    while (!verify)
    {
        for (int i = 0; i < 10; i++)
        {
            int replace;
            int min = i;
            for (int j = i + 1; j < 10; j++)
            {
                if(arr[j] < arr[i])
                {
                    min = j;
                }
            }
            if (i != min)
            {
                replace = arr[i];
                arr[i] = arr[min];
                arr[min] = replace;
            }
        }
    }
}

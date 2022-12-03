#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    //prompts user for height
    do
    {
        height = get_int("Height: ");
    }
    while(height<1 || height>8);

    //row
    for(int i=0; i<height; i++)
    {
        int k=0;
        //column
        for(int j=0; j<=i; j++)
        {
            //space
            while(k<height-i-1)
            {
                printf(" ");
                k++;
            }
            //brick
            printf("#");
        }

        //space between the two pyramids
        printf("  ");

        //second pyramid
        for(int j=0; j<=i; j++)
        {
            //brick
            printf("#");
        }

        printf("\n");
    }
}
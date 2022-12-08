#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    //passing argument as variable
    int key = atoi(argv[1]);
    //Making sure user input is correct
    if(argc == 2 && key > 0)
    {
        //Execute normally
        //Encryption algorithm
        
        return 0;
    }
    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
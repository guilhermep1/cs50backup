#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //passing argument as variable
    int key = atoi(argv[1]);
    //Making sure user input is correct
    if(argc == 1 && isalnum(key) && argv[0] > 0)
    {
        //Execute normally
        return 0;
    }
    else
    {
        return 1;
    }
}
#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    //Making sure user input is correct
    if(argc == 1 && isalnum(argv[0]) && argv[0] > 0)
    {
        //Execute normally
        return 0;
    }
    else
    {
        return 1;
    }
}
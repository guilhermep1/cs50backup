#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    printf("%d\n%s\n", argc, argv[0]);
    //passing argument as variable
    int key = atoi(argv[1]);
    //Making sure user input is correct
    if(argc == 2 && isalnum(key) && key > 0)
    {
        //Execute normally
        printf("key: %d\n", key);
        return 0;
    }
    else
    {
        printf("error\n");
        return 1;
    }
}
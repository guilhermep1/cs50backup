#include <cs50.h>
#include <stdio.h>

string encrypt(string plaintext, string key);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string key = argv[1];
        if(strlen(key) != 26)

    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}

string encrypt(string plaintext, string key)
{

}
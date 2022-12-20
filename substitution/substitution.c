#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string encrypt(string plaintext, string key);

int main(int argc, string argv[])
{
    if (argc == 2 && ispalha(argv[1]))
    {
        string key = argv[1];
        if(strlen(key) != 26)
        {
            printf("Key must contian 26 characters.\n");
            return 1;
        }
        else
        {
            
        }
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
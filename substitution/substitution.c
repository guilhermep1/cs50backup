#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string encrypt(string plaintext, string key);

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        string key = argv[1];
        if (strlen(key) == 26 && isalpha(key))
        {
            string plaintext = get_string("plaintext: ");
            printf("ciphertext: %s\n", encrypt(plaintext, key));
            return 0;
        }
        else
        {
            printf("Key must contain 26 alphabetic characters.\n");
            return 1;
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
    string ciphertext;

    for (int i = 0; i < strlen(plaintext); i++)
    {
        char currentchar = plaintext[i];
        ciphertext[i] = key[currentchar];
        printf("%s\n", ciphertext);
    }

    return ciphertext;
}
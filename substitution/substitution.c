#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool checkrepeat(string key);
bool checkalpha(string key);
void encrypt(char plaintext, string key);

int main(int argc, string argv[])
{
    //checks if the user has inputed the correct number of arguments
    if (argc == 2)
    {
        string key = argv[1];
        //handling key length, character type & repetition
        if (strlen(key) == 26 && checkalpha(key) && !checkrepeat(key))
        {
            string plaintext = get_string("plaintext: ");
            //printing ciphertext
            printf("ciphertext: ");
            for (int i = 0; i < strlen(plaintext); i++)
            {
                encrypt(plaintext[i], key);
            }
            printf("\n");
            return 0;
        }
        else
        {
            printf("Key must contain 26 different alphabetic characters.\n");
            return 1;
        }
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
}

//checks for repeated characters
bool checkrepeat(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        //inner loop goes through the array skipping key[i]
        for (int j = 0; j < strlen(key); j++)
        {
            if (j == i)
            {
                j++;
            }
            if (key[i] == tolower(key[j]) || key[i] == toupper(key[j]))
            {
                return true;
            }
        }
    }
    return false;
}

//checks if all characters are alphabetical
bool checkalpha(string key)
{
    for (int i = 0; i < strlen(key); i++)
    {
        if (!isalpha(key[i]))
        {
            return false;
        }
    }
    return true;
}

//encrypts text
void encrypt(char plaintext, string key)
{
    //checking if character is alphabetic
    if (isalpha(plaintext))
    {
        //checking if character is uppercase or lowercase
        if (isupper(plaintext))
        {
            int letter = plaintext - 'A';
            printf("%c", toupper(key[letter]));
        }
        else
        {
            int letter = plaintext - 'a';
            printf("%c", tolower(key[letter]));
        }
    }
    else
    {
        printf("%c", plaintext);
    }
}
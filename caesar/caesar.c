#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

bool only_digits(string input);
char rotate(char c, int n);

int main(int argc, string argv[])
{
    //checking if user has entered the correct number of arguments
    if (argc == 2)
    {
        if (only_digits(argv[1]))
        {
            //passing argument as variable
            int key = atoi(argv[1]);
            //reads user input
            string plaintext = get_string("plaintext: ");
            //calls encryption algorithm
            printf("ciphertext: ");
            for (int i = 0; i < strlen(plaintext); i++)
            {
                char cipher = rotate(plaintext[i], key);
                printf("%c", cipher);
            }
            printf("\n");
            return 0;
        }
    }
    //Making sure user input is correct
    printf("Usage: ./caesar key\n");
    return 1;
}

//checking if user input contains only digits
bool only_digits(string input)
{
    for (int i = 0; i < strlen(input); i++)
    {
        if (!isdigit(input[i]))
        {
            return false;
        }
    }
    return true;
}

//encrypts char
char rotate(char c, int n)
{
    char newchar;
    if (isalpha(c))
    {
        if (isupper(c))
        {
            return ((c - 'A' + n) % 26) + 'A';
        }
        else
        {
            return ((c - 'a' + n) % 26) + 'a';
        }
    }
    else
    {
        return c;
    }
}
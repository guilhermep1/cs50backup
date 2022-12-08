#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

string encrypt(string plaintext, int key);

int main(int argc, string argv[])
{
    //passing argument as variable
    int key = atoi(argv[1]);
    //Making sure user input is correct
    if(argc == 2 && key > 0)
    {
        //reads user input
        string plaintext = get_string("plaintext: ");
        //calls encryption algorithm
        string ciphertext = encrypt(plaintext, key);
        printf("ciphertext: %s\n", ciphertext);
        return 0;
    }

    printf("Usage: ./caesar key\n");
    return 1;
}

//encryption algorithm
string encrypt(string plaintext, int key)
{
    int i = 0;
    string ciphertext;

    while (plaintext[i] != "\0")
    {
        if (isalpha(plaintext[i]))
        {
            ciphertext[i] = (plaintext[i] + key) % 26;
        }
        else
        {
            ciphertext[i] = plaintext[i];
        }
        i++;
    }
}
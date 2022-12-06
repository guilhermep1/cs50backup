#include <cs50.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);

int main(void)
{
    string text = get_string("Text: ");
    printf("%d\n", count_letters(text));
}

//A function that counts all letters in a string
int count_letters(string text)
{
    int letters = 0, i = 0;
    while(text[i] != '\0')
    {
        if(text[i] == ' ')
        {
            i++;
        }
        else
        {
            letters++;
            i++;
        }
    }
    return letters;
}
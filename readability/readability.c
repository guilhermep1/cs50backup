#include <cs50.h>
#include <stdio.h>
#include <ctype.h>

int count_letters(string sentence);
int count_words(string sentence);

int main(void)
{
    string text = get_string("Text: ");
    printf("%d letters\n", count_letters(text));
    printf("%d words\n", count_words(text));
}

//Counts all letters in a string
int count_letters(string sentence)
{
    int letters = 0, i = 0;
    while(sentence[i] != '\0')
    {
        if(sentence[i] == ' ' || !isalpha(sentence[i]))
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

//Counts all words in a sentence
int count_words(string sentence)
{
    int i = 0, words = 1;
    while(sentence[i] != '\0')
    {
        if(sentence[i] == ' ')
        {
            words++;
        }
        i++;
    }
    return words;
}
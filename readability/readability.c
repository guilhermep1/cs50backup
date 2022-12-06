#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text;
    do
    {
        text = get_string("Text: ");
    }
    while(strlen(text) <= 0);
    printf("%d letters\n", count_letters(text));
    printf("%d words\n", count_words(text));
    printf("%d sentences\n", count_sentences(text));
}

//Counts all letters in a string
int count_letters(string text)
{
    int letters = 0, i = 0;
    while(text[i] != '\0')
    {
        if(isalpha(text[i]))
        {
            letters++;
        }
        i++;
    }
    return letters;
}

//Counts all words in a string
int count_words(string text)
{
    int i = 0, words = 1;
    while(text[i] != '\0')
    {
        if(isspace(text[i]))
        {
            words++;
        }
        i++;
    }
    return words;
}

//Counts all sentences in a string
int count_sentences(string text)
{
    int i = 0, sentences = 0;
    while(text[i] != '\0')
    {
        if(text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
        i++;
    }
    return sentences;
}
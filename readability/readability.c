#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);
int gradelevel(string text);

int main(void)
{
    string text;
    int grade;

    //Gets user input while string is empty
    do
    {
        text = get_string("Text: ");
    }
    while (strlen(text) <= 0);

    grade = gradelevel(text);

    //In case of senior level grade or lower than grade 1, doesn't print out the value of grade
    if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade >= 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %d\n", grade);
    }

}

//Counts all letters in a string
int count_letters(string text)
{
    int letters = 0, i = 0;
    while (text[i] != '\0')
    {
        if (isalpha(text[i]))
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
    while (text[i] != '\0')
    {
        if (isspace(text[i]))
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
    while (text[i] != '\0')
    {
        if (text[i] == '.' || text[i] == '?' || text[i] == '!')
        {
            sentences++;
        }
        i++;
    }
    return sentences;
}

//Calculates grade level
int gradelevel(string text)
{
    //Converting integer values to float
    float letters = count_letters(text) * 1.0;
    float words = count_words(text) * 1.0;
    float sentences = count_sentences(text) * 1.0;

    //Formula for Coleman-Liau index
    float l = (letters / words) * 100.00;
    float s = (sentences / words) * 100.00;
    int grade = round((0.0588 * l) - (0.296 * s) - 15.8);

    return grade;
}

#include <stdio.h>
#include <string.h>

int count_letters(string text);

int main(void)
{
    string text = get_string("Text: ");
    printf("%d\n",count_)
}

int count_letters(string text)
{
    int letters = 0, i = 0;
    while(text[i] != "\0")
    {
        letters++;
        i++;
    }
    return letters;
}
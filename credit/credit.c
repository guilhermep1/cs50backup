#include <cs50.h>
#include <stdio.h>

long checksum(long credit);

int main(void)
{
    long credit = get_long("Number: ");
    checksum(credit);
}

long checksum(credit)
{
    while(credit>=10){
        credit = credit/10;
        printf(credit%10);
    }
}
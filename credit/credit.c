#include <cs50.h>
#include <stdio.h>

long checksum(long credit);

int main(void)
{
    bool validity;
    long credit = get_long("Number: ");
    checksum(credit);
}

//Checksum function
long checksum(long credit)
{
    int digit;
    int sum = 0;
    credit /= 10;
    while( credit >= 10)
    {
        digit = credit % 10;
        credit /= 100;
        sum += (digit*2);
        printf("%d\n",sum);
    }
    printf("%d\n",sum);
    return 0;
}
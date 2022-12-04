#include <cs50.h>
#include <stdio.h>

long checksum(long credit);

int main(void)
{
    long credit = get_long("Number: ");
    checksum(credit);
}

long checksum(long credit)
{
    int digit;
    while(credit>=10){
        credit = credit/10;
        printf("%ld\n", credit);
        digit = credit%10;
        printf("%d\n",digit);
    }
    printf("\n");
    return 0;
}
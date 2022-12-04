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
    credit/=10;
    while(credit>=10){
        digit = credit%10;
        credit = credit/100;
        // printf("%ld\n", credit);
        printf("%d\n",digit);
    }
    printf("\n");
    return 0;
}
#include <cs50.h>
#include <stdio.h>

long checksum(long credit);

int main(void)
{
    long credit = get_long("Number: ");
    printf("%ld\n", credit%15);
}

// long checksum(credit)
// {

// }
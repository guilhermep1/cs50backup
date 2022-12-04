#include <cs50.h>
#include <stdio.h>

bool checksum(long credit);

int main(void)
{
    bool validity = false;
    long credit;
    do
    {
        credit = get_long("Number: ");
    }
    while(credit<1);
}

//Checksum function
bool checksum(long credit)
{
    int digit;
    int sum = 0;
    //reduces credit car number by 1 digit
    credit /= 10;
    while (credit >= 10)
    {
        //gets last digit
        digit = credit % 10;
        //reduces credit car number by 2 digits
        credit /= 100;
        sum += (digit * 2);
    }
    return true;
}
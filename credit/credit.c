#include <cs50.h>
#include <stdio.h>

bool checksum(long credit);
int checkcard(long credit);

int main(void)
{
    bool validity;
    long credit;

    do
    {
        credit = get_long("Number: ");
        validity = checksum(credit);
    }
    while(credit<1);
    
    if(validity = true)
    {
        checkcard(credit);
    }
    else
    {
        printf("INVALID");
    }
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
    if(sum%10==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int checkcard(long credit)
{
    int digits;
    //gets first two digits from credit card number
    while(credit>=100)
    {
        credit/=10;
        printf("%ld", credit);
    }
}
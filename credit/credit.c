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

    if(validity == true)
    {
        checkcard(credit);
    }
    else
    {
        printf("INVALID\n");
    }
}

//Checksum function
bool checksum(long credit)
{
    long credit2 = credit;
    long credit1 = credit;
    int digit;
    int digit1;
    int sum = 0;
    int sum1 = 0;
    int sumall;

    //sums digits not multiplied by 2
    while (credit1 > 0)
    {
        //gets last digit
        digit1 = credit1 % 10;
        //reduces credit car number by 2 digits
        credit1 /= 100;
        if(digit1*2 >= 10)
        {
            digit1 = ((digit1) / 10) + ((digit1) % 10);
            sum1 += digit1;
        }
        else
        {
        sum1 += (digit1);
        }
    }

    //reduces credit car number by 1 digit
    credit2 /= 10;

    //sums digits multiplied by 2
    while (credit2 > 0)
    {
        //gets last digit
        digit = credit2 % 10;
        //reduces credit car number by 2 digits
        credit2 /= 100;
        if(digit*2 >= 10)
        {
            digit = ((digit*2) / 10) + ((digit*2) % 10);
            sum += digit;
        }
        else
        {
        sum += (digit * 2);
        }
    }

    //sums the two values
    sumall = sum + sum1;

    //verifies credit card validity
    if(sumall%10==0)
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
    }

    //verifies credit card type
    switch(credit)
    {
        case 13 || 16
    }

    return 0;
}